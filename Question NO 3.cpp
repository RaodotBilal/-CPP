//3.	Write a program that enter your gender(Male for m,or M & Female for F or f)
// and calculate total number of men and women using while.

#include<iostream>
using namespace std;
main()
{
	int j ,q=0;
	int count=0;
	cout<<"Please! Specify how many time you gonna inter values : \n";
	cin>>j;
	char array[j];
	for(int i=0; i<=j; i++)
	{
		cout<<"Enter M for Male and F for Females\n";
		cin>>array[i];
	}

	
		for(int i=0; i<=j; i++)
		{
			
			while( array[i]=='m' || array[i]=='M') 
	
		++count;
		cout<<"Number of Males are : "<<count<<endl<<"\nNumber of females are :"<<j-count;
	}
	
	
}
