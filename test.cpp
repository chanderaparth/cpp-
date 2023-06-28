#include <iostream>

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
    std::cout<<"Enter the test code:";
    std::cin>>testcode;
   std::cout<<"Enter the description:";
    std::cin>>description;
   std::cout<< "Enter the no of candidates greater than 101";
    std::cin>>nocad;
    calcntr();
  }
  void disptest()
  {
    std::cout<<"Test code="<<testcode;
    std::cout<<"Description:"<<description;
    std::cout<<"Number of candidates:"<<nocad;
    std::cout<<"Centers required:"<<cenreq;
  }
  };
  int main()
  {
 

    test t;
      t.schedule();
      t.disptest();
     return 0;
     }