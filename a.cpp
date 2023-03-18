#include <iostream>
using namespace std;

class a
{
    int a;
    string name;

public:
    getdata();
    putdata();
};

a::getdata()
{
    cout << "enter the number :";
    cin >> a;
    cout << "entre the name : ";
    cin >> name;
}

a::putdata()
{
    cout << "the number is :" << a << endl;
    cout << "the name is : " << name << endl;
}

int main()
{

a o ;
o.getdata();
o.putdata();

}