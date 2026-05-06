#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    int age;

    // Parameterized Constructor
    Student(string n, int r, int a)
    {
        name = n;
        rollNo = r;
        age = a;
    }

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Roll Number = " << rollNo << endl;
        cout << "Age = " << age << endl;
    }
};

int main()
{
    Student s("Arpit", 101, 20);

    s.display();

    return 0;
}