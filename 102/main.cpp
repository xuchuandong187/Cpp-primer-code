#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    list<string> listStr = { "xcd", "chuandong", "mmd" };
    string strVal = "xcd";

    cout << count( listStr.begin(), listStr.end(), strVal );

    return 0;
}

