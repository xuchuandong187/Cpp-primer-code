#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> nVec = { 1, 0, 8, 4 };
    int nSum = accumulate( nVec.begin(), nVec.end(), 0 );

    cout << "nSum:" << nSum;
    return 0;
}

