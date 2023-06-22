#include <iostream>
using namespace std;

int main()
{
    int no1, no2;

    cout << "Enter number 1: ";
    cin >> no1;

    cout << "Enter number 2: ";
    cin >> no2;

    int sum = no1 + no2;
    float avg = sum / 2.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}