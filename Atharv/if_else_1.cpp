#include <iostream>
using namespace std;

int main() 
{
        int a,b,c;
        cout << "Type your three numbers(press space after each number) \n";
        cin >> a >> b >> c;

        if(a>b) 
        {
                if(a>c)
                {
                cout << "Greatest Number amongst three numbers is : " << a;
                }
                else
                {
                    cout << "Greatest Number amongst three numbers is : " << c;
                }
        }
        else
        {
            if(b>c)
            {
                cout << "Greatest Number amongst three numbers is : " << b;

            }
            else
            {
                cout << "Greatest Number amongst three numbers is : " << c;

            }

        }    
        return 0;
}