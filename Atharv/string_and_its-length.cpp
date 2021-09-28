#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string s1;
    string s2;
    string greeting = "GoodMorning";
    cout<<greeting<<endl;
    cout << "The length of greeting is: " << greeting.length()<<endl;
    cout << "Sixth letter of greetng is: \n" << greeting[5] << endl;
    cout << "Type your First name : " << endl;
    cin >> s1;
    cout << "Type your last name : " << endl;
    cin >> s2;
    cout << "Your Full Name is : \n" << s1 + " " + s2 << endl;
                
}

          