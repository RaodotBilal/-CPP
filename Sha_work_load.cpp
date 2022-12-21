#include<iostream>
using namespace std;

void neno()
{
    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
}
main()
{
	string Bilal[7]={"Bilal", "Shayan", "Anas", "Zoni", "Adi", "Usman", "Ahtisham"};
	string  Ahmad[7];
	for(int i=0; i<7; i++ )
	{
		Bilal[i]=Ahmad[i];
		cout<<Ahmad[i]<<endl;
		neno();
	}


}
