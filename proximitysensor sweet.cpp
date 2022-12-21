#include<iostream>
using namespace std ;
main() 
{
int  proximity[3];
cout<<"input for Front Proximity senson\n";
cin>>proximity[0] ;
if(proximity[0]==1)
{
for(int i=0; i<=5; i++) 
{cout<<"Breaking... While Red lights ON" ;

}
}
else if(proximity[0]==0)
cout<<"countinuing Straight while maintaing 20KM/H\n";
cout<<"input for Right proximity senson\n";
cin>>proximity[1] ;
if(proximity[1]==0)
{
	cout<<"continuing straight while mantiang"<<20<<"KM/H\n";
}
else if (proximity[1]==1)

{ cout<<"Maintaing 25cm Distance from Right side object\n";
}
cout<<"input for left proximity senson\n";
cin>>proximity[2] ;
if(proximity[2]==0)
{
	cout<<"continuing straight while mantiang 20KM/H\n";
}
else if (proximity[2]==1)

{ cout<<"Maintaing 25cm Distance from Left side object\n";
}
cout<<"input from Rare proximity sensor\n";
cin>>proximity[3];
if(proximity[3]==1)
{
	for(int i=0; i<=5; i++)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}
}
	else if(proximity[3]==0)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}

}
