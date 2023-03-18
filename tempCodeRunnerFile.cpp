#include <iostream>
using namespace std;

class swap1
{

    int x;
    friend void swapping(int *, int *);
};
 class swap2
{

    int y;
    friend void swapping(int *, int *);
} ;
void swapping(int *i, int *j)
{
    swap1 a;
    swap2 b;

    a.x = *i;
    b.y = *j;
    int t = *i;
    *i = *j;
    *j = t;

    cout << "the swapping is : " << *i, *j;
}
int main()