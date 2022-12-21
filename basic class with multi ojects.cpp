#include<iostream>
using namespace std;
class carspecs{
	public:
		string car_name, Brand;
		int car_moderl, car_age;
};
main()
{
carspecs car1;
car1.Brand="BMW";
car1.car_age=4;
car1.car_moderl=2018;
car1.car_name="Rio";
cout<<car1.Brand<<endl<<car1.car_age<<endl<<car1.car_moderl<<endl<<car1.car_name;

carspecs car2;
car2.Brand="BMWx";
car2.car_age=40;
car2.car_moderl=1990;
car2.car_name="Riox";
cout<<car2.Brand<<endl<<car2.car_age<<endl<<car2.car_moderl<<endl<<car2.car_name;

carspecs car3;
car3.Brand="BMWx";
car3.car_age=40;
car3.car_moderl=1990;
car3.car_name="Riox";
cout<<car3.Brand<<endl<<car3.car_age<<endl<<car3.car_moderl<<endl<<car3.car_name;
}
