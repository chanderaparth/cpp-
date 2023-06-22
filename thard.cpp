#include <iostream>
using namespace std;

int main()

{
    string name, compName;

    cout << "Enter your name: ";
    cin >> name;

    cin.ignore();

    cout << "Enter your company name: ";
    getline(cin, compName);

    cout << "Welcome " << name << endl;
    cout << "Company  " << compName;
    return 0;
}