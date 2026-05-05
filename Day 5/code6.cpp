#include <iostream>
using namespace std;
int main(){
    int value = 10;
    int *ptr = &value;
    cout <<"add:"<<ptr << endl;
    cout <<"value:"<<*ptr<<endl;

    *ptr = 20;
    cout<<"value:"<<*ptr<<endl;
    return 0;
}