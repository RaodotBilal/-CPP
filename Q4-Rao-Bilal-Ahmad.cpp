#include<iostream>
using namespace std;
main()
{
	cout<<"Please! Inter time in military formate\n";
	int mtime,stdtime;
	cin>>mtime;
	if(mtime>2400){ 
	cout<<"Invalid Input\n Because you are over clocking\n";
	}
	else if(mtime>=1300 && mtime<=2400){
		mtime=mtime-1200;
		cout<<"Hours:Minutes:Seconds\n"<<mtime<<endl;
	}
	else if(mtime<=1200) 
	{ //mtime=mtime+1200;
	cout<<"Hours:Minutes:Seconds\n"<<mtime<<endl;
	}
	else if(mtime=0000)
	{ mtime=mtime+1200;
	cout<<mtime<<endl;
	}
	return 0;
}
