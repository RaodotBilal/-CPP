#include<iostream>
 using namespace std;
main()
{
	int arr[10], i, j, flag = -1;
	for (i=0; i<10; i++)
	{
		cout<<"enter " <<i+1<<"Vallues:";
		cin>>arr[i];
	}
	
	for (i=0 ; i<10; i++)
	{ flag = -1;
		for(j=2; j<=arr[i]/2; j++)
		{
		
		if(arr[i]% j == 0)
		{
			flag++;
			
		}
		
	}
if(flag !=-1)
cout<<arr[i]<< " is composit" <<endl;
else 
cout<<arr[i]<< " is prime"<<endl;

}
}
