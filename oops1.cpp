#include <iostream>

using namespace std;

class manager
{
    char m[30];
    int id, age;

public:
    getdata();
    putdata();
};

manager::getdata()
{

    cout << "enter the name of an manager : ";
    cin >> m;
    cout << "enter the id of an manager : ";
    cin >> id;
    cout << "enter the age of the manager : ";
    cin >> age;
}

 manager::putdata()
{

    cout << "the name of manager is : " << m << endl;
    cout << "the id of manager is : " << id << endl;
    cout << "the age of manager is : " << age << endl;
}
int main()
{

    int num;
    manager detail[50];

    cout << "enter the number of manager : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        detail[i].getdata();
    }

    cout << "the manager details are :\n ";

    for (int i = 0; i < num; i++)
    {
        detail[i].putdata();
    }

    return 0;
}
