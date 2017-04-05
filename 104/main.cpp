#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<double> v = { 10.1, 20,3 };
    double dSum = accumulate( v.begin(), v.end(), 0 );

    cout << "dSum:" << dSum;
    return 0;
}

/**
  * 答：错误，第三个参数0，导致浮点型转换到整型过程中，部分数据丢失，结果不符。
  * /

