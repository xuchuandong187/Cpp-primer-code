#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = { 1, 9, 4, 8, 5, 5 };
    int val = 5;

    cout << "vec == 5 有： " << count( vec.begin(), vec.end(), val );

    return 0;
}

