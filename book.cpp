#include<iostream>

using namespace std;
class book
{
   private:
             int bno;
            char btytle[5];
            float price;
           float total_cost(int x)
            {
                    float total;
                    total=price*x;
                    return total;
             }
public:
          void input()
               {
                           cout<<"Enter book no\tbook tytle\tprice of the book";
                           cin>>bno;
                           cin>>btytle;
                           cin>>price;
            }
          void purchase()
          {
            cout<<"Enter the number of copies to be purchased";
             int n;
            cin>>n;
            float total;
           total=total_cost(n);
            cout<<"Total cost to be paid by the user:"<<total<<"/- rupees";
         }
};
int main()
{
   
    book b;
    b.input();
   b.purchase();
   return 0;
    
}