#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;



void calcs(int a,int b)
{
	string line;
	int n=0;
ifstream file("lovs.txt");

if(file.is_open())
{

	while(!file.eof())
	{
		++n;
		getline(file,line);
		if(n>=a && n<=b)
		{
			cout<<line<<endl;
		}
	}
	
}

else
{
	cout<<"File couldnot be opened";
}
}



void arieslove()
{
cout<<"\n Your love compatibility is \n";
calcs(0,3);	
}
void tauruslove()
{
cout<<"\n Your love compatibility is\n ";
calcs(5,7);	
}
void geminilove()
{
	cout<<"\n Your love compatibility is\n ";
calcs(8,11);
}
void cancerlove()
{
	cout<<"\n Your love compatibility is\n ";
calcs(12,15);
}
void leolove()
{
	cout<<"\n Your love compatibility is\n ";
calcs(16,19);
}
void virgolove()
{
	cout<<"\n Your love compatibility is\n ";
calcs(20,23);
}
void libralove()
{
	cout<<"\n Your love compatibility is";
calcs(24,27);
}
void scorpiolove()
{
	cout<<"\n Your love compatibility is\n";
calcs(28,31);
}
void saggitariuslove()
{
	cout<<"\n Your love compatibility is\n";
calcs(32,35);
}

void capriconlove()
{
	cout<<"\n Your love compatibility is\n";
calcs(36,39);
}

void aquariuslove()
{
	cout<<"\n Your love compatibility is\n";
calcs(40,43);
}
void pisceslove()
{
	cout<<"\n Your love compatibility is\n";
calcs(44,47);
}

