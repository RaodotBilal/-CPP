#include<iostream>
using namespace std;
int main()
{
	int Num1;
	cout << "Enter the caes that you want to work with";
	cin >> Num1;
	switch (Num1){
	//checking of the values are nagtive positive or Nutral...
		case 1:
    cout << "Enter the value = "<<endl;
	cin >> Num1;
	if (Num1 == 0) 
		cout << "your value is zero(0))"<<endl;
		if (Num1 > 0) 
			cout << "Your value is postive(+)"<<endl;
		
		else 
			cout << "Your value is Negative(-)"<<endl;
		
	break;
	case 2:
	 //let's check its odd or even
		cout << "Enter the value = "<<endl;
		cin >> Num1;
		if (Num1 == 0) 
			cout << Num1 << " = Your Value is Neither"<<endl;
		
		else if (Num1 % 2 == 0) 
			cout << Num1 << " = Your Number is Even"<<endl;
		
		else 
			cout << Num1 << " = Your Number is Odd"<<endl;
		break;
	case 3:
		cout << "Enter the value"<<endl;
		cin >> Num1;
		if (0 <= Num1 && 100 >= Num1)
		//checking water conditio
			cout << "Water"<<endl;
		
		else if (0 > Num1)
		
		cout << "Ice";
		
		else if (100 < Num1)
		
			cout << "steam";
		break;
	case 4:
	//Grading...
		cout << "Enter the value = ";
		cin >> Num1;
		if (90 <= Num1 && 100 >= Num1)
		
			cout << "Grade A"<<endl;
		
		else if (80 <= Num1 && 89 >= Num1)
		
			cout << "Grade B"<<endl;
		
		else if (70 <= Num1 && 79 >= Num1)
		
			cout << "Grade c"<<endl;
		
		else if (60 <= Num1 && 69 >= Num1)
		
			cout << "Grade D"<<endl;
		
		else
		
			cout << "invalid"<<endl;
		break;
		//giving switch statement's default values.
		default:
			cout<<"wrong input"<<endl;
		}
		
	return 0;
}
