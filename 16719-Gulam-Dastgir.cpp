#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter number"<<endl;
	cin>>a;
	if(a==0){
		cout<<"Given number is zero"<<endl;
	}
	else if(a>0){
		cout<<"Given number is positive"<<endl;
	}
	else{
		cout<<"Given number is negative"<<endl;
	}
	//2
	
		int num;
	cout<<"Enter your choice in number"<<endl;
	cin>>num;
	if(num==0){
		cout<<"Zero of either"<<endl;
	}
	else if(num%2==0){
    	cout<<"Even number"<<endl;
	}
	else{
		cout<<"Odd number"<<endl;
	}
	
	//3
		char ch;
	cout<<"Enter a character"<<endl;
	cin>>ch;
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
		cout<<"Character is vowel"<<endl;
	}
	else{
		cout<<"Otherwise character is consolent"<<endl;
	}
	
	//4
	
float c,b,per;
cout<<"Input number of classes held"<<endl;
cin>>c;
cout<<"Input number of classes attended"<<endl;
cin>>b;
per=(b*100)/a;
if(per>=75){
	cout<<"Allowed to sit in the exam"<<endl;
}
else{
	cout<<"Otherwise not sit in exam"<<endl;
}
//5	
	float x,y,p,z;
	cout<<"input your salary"<<endl;
	cin>>x;
	cout<<"input your totle service years in company"<<endl;
	cin>>y;
	p=1.05*x;
	if(y>=5){
		z=p-x;
		cout<<"bonus 5% is"<<z<<endl;
	}
	else{
		cout<<"otherwise not eligible for bonus"<<endl;
	}	
	
	return 0;
}
