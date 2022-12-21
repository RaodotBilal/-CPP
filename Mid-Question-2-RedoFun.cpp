//Name = Rao Bilal Ahmad
//Roll no = 17271
//Date = 01-31-2021
//submitted to = Muhammad Ahmad /Sheikh Aftab Ahmad 
//Question 2
#include<iostream>
using namespace std;
main()
{
	//initilazing variables...
	int inter, test, fmarks, mmarks;
	int winter, wtest, wfmarks, wmmarks, tmarks;
	cout<<"Please! enter inerview marks"<<endl;
	cin>>inter;
	cout<<"Please! enter test makrks"<<endl;
	cin>>test;
	cout<<"Please! enter inter marks"<<endl;
	cin>>fmarks;
	cout<<"Please! enter matric marks"<<endl;
	cin>>mmarks;
	//Calculating weightage ...
	//Formula to calculate 20% weightage = total divid by 80 then Multiply with 20...
	winter=(inter/80)*20;
	//formula = test divid by 50 then multiply with 50%...
	wtest=(test/50)*50;
	//formula = 100/15= 6.666666...
	wfmarks=fmarks/6.6666666;
	//formula = 100/15= 6.666666...
	wmmarks=mmarks/6.6666666;
	//Adding all values (All values = 100)...
	tmarks=wmmarks+wfmarks+wtest+winter;
	cout<<"you toatal marks : "<<tmarks<<endl;
	//when marks are between 90-100%...
	if(tmarks>=90 && tmarks <= 100)
	{
		cout<<"Congrats! you can take admission in Medical\n";
		
	}
	//when marks are between 80-89%...
	else if (tmarks >=80 && tmarks<=89)
	{
	cout<<"Congrats! you can take admission in Engineering/coumputer science\n";
	}
	//when marks are between 70-79%
		else if (tmarks >=70 && tmarks<=79)
	{
	cout<<"Congrats! you can take admission in MLT\n";
	}
	//when marks are between 60-69%...
		else if (tmarks >=60 && tmarks<=69)
	{
	cout<<"Congrats! you can take admission in BBA\n";
	}
	//when marks are between 0-59%...
		else if (tmarks <=59)
	{
	cout<<"Congrats! you can take admission in other faculties\n";
	}
	//to halt ouput consol...
	system ("pause");
	return 0;
}
