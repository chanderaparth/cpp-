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
           std::cout<<"Enter*destination:";
           std::cin>>dest;
           std::cout<<"*distance:";
           std::cin>>dist;
          float total;
           total=calfuel(dist);
      }
    void showinfoo()
     { 
         float total;
       std::cout<<"t********INFORMATION*********";
      std::cout<<"*Flight number:"<<fno;
      std::cout<<"*Destination:"<<dest;
      std::cout<<"*Distance:"<<dist<<"k.m";
      std::cout<<"*Total fuel required:"<<total<<"litr";
     }
};
int main()
{
   
   flight f;
   f.feedinfoo();
   f.showinfoo();
getch();
}
