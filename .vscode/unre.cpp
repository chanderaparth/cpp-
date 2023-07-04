#include<iostream>
using namespace std;
class Box
{
    int l,w,h;
    public:
    void setdata (int a,int b,int c)
    {
        l=a;
        w=b;
        h=c;
    }
    int getdata()
    {
        return l*w*h;
    }
    Box operator++(int)
{
Box t;
t.l = l++;
t.w = w++;
t.h = h++;
return t;
}
};
int main(){

    Box a,b;
    a.setdata(2,5,8);
    cout<<"Volume of box a is: "<<a.getdata()<<endl;

    a++;
    b=a;
    cout<<"Volume of box b is: "<<b.getdata()<<endl;
}