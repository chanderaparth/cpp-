#include<iostream>


class batsman
{
	int bcode;
	char bname[20];
	int innings,notout,runs;
	int batavg;
	void calcavg()
	{
		batavg=runs/(innings-notout);
	}
public :
	void readdata ();
	void displaydata();
};
void batsman::readdata()
{
	std::cout<<"Enter batsman code ";
	std::cin>> bcode;
	std::cout<<"Enter batsman name ";
	gets(bname);
	std::cout<<"enter innings,notout and runs ";
	std::cin>>innings>>notout>>runs;
	calcavg();
}
void batsman::displaydata()
{
	std::cout<<"Batsman code "<<bcode<<"\nBatsman name "<<bname<<"\nInnings "<<innings
	<<"\nNot out "<<notout<<"\nRuns "<<runs<<"\nBatting Average "<<batavg;
}
int main()
{
	batsman obj;
	obj.readdata();
	obj.displaydata();

	return 0;
}