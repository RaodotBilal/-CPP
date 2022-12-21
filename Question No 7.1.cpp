//7.	Declare a 10 element integer array and pointer and save array address in it.
// Input its value from user. Display 3rd , 5th and 9th elements using pointer

#include<iostream>
using namespace std;
int main()
{
        int integer[10],*pointer[10];
        cout<<"Please! Enter 10 values in array : ";
		for(int i=0;i<10;i++)
		{
            cin>>integer[i];
		}
        for(int i=0;i<10;i++)
        {
		    pointer[i]=&integer[i];
    	}
		cout<<pointer[2]<<" "<<" 3rd\n"<<pointer[4]<<" "<<" 5th\n"<<pointer[8]<<" "<<" 9th";
		return 0;
}
