#include <iostream>
#include <numeric>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> vec = {1, 9, 10, 5};
    int sum = accumulate(  vec.begin(), vec.end(), 0 );//对vec中的元素求和，和的初值是0

    cout << "sum:" << sum;

    list<string> strList = { "chuan", "dong" };

    string strSum = accumulate( strList.begin(), strList.end(), string("xu") );
    //string strSum = accumulate( strList.begin(), strList.end(), "" );//错误const char*没有定义+


    cout << "strSum:" << strSum;
    return 0;
}

