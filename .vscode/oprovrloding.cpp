#include<iostream>
using namespace std;

class Change
{
private:
    int x,y;
public:
    void getData(void)
    {
        cout << "Enter No 1: ";
        cin >> x;  5;
        cout << "Enter No 2 with minus sign: ";
        cin >> y;  -3;
    }
    void display(void)
    {
        cout << "No 1: " << x << endl;
        cout << "No 2: " << y << endl;
    }
    void operator-(void)
    {
        x = -x;
        y = -y;
    }
};

int main()
{
    Change c;

    c.getData();

    cout << "\n\nYour number before use of unary minus operator\n";
    c.display();

    //Use of unary minus operator function
    -c;

    cout << "\n\nYour number after use of unary minus operator\n";
    c.display();

    return 0;
}