#include<iostream>

using namespace std;
class flight
{
private:
         int fno;
        char dest[5];
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
           cout<<"Enter the flight no:";
           cin>>fno;
           cout<<"Enter*destination:";
           cin>>dest;
           cout<<"*distance:";
           cin>>dist;
          float total;
           total=calfuel(dist);
      }
    void showinfoo()
     { 
         float total;
      cout<<"t********INFORMATION*********";
      cout<<"*Flight number:"<<fno;
      cout<<"*Destination:"<<dest;
      cout<<"*Distance:"<<dist<<"k.m";
      cout<<"*Total fuel required:"<<total<<"litr";
     }
};
int main()
{
   
   flight f;
   f.feedinfoo();
   f.showinfoo();
return 0;
}
