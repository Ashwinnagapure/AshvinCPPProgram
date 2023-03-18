#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class myclass
{
    int i;

public:
    void read(int j)
    {
        i = j;
    }
    int getint()
    {
        return i;
    }
};
int main()
{

    myclass ob, *objectPointer;
    objectPointer = &ob; // get address of ob
    objectPointer->read(10);
          cout << objectPointer->getint(); // use -> to call getlnt()
    getch();
}