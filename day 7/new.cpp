#include <iostream>
using namespace std;

// Base Class
class College
{
protected:
    string name;
    int age;

public:
    // Constructor
    College(string n, int a)
    {
        name = n;
        age = a;
    }

    // Virtual Function
    virtual void category()
    {
        cout << "Belongs to College" << endl;
    }

    // Function to display common data
    void displayPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Derived Class : Student
class Student : public College
{
private:
    string course;
    int rollNo;
    string studentClass;

public:
    Student(string n, int a, string c, int r, string cl)
        : College(n, a)
    {
        course = c;
        rollNo = r;
        studentClass = cl;
    }

    // Overriding Virtual Function
    void category() override
    {
        cout << "Category : Student" << endl;
    }

    void displayStudent()
    {
        displayPerson();
        cout << "Course   : " << course << endl;
        cout << "Roll No  : " << rollNo << endl;
        cout << "Class    : " << studentClass << endl;
    }
};

// Derived Class : Teacher
class Teacher : public College
{
private:
    string deptId;
    int empId;
    float salary;

public:
    Teacher(string n, int a, string d, int e, float s)
        : College(n, a)
    {
        deptId = d;
        empId = e;
        salary = s;
    }

    // Overriding Virtual Function
    void category() override
    {
        cout << "Category : Teacher" << endl;
    }

    void displayTeacher()
    {
        displayPerson();
        cout << "Department ID : " << deptId << endl;
        cout << "Employee ID   : " << empId << endl;
        cout << "Salary        : " << salary << endl;
    }
};

// Main Function
int main()
{
    // Student Object
    Student s1("Arpit", 20, "BCA", 101, "BCA-2nd Year");

    // Teacher Object
    Teacher t1("Rahul Sir", 40, "CSE", 5001, 55000);

    cout << "===== Student Details =====" << endl;
    s1.displayStudent();
    s1.category();

    cout << endl;

    cout << "===== Teacher Details =====" << endl;
    t1.displayTeacher();
    t1.category();

    return 0;
}