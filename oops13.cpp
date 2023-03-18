#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int n, i, j;
class data
{
protected:
    char name[100];
    float age;
    char address[100];

public:
    void record1()
    {
        for (i = 0; i < n; i++)
        {
            cout << "enter the name of the person  :" << i + 1;
            cin >> this->name[i];
            cout << "enter the address of the person : " << i + 1;
            cin >> this->address[i];
            cout << "enter  the age of the person : " << i + 1;
            cin >> this->age[i];
        }
    }

    int eldest()
    {
        
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (this->age[i] > this->age[j])
                {
                    return this->age[i];
                }
                else
                {
                    cout << "person detaill not found";
                }
            }
        }
    }
    void display()
    {
        for (i = 0; i < n; i++)
        {
            cout << "the name of the person is : " << this->name[i] << endl;
            cout << "the address of the person is : " << this->address[i] << endl;
            cout << "the age of the person is : " << this->age[i] << endl;
        }
    }
};
int main()
{
    data r;

    r.record1();
    r.eldest();
    r.display();
}