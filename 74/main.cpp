#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    string ads;
public:
    Person(string UserName, string UserAds);
    void Show_info() { cout << "name:" << name << " ads:" << name; }
    string getName() { return name; }
    string getAds() { return ads; }
};

Person::Person(string UserName, string UserAds):name(UserName), ads(UserAds) {}


int main()
{
    cout << "Hello World!" << endl;
    Person person( "chuandongxu", "zhejiang" );
    person.Show_info();
    return 0;
}

