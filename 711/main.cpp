#include <iostream>

using namespace std;

//
//  ex7_01.cpp
//  Exercise 7.1
//
//  Created by pezy on 14/10/30.
//  Copyright (c) 2014 pezy. All rights reserved.
//

#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;

struct Sales_data{
    //成员函数
    std::string isbn() const { return bookNo; }
    Sales_data& combine( const Sales_data& );
    double avg_price() const;
    //数据成员
    string bookNo;//ISNB码
    unsigned units_sold = 0;//销售数量
    double revenue = 0.0;//单价
};

double Sales_data::avg_price() const
{
    if( units_sold )
        return revenue / units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;//返回该函数调用对象
}

//Sales_data的非成员借口函数
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream, Sales_data&);

int main()
{
    Sales_data total;
    //输入ISNB码，销售数量，单价
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.isbn() == trans.isbn()) {
                total.combine( trans );
            }
            else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}

