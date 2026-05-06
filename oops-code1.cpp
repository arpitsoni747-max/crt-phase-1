#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int roll_num;
    void show () {
        cout<<name<<" "<<roll_num<<endl;
    }
};
int main () {
    Student s1;   
    Student s2;   
    Student s3;   
    // values assign
    s1.name = "arpit";
    s1.roll_num = 101;

    s2.name = "json";
    s2.roll_num = 102;

    s3.name = "chhhh";
    s3.roll_num = 103;

    // method call
    s1.show();
    s3.show();
    s2.show();

    return 0;
}