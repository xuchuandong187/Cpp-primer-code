#include <iostream>
#include <numeric>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<char*> listRoster = { "xcd" };
    list<char*> listRoster1 = { "xcd1" };

    bool isEqual = equal( listRoster.begin(), listRoster.end(), listRoster1.begin() );

    cout << "isEqual: " << isEqual;
    return 0;
}

