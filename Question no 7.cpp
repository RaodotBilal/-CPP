//7.	Declare a 10 element integer array and pointer and save array address in it.
// Input its value from user. Display 3rd , 
//5th and 9th elements using pointer.

#include<iostream>
using namespace std;
main()
{
	int array[10], i,j,q=0;
	for (i=0; i<10; i++)
	{
		cout<<"enter your  " <<" Vallues " <<++q<<  " :";
		cin>>array[i];
	}
	for(j=0; j<10; j++)
	{
		cin>>j=&array[i];
		cout<<j;
	}
}
