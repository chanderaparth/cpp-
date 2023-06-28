#include<iostream>
#include<iomanip>
using namespace std;

class student
{
  private:
  int admno;
  float e,m,s,total,per;
  char sname[20];
   float ctotal()
    {
     return e+m+s;
    }
float cper()
    {
      return total/3;
    }
  public:
     void takedata()  
      {
           cout<<"Enter admin no:";
           cin>>admno;
           cout<<"Enter name:";
           cin>>sname;
           cout<<"Enter the marks of English=";
           cin>>e;
           cout<<"Enter the marks of Maths=";
           cin>>m;
           cout<<"Enter the marks of Science=";
           cin>>s;
           total=ctotal();
           per=(float)cper();
      }
     void showdata()
      {
           cout<<"Admin No:"<<admno<<endl;  
           cout<<"Name:"<<sname<<endl;
           cout<<"English Marks:"<<e<<endl;  
           cout<<"Maths Marks:"<<m<<endl; 
           cout<<"Science Marks:"<<s<<endl; 
           cout<<"Total Marks"<<total<<endl; 
           cout<<"Percentage="<<setprecision(4)<<per<<endl;
      }
};
int main()
{  
student s;
s.takedata();
s.showdata();
}