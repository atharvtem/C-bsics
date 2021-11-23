#include <iostream>
using namespace std;

void add();
void sub();
void multi();
void div();
int main()
{
    char operation;
    int x,y;
    cin >> operation;
    cout << "Enter your First number: ";
    cin >> x;
    cout << "Enter your Second number: ";
    cin >> y;
    cout << "What operation do you want to do?";
    cin >> operation;
    

    switch(operation)
    {
        case '+':
            add();
            break;
        case '-':
            sub();
            break;
        case '*':
            multi();
            break;
        case '/':
            div();
            break;
        default :
            cout << "Error! Operation not found.";
            
    }

}

void add()
{
    cout << "Addition : " << x + y << endl;
}
void sub()
{
    cout << "Substraction : " << x - y << endl;
}
void multi()
{
    cout << "Multiplication : " << x * y << endl;
}
void div()
{
    cout << "Division : " << x / y << endl;
}
