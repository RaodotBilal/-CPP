#include<iostream>
#include<string>
using namespace std;
main()
{

{
	int proxsensor, path, time , ssensor, ambientsenson;
	string  weather, a;
	cout<<"Please! press Start to turn on engine \n\n";
	cin>>a;
	if(a=="start")
	{
		cout<<"Engine Started\n\n";
		
	}
	else if (a!="start")
	{
		cout<<"Please! press start to Start engine\n\n";
		cin>>a;
		if(a=="start")
		{
			cout<<"Engine Started\n\n";
		}
		else if (a!="start")
		{
			cout<<" Please! restart program and try again\n\n";
			return 0; 
		}
	}
	
		cout<<"please! input local time (24h hhmm) : ";
	cin>>time;
		if(time>=600 && time<=1800)
	{
		cout<<"Headlights OFf\n\n";
		
	}
	else
	{
		cout<<"headlights ON\n\n";
	}
	cout<<"Please! input your weather conditions\n\n";
	cin>>weather;
	if(weather =="rain")
	{
		cout<<"Wind sheild Wipers ON\n\n";
	}
	else if( weather == "fog")
	{
		cout<<"Fog light ON\n\n";
	}
	else if (weather=="sunny")
	{
		cout<<" Turn on AC and maintain temp 25C\n\n";
	}
	else if (weather==" cold")
	{
		cout<<"Turn on AC and maintain temp 25C\n\n";
	}
	else if (weather=="fog+rain")
	{
		cout<<"Fog lights and Wind sheild Wipers ON\n\n";
	}
	else if(weather=="smog")
	{
		cout<<"Turn on AC and maintain 25C while Fog lights are ON\n\n";
	}
}
	int route ;
	string gps;
	cout<<"Please! select your route\n\n 1)GTS  to Riphah Internation University \n\n 2)Riphah Internation University  to GTS\n\n ";
	cin>>route;
	if(route==1)
	{
		cout<<"You have selected :\n\n 1)GTS Chowk to Lari Adda Faislabad\n\n";
		cout << " departure in ETA 30 seconds\n\n";
		cout<<"     Door close   \n\n";
		cout<<" Starting from Jhal Khanuwal Flyover\n\n ";
		
{
int  proximity[3];
cout<<"input for Front Proximity senson\n\n";
cin>>proximity[0] ;
if(proximity[0]==1)
{
for(int i=0; i<=5; i++) 
{cout<<"Breaking... While Red lights ON" ;

}
}
else if(proximity[0]==0)
cout<<"countinuing Straight while maintaing 20KM/H\n\n";
cout<<"input for Right proximity senson\n\n";
cin>>proximity[1] ;
if(proximity[1]==0)
{
	cout<<"continuing straight while mantiang"<<20<<"KM/H\n\n";
}
else if (proximity[1]==1)

{ cout<<"Maintaing 25cm Distance from Right side object\n\n";
}
cout<<"input for left proximity senson\n\n";
cin>>proximity[2] ;
if(proximity[2]==0)
{
	cout<<"continuing straight while mantiang 20KM/H\n\n";
}
else if (proximity[2]==1)

{ cout<<"Maintaing 25cm Distance from Left side object\n\n";
}
cout<<"input from Rare proximity sensor\n\n";
cin>>proximity[3];
if(proximity[3]==1)
{
	for(int i=0; i<=5; i++)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}
}
	else if(proximity[3]==0)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}

}
		cout<<"    550m traveled       \n\n";
		cout<<"Continuning Straight \n\n";
		
{
int  proximity[3];
cout<<"input for Front Proximity senson\n\n";
cin>>proximity[0] ;
if(proximity[0]==1)
{
for(int i=0; i<=5; i++) 
{cout<<"Breaking... While Red lights ON" ;

}
}
else if(proximity[0]==0)
cout<<"countinuing Straight while maintaing 20KM/H\n\n";
cout<<"input for Right proximity senson\n\n";
cin>>proximity[1] ;
if(proximity[1]==0)
{
	cout<<"continuing straight while mantiang"<<20<<"KM/H\n\n";
}
else if (proximity[1]==1)

{ cout<<"Maintaing 25cm Distance from Right side object\n\n";
}
cout<<"input for left proximity senson\n\n";
cin>>proximity[2] ;
if(proximity[2]==0)
{
	cout<<"continuing straight while mantiang 20KM/H\n\n";
}
else if (proximity[2]==1)

{ cout<<"Maintaing 25cm Distance from Left side object\n\n";
}
cout<<"input from Rare proximity sensor\n\n";
cin>>proximity[3];
if(proximity[3]==1)
{
	for(int i=0; i<=5; i++)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}
}
	else if(proximity[3]==0)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}

}
		cout<<" 1.5KM Traveled \n\n";
		cout<<" Continue straight to stay on satayana Rd\n\n";
		
{
int  proximity[3];
cout<<"input for Front Proximity senson\n\n";
cin>>proximity[0] ;
if(proximity[0]==1)
{
for(int i=0; i<=5; i++) 
{cout<<"Breaking... While Red lights ON" ;

}
}
else if(proximity[0]==0)
cout<<"countinuing Straight while maintaing 20KM/H\n\n";
cout<<"input for Right proximity senson\n\n";
cin>>proximity[1] ;
if(proximity[1]==0)
{
	cout<<"continuing straight while mantiang"<<20<<"KM/H\n\n";
}
else if (proximity[1]==1)

{ cout<<"Maintaing 25cm Distance from Right side object\n\n";
}
cout<<"input for left proximity senson\n\n";
cin>>proximity[2] ;
if(proximity[2]==0)
{
	cout<<"continuing straight while mantiang 20KM/H\n\n";
}
else if (proximity[2]==1)

{ cout<<"Maintaing 25cm Distance from Left side object\n\n";
}
cout<<"input from Rare proximity sensor\n\n";
cin>>proximity[3];
if(proximity[3]==1)
{
	for(int i=0; i<=5; i++)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}
}
	else if(proximity[3]==0)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}

}
		cout<<"3.3KM traveled\n\n";
		cout<<" Reached at Riphah Internation University Faislabad\n\n";
		cout<<" Destination is on the left side\n\n";
		cout<<"Doors open\n\n";
		
	}
	else if(route==2)
	{
		cout<<"You have selected :\n\n 2)Riphah Internation University  to GTS\n\n ";
		cout << " departure in ETA 30 seconds\n\n";
		cout<<"Door close \n\n";
		cout<<"Starting from Riphah Internation University Faisalabad\n\n";
		
{
int  proximity[3];
cout<<"input for Front Proximity senson\n\n";
cin>>proximity[0] ;
if(proximity[0]==1)
{
for(int i=0; i<=5; i++) 
{cout<<"Breaking... While Red lights ON" ;

}
}
else if(proximity[0]==0)
cout<<"countinuing Straight while maintaing 20KM/H\n\n";
cout<<"input for Right proximity senson\n\n";
cin>>proximity[1] ;
if(proximity[1]==0)
{
	cout<<"continuing straight while mantiang"<<20<<"KM/H\n\n";
}
else if (proximity[1]==1)

{ cout<<"Maintaing 25cm Distance from Right side object\n\n";
}
cout<<"input for left proximity senson\n\n";
cin>>proximity[2] ;
if(proximity[2]==0)
{
	cout<<"continuing straight while mantiang 20KM/H\n\n";
}
else if (proximity[2]==1)

{ cout<<"Maintaing 25cm Distance from Left side object\n\n";
}
cout<<"input from Rare proximity sensor\n\n";
cin>>proximity[3];
if(proximity[3]==1)
{
	for(int i=0; i<=5; i++)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}
}
	else if(proximity[3]==0)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}

}
		cout<<"3.3KM Travled\n\n";
		cout<<"continue straight to stay on Satayana Rd\n\n";
		
{
int  proximity[3];
cout<<"input for Front Proximity senson\n\n";
cin>>proximity[0] ;
if(proximity[0]==1)
{
for(int i=0; i<=5; i++) 
{cout<<"Breaking... While Red lights ON" ;

}
}
else if(proximity[0]==0)
cout<<"countinuing Straight while maintaing 20KM/H\n\n";
cout<<"input for Right proximity senson\n\n";
cin>>proximity[1] ;
if(proximity[1]==0)
{
	cout<<"continuing straight while mantiang"<<20<<"KM/H\n\n";
}
else if (proximity[1]==1)

{ cout<<"Maintaing 25cm Distance from Right side object\n\n";
}
cout<<"input for left proximity senson\n\n";
cin>>proximity[2] ;
if(proximity[2]==0)
{
	cout<<"continuing straight while mantiang 20KM/H\n\n";
}
else if (proximity[2]==1)

{ cout<<"Maintaing 25cm Distance from Left side object\n\n";
}
cout<<"input from Rare proximity sensor\n\n";
cin>>proximity[3];
if(proximity[3]==1)
{
	for(int i=0; i<=5; i++)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}
}
	else if(proximity[3]==0)
	{
		cout<<"continuing straight while maintaing speed 20KM/H";
	}

}
		cout<<" 1.5KM Traveled \n\n";
		cout<<"continuing straight \n\n";
		
{
int  proximity[3];
cout<<"input for Front Proximity senson\n\n";
cin>>proximity[0] ;
if(proximity[0]==1)
{
for(int i=0; i<=5; i++) 
{cout<<"Breaking... While Red lights ON" ;

}
}
else if(proximity[0]==0)
cout<<"countinuing Straight while maintaing 20KM/H\n\n";
cout<<"input for Right proximity senson\n\n";
cin>>proximity[1] ;
if(proximity[1]==0)
{
	cout<<"continuing straight while mantiang"<<20<<"KM/H\n\n";
}
else if (proximity[1]==1)

{ cout<<"Maintaing 25cm Distance from Right side object\n\n";
}
cout<<"input for left proximity senson\n\n";
cin>>proximity[2] ;
if(proximity[2]==0)
{
	cout<<"continuing straight while mantiang 20KM/H\n\n";
}
else if (proximity[2]==1)

{ cout<<"Maintaing 25cm Distance from Left side object\n\n";
}
cout<<"input from Rare proximity sensor\n\n";
cin>>proximity[3];
if(proximity[3]==1)
{
	for(int i=0; i<=5; i++)
	{
		cout<<"continuing straight while maintaing speed 20KM/H\n";
	}
}
	else if(proximity[3]==0)
	{
		cout<<"continuing straight while maintaing speed 20KM/H\n";
	}

}
		cout<<"550m  traveled\n\n";
		cout<<"Reached at Khanuwal Flyover\n\n";
		cout<<"stoping back red lights ON\n\n";
		cout<<"Destination is on the right side.\n\n";
		cout<<"Door open\n\n";
  
		
	}
}
