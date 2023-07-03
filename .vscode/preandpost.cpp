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
    void operator++()
    {
        a++;
    }

	    int operator++(int)
    {
        Test co(*this);  
        a++;
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