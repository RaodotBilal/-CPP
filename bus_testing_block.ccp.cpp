#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
main()
{
	int route ;
	string gps;
	cout<<"Please! select your route\n 1)GTS  to Riphah Internation University \n 2)Riphah Internation University  to GTS\n ";
	cin>>route;
	if(route==1)
	{
		cout<<"You have selected :\n 1)GTS Chowk to Lari Adda Faislabad\n";
		cout << " departure in ETA 30 seconds\n";
		cout<<"     Door close   \n";
		cout<<" Starting from Jhal Khanuwal Flyover\n ";
		cout<<"    550m traveled       \n";
		cout<<"Continuning Straight \n";
		cout<<" 1.5KM Traveled \n";
		cout<<" Continue straight to stay on satayana Rd\n";
		cout<<"3.3KM traveled\n";
		cout<<" Reached at Riphah Internation University Faislabad\n";
		cout<<" Destination is on the left side\n";
		cout<<"Doors open\n";
		
	}
	else if(route==2)
	{
		cout<<"You have selected :\n 2)Riphah Internation University  to GTS\n ";
		cout << " departure in ETA 30 seconds\n";
		cout<<"Door close \n";
		cout<<"Starting from Riphah Internation University Faisalabad\n\n";
		cout<<"3.3KM Travled\n";
		cout<<"continue straight to stay on Satayana Rd\n\n";
		cout<<" 1.5KM Traveled \n";
		cout<<"continuing straight \n\n";
		cout<<"550m  traveled\n";
		cout<<"Reached at Khanuwal Flyover\n";
		cout<<"stoping back red lights ON\n";
		cout<<"Destination is on the right side.\n";
		cout<<"Door open\n"
  
		
	}
}
