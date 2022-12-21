#include<iostream>
using namespace std;
//class
class Bilal
{
//Access specifier
public: 
//data members
string name;
	// member function()
	void showname()
	{
	cout<<"student name is :" << name;
	}

};
class car
{
	public: 
	string car;
		void showname()
	{
		cout<<"\nYour car brand is : " << car;
	}
	
};
class work
{
	public:
		string still;
		void still_working()
		{
			cout<<"\n Prdecting output << work in process >> :" <<still;
		}
};
class research
{
	public:
		string in;
		void motion()
		{
			cout<<"your output will be <<research in motion>>" <<in;
		}
};
class iAm
{
	public:
		string learning;
		void dude()
		{
			cout<<"\n Yeah! i know that i am learning but let's print it"<< learning;
		}
};
int main()

{
	//declare an object
	Bilal s1;
	car a2;
	work a3;
	research a4;
	iAm a5;
	//accessing data member
s1.name = "ali";
a2.car="audi R8";
a3.still= " Work in proccess";
a4.in= " Research in motion";
a5.learning= " I am leaning you know that ?";
//sccessing member function
s1.showname();
a2.showname();
a3.still_working();
a4.motion();
a5.dude();
return 0;
}
