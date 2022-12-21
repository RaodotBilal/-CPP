#include <iostream>
using namespace std;

int main() {
   case (armstrong) :
   {
	 int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    }
case (ASCI2):
	{
	 char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c);
}
case (permotaion):
	{
		int num;
		cin>>num;
         if(num==1) 
        {
              return 1;
        }
        else 
        {
             return num * fact(num-1);
        }
    }
    case (combination):
    	{  int n,r,nPr,nCr;

       cout<<"Enter n: ";
       cin>>n;
       
       cout<<"Enter r: ";
       cin>>r;

       nPr=fact(n)/fact(n-r);

       nCr=nPr/fact(r);

       cout<<"nPr is: "<<nPr<<endl;
       cout<<"nCr is: "<<nCr;
		}
 return 0;
}
