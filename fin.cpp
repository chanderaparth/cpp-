#include<iostream>
#include<conio.h>
class flight
{
private:
         int fno;
        char dest[10];
        float dist;
        float fuel;
      float calfuel(float k)
          {
               float total;
                if(k<=1000)
                       total=500;
               else if((k>1000)&&(k<=2000))
              {
                        total=1100;
              }
              else{
                   total=2200;
              }
             return total;
            }
public:
      void feedinfoo()
      { 
           std::cout<<"Enter the flight no:";
           std::cin>>fno;
           std::cout<<"\nEnter\n*destination:";
           std::cin>>dest;
           std::cout<<"\n*distance:";
           std::cin>>dist;
          float total;
           total=calfuel(dist);
      }
    void showinfoo()
     { 
         float total;
       std::cout<<"\n\n\t********INFORMATION*********";
      std::cout<<"\n*Flight number:"<<fno;
      std::cout<<"\n*Destination:"<<dest;
      std::cout<<"\n*Distance:"<<dist<<"k.m";
      std::cout<<"\n*Total fuel required:"<<total<<"litr"<<"\n";
     }
};
int main()
{
   
   flight f;
   f.feedinfoo();
   f.showinfoo();
getch();
}
