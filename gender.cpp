//3.	Write a program that enter your gender(Male for m,or M & Female for F or f)
// and calculate total number of men and women using while.
#include<iostream>
using namespace std;
int main(){
int gender=0, female=0;
char a;
int i=0;
while (true)
{	
//	i++;
	cout<<"enter your gender please\n";
	cin>>a;
  	if(a=='M'||a=='m')
 	 {  	
	cout<<" Male\n";

	gender = gender + 1;
	cout<<"males are "<<gender<<endl;

	  }
  
  	else if (a == 'F'|| a == 'f')
	{	
	cout<<"female\n";
	female = female+1;
	cout<<"females are "<<female<<endl;
	} 
	else{
		cout<<" wrong input ";
	}
}
return 0;
}

