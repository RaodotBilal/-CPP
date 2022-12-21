#include <iostream>
using namespace std;

int main() {
    int number;
    double average;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;
int i=1;
do
	{
		i++;
        sum += number;

        cout << "Enter a number: ";
        cin >> number;
    }
while (i <= 9) ;

    cout << "\nThe sum is " << sum << endl;
    average=sum/10;
    cout<<"\n the average is "<< average<<endl;
    
    return 0;
}
