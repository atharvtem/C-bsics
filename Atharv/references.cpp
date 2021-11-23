#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "kela";
    string &meal = food;
    cout << food << "\n";
    cout << meal << "\n";
    cout << &meal << "\n";
    return 0;
}