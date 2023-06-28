#include <iostream>

using namespace std;
class test
{
  private:
  int testcode;
  int nocad;
  int cenreq;
  char description[100];
  void calcntr()
  {
     cenreq=(nocad)/(100+1);
  }

  public:
  void schedule()
  {
    cout<<"Enter the test code:";
    cin>>testcode;
   cout<<"Enter the description:";
    cin>>description;
   cout<< "Enter the no of candidates greater than 101";
    cin>>nocad;
    calcntr();
  }
  void disptest()
  {
    cout<<"Test code="<<testcode;
    cout<<"Description:"<<description;
    cout<<"Number of candidates:"<<nocad;
    cout<<"Centers required:"<<cenreq;
  }
  };
  int main()
  {
 

    test t;
      t.schedule();
      t.disptest();
     return 0;
     }