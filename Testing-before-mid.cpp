#include<iostream>
using namespace std;
class Car
{
	public: 
	int model,travel;
	string color,brand;
	Car()
	{
		model = 2012;
		travel = 91291;
		color = "Red";
		brand = "Tesla";
	}
	void display()
	{
		cout<<"Car Model is : "<<model<<endl;
		cout<<"\nCar Total distance travelled is : "<<travel<<" in miles."<<endl;;
		cout<<"\nCar Color is : "<<color<<endl;
		cout<<"\nCar Manufacturer is : "<<brand<<endl;
	}
};
int main()
{
	Car obj;
	obj.display();
	return 0;
}
