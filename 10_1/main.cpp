#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    int val = 42;
    vector<int> vec = {1, 32, 8, 42};
    auto result = find( vec.cbegin(), vec.cend(), val );

    cout << "the value:" << val << ( result == vec.cend() ? " is not pressent" : " is pressent") << endl;

    return 0;
}

