#include<iostream>
using namespace std;
main()
{
	char a;
	cout<<"lets check if your given charracter is vowel or not or just a special charrecter \n";
	cin>>a;
	//checking if given Char is Vowel
	if(a=='a' || a=='A' || a=='i' || a=='I'  || a=='o'  || a=='O'  || a=='e'  || a=='E'  || a=='u'  || a=='U')
	{ cout<<"it's a vowel\n";
	}
	//checking if given char is Consonant
	else if(a=='b' || a=='B' || a=='c' || a=='C' || a=='d' || a=='D' || a=='f' || a=='F' || a=='g' || a=='G' || a=='h' || a=='H' || a=='j' || a=='J' || a=='k' || a=='K' || a=='l' || a=='L' || a=='m' || a=='M' || a=='n'  || a=='N' || a=='p' || a=='P' || a=='q' || a=='Q' || a=='r' || a=='R' || a=='s' || a=='S' || a=='t' || a=='T' || a=='y' || a=='Y' || a=='v' || a=='V' || a=='w' || a=='W' || a=='x' || a=='X' || a=='z' || a=='Z')
	{ cout<<"it's a Consonant\n";
	}
else	//checking if given value is special charracter
{
		cout<<"it's a Special Charrecter'\n";
	}
	return 0;
	
}
