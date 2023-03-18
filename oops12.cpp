#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll_number;
    char name[100];

public:
    void roll_number1()
    {
        cout << "\n---------------------------------\n"
             << endl;
        cout << "enter the name of the student : ";
        cin.getline(name, 100);
        cout << "enter the roll number of the student  :";
        cin >> roll_number;
    }
};
class test : public student
{
protected:
    int phy, chem, math;

public:
    void marks()
    {
        cout << "\n---------------------------------\n"
             << endl;
        cout << "enter the marks in physics  :";
        cin >> phy;
        cout << "enter the marks in chemistry  :";
        cin >> chem;
        cout << "enter the marks in maths  :";
        cin >> math;
    }
};
class sports : public student
{
protected:
    int cricket_score;
    int football_score;

public:
    void score()
    {
        cout << "\n---------------------------------\n"
             << endl;
        cout << "enter the score in cricket  :";
        cin >> cricket_score;
        cout << "enter the score in football  :";
        cin >> football_score;
    }
};
class result : public test, public sports
{
public:
    int result_score = cricket_score + football_score;
    int result_marks = phy + math + chem;
    void display()
    {
        int result_score = cricket_score + football_score;
        int result_marks = phy + math + chem;
        cout << "\n---------------------------------\n"
             << endl;
        cout << "the sum of the score is : " << result_score << endl;
        cout << "the sum of the marks is : " << result_marks << endl;
    }
};
int main()
{
    result r;
    student s;
    s.roll_number1();
    r.marks();
    r.score();
    r.display();
    if (r.result_marks >= 120 && r.result_score >= 100)
    {
        cout << "student is passed " << endl;
    }
    else
    {
        cout << "student is fail ";
    }
}