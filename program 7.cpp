#include<iostream>
using namespace std;


int main (){
int array[10];
int *array2[10];

for(int i=0;i<10;i++){
	cout<<" give 10 values ";
	cin>>array[i];
}


for(int i=0;i<10;i++){
	array2[i]=&array[i];
}
cout<< array[2]<<endl<< array[4]<<endl <<array[9]<<endl;
return 0;
}

