#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int age;
public:
    void getData(void);
    void putData(void);
};

void Employee :: getData(void)
{
    cout << "First Name :";
    cin >> name;
    cout << "Age :";
    cin >> age;
}

void Employee :: putData(void)
{
    cout << "Name : " << name << "\t" << "Age : " << age << endl;
}


const int m = 2;
const int w = 4;

int main()
{
    int i;
    Employee manager[m], worker[w];

   
    for(i=0; i<m; i++)
    {
        cout<<"\nDetails of manager: "<<i + 1<<endl;
        manager[i].getData();
    }

   
    for(i=0; i<w; i++)
    {
        cout<<"\nDetails of worker: " << i + 1 << endl;
        worker[i].getData();
    }

    cout<<"\nOutput\n";
    cout << "\nDetails of Manager: " << endl;
    for(i=0; i < m; i++)
    {
        cout << i + 1 << "\t";
        manager[i].putData();
    }

    cout << "\n\nDetails of Worker:" << endl;
    for(i=0; i < w; i++)
    {
        cout << i + 1 << "\t";
        worker[i].putData();
    }

    return 0;
}