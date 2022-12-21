#include<iostream>
using namespace std;


int main (){
int array[7]={1,2,3,4,5,6,7};
int array2[7];
for(int i=0;i<=7;i++){
	array2[i]=array[i];
}
for(int i=0;i<7;i++){
	cout<<array2[i]<<endl;
}
return 0;
}

