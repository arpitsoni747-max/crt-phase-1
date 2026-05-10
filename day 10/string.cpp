#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string str1 = "Hello";
    string str2 = "jecrc";
    cout << str1 << endl;
    
    // method of string
    // 1 length of string

int n = str1.length();
    cout << "Length of string is : " << n << endl;
       // 2 Append string
       cout << "After appending string is : " << str1.append("students") << endl;
       // 3 empty string
       cout << "Is string empty : " << str2.empty() << endl;
       // 4 concatination of string
         cout << "After concatination of string is : " << str1 + "Bacho" << endl;
         cout << "After concatination of string is 2 : " << str1 << endl;
         // push_back() method
            str2.push_back('u');
            cout << "After push_back() method : " << str2 << endl; //jecrc
            // pop_back() method
            str2.pop_back();
            cout << "After pop_back() method : " << str2 << endl; // jecrc
            //find() method
            int index = str1.find("ello");
            cout << "Index of 'ello' in str1 : " << index << endl;
            //swap() method
            str1.swap(str2);
            cout << "After swapping str1 and str2 : " << endl;
            cout << "str1 : " << str1 << endl;//jecrc
            cout << "str2 : " << str2 << endl;//Hello students

            // substr() method
            string subStr = str2.substr(5, 6); //5 is index and 6 is length of substring
            cout << "Substring of str2 from index 5 with length 6 : " << subStr << endl;
            //getline() method
            string str3;
            //cin>> str3;
                getline(cin, str3);
            cout << "You entered : " << str3 << endl;
    return 0;
}