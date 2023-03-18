#include <iostream>
using namespace std;
class complex
{
private:
    float real=0;
    float image=0;
public:
   // complex() : real(0), image(0) {} // constructor
    void input()
    {
        cout << "enter the real number :";
        cin >> real;
        cout << "enter the imaginary number :";
        cin >> image;
    }
    complex operator+(const complex &obj)
    {
        complex t;
        t.real = real + obj.real;
        t.image = image + obj.image;
        return t;
    }
    void display()
    {
        cout << real << "+" << image<<"i" << endl;
    }
};
int main()
{
    complex c1, c2, result;
    cout << "enter the first complex number :\n ";
    c1.input();
    cout << "enter the second complex number :\n ";
    c2.input();
    result = c1 + c2;
    result.display();
}
