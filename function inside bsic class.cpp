#include<iostream>
using namespace std;
class rio{
	public:
		void funcion()
		{
			cout<<"Super-man";
		}
};
int main()
{
	rio obj1;
	obj1.funcion();
	cout<<obj1.funcion();
}
