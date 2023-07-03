#include<iostream>
using namespace std;

int main() {

char string[20],temp;

int i,length;
cout << "Enter : ";
cin >> string;

length=str(string)-1;

for (i=0;i<str(string)/2;i++)
{
      temp=string[i];
      string[i]=string[length];
      string[length--]=temp;
}

cout<<"\nReverse :",string;

return 0;

}