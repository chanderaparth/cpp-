#include<iostream>


class book
{
   private:
             int bno;
            char btytle[20];
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
                           std::cout<<"\nEnter book no\tbook tytle\tprice of the book"<<"\n";
                           std::cin>>bno;
                          std::cin>>btytle;
                           std::cin>>price;
            }
          void purchase()
          {
            std::cout<<"Enter the number of copies to be purchased"<<"\n";
             int n;
            std::cin>>n;
            float total;
           total=total_cost(n);
            std::cout<<"Total cost to be paid by the user:"<<total<<"/- rupees"<<"\n";
         }
};
int main()
{
   
    book b;
    b.input();
   b.purchase();
   return 0;
    
}