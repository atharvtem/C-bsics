#include<iostream>
using namespace std;

class college
{
    public:
        string name;
        string tier;
        string year;
};

int main()
{
    college coep;
    coep.name = "College of engineering, Pune";
    coep.tier = "Tier 1";
    coep.year = "Establishment year is 1854.";

    cout << coep.name << "\n" << coep.tier << "\n" << coep.year << endl;
    return 0;
}