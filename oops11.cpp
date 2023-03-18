#include <iostream>
#include <stdlib.h>
using namespace std;
class alpha
{
protected:
    int a;
public:
    void input_a()
    {
        cout << "enter the number in alpha class   :";
        cin >> a;
    }
};
class beta
{
protected:
    int b;
public:
    void input_b()
    {
        cout << "enter the number of beta class  :";
        cin >> b;
    }
};
class gamma : public alpha, public beta
{
public:
    void sum()
    {
        cout << "the sum of the number are  :" << a + b << endl;
    }
    void display()
    {
        cout << "the numbers are : " << a << endl << b << endl;
    }
};
int main()
{
    gamma c;
    c.input_a();
    c.input_b();
    c.display();
    c.sum();
}
