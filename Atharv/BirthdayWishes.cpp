#include<iostream>
#include<string>
using namespace std;

void atharv()
{
    cout << "Happy Birthday Atharv!" << endl;
}
void urjit()
{
    cout << "Happy Birthday Urjit!" << endl;
}
void anjali()
{
    cout << "Happy Birthday Anjali!" << endl;
}
void ujwal()
{
    cout << "Happy Birthday Ujwal!" << endl;
}

int main()
{
    int date;
    string ans;

    do
    {
        cout << "Enter Birthday date (DM):";
        cin >> date;

        switch(date) 
        {
            case 2104:
                atharv();
                break;
            case 82:
                urjit();
                break;
            case 2406:
                anjali();
                break;
            case 1606:
                ujwal();
                break;    
            default: 
                cout << "ERROR!" << endl;
        }   
        cout<<"Do you want to continue?\n";
        cin>>ans;
    }
    while(ans=="yes" || ans=="YES");
}