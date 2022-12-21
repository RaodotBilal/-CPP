#include<iostream>
using namespace std;
int main()
{
        int two_d_array[3][5]={{1,2,3,4,5},{6,7,8,9,1},{1,2,3,4,5}};
        cout<<"two_d_arrayy of 3x5 order.\n3 Rows.\n5 Column.\n\n";
		for(int j=0;j<=2;j++)
        {
        	for(int i=0;i<=4;i++)
        	{
        		cout<<two_d_array[j][i]<<" ";
			}
				cout<<"\n\n";
		}
        return 0;
}
