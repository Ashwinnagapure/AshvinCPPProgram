#include <iostream>
#include<stdlib.h>
#include <conio.h>
#include<bits/stdc++.h>
using namespace std;
class Person
{
    char Name[20];
    int Age;

public:
    void getData()
    {
        cout << "Enter Person Name:";
        cin.getline(Name,100);
        cout << "Enter Person Age:";
        cin >> Age;
    }
    void putData()
    {
        cout << "\n\nDetails About Eldest Person as follows:";
        cout << "\nName=" << Name << "\nAge=" << Age;
    }
    Person &Compare(Person &p1)
    {
        if (p1.Age > this->Age)
            return p1;
        return *this;
    }
};

int main()
{
  //  clrscr();
    Person x, y, z;
    x.getData();
    y.getData();
    z = x.Compare(y);
    z.putData();
    getch();
}
