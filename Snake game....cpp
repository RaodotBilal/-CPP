#include<iostream>
#include <cstdlib>
using namespace std;
bool gameover;
const int hight = 20;
const int wirth = 20;
int x,y,fruitx,fruity,score;
enum  edirection {
stop = 0, left, right, up, down};
edirection dir;
void setup()
{
	 gameover = false ;
	dir = stop;
	x= wirth / 2;
	y = hight / 2;
	fruitx = rand() % wirth;
	fruity = rand() % hight;
	score= 0;
}
void draw ()
{
	system("cls"); //system ("clear");
	for (int i=0; i< wirth+2; i++)
	cout<<"#";
	cout<<endl;
	for (int i=0; i< hight; i++)
	{
		
		for(int j=0; j<wirth; j++)
		{
			if(j==0)
			
				cout<<"#";
				
					cout<<" ";
					if(j=wirth-1)
					cout<<"#";
				}
				cout<<endl;
				}
			for (int i=0; i< wirth+2; i++)
	cout<<"#";
	cout<<endl;
	}

void input ()
{
	
}
void logic()
{
	
}
main()
{
	setup();
	while (!gameover)
	{
		draw();
		input();
		logic();
		//sleep(10);
	}
	return 0;
}
