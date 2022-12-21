#include<iostream>
#include<string>
using namespace std;
main()
{
	int proxsensor, path, time , ssensor, ambientsenson;
	string  weather, a;
	void Enine()
	{
	cout<<"Please! press Start to turn on engine \n";
	cin>>a;
	if(a=="start")
	{
		cout<<"Engine Started\n";
		
	}
	else if (a!="start")
	{
		cout<<"Please! press start to Start engine\n";
		cin>>a;
		if(a=="start")
		{
			cout<<"Engine Started\n";
		}
		else if (a!="start")
		{
			cout<<" Please! restart program and try again\n";
			return 0; 
		}
	}
}
	
	cin>>proxsensor;
	if(proxsensor==1 )
	{
		cout<<" Stop \n";
		cout<<"Back red light ON\n";
	
	} 

	else if (proxsensor==0)
	{
		cout<<"keep going\n Back red light OFF\n";
	
	}
		cout<<"please! input local time (24h hhmm) : ";
	cin>>time;
		if(time>=600 && time<=1800)
	{
		cout<<"Headlights OFf\n";
		
	}
	else
	{
		cout<<"headlights ON\n";
	}
	cout<<"Please! input your weather conditions\n";
	cin>>weather;
	if(weather =="rain")
	{
		cout<<"Wind sheild Wipers ON\n";
	}
	else if( weather == "fog")
	{
		cout<<"Fog light ON\n";
	}
	else if (weather=="sunny")
	{
		cout<<" Turn on AC and maintain temp 25C\n";
	}
	else if (weather==" cold")
	{
		cout<<"Turn on AC and maintain temp 25C\n";
	}
	else if (weather=="fog+rain")
	{
		cout<<"Fog lights and Wind sheild Wipers ON\n";
	}
	else if(weather=="smog")
	{
		cout<<"Turn on AC and maintain 25C while Fog lights are ON\n";
	}
}
