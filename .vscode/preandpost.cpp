#include <iostream>
using namespace std;

class Test
{
private:
    int a;
public:
    Test(void)
    {
        a = 0;
    }
    Test(int x)
    {
        a = x;
    }
    void display(void)
    {
        cout << "A: " << a << endl;
    }

	// For pre increment
    void operator++()
    {
        a++;
    }

	// For post increment
    int operator++(int)
    {
        Test co(*this);  // co (this) = 11;  co.a=11;
        a++;  //t  a=11;  a=a+1;  a=11+1 a=12
        return a;
    }

};

int main()
{
    Test t(10);
    int d=5;
    t.display();
    ++t;
    t.display();

    cout<< "A: " << t++ << endl;
    t.display();

    return 0;
}