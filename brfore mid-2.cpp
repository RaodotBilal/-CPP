#include<iostream>
using namespace std;
class employee{
	private:
		string firstname,lastname,dist;
		int Id,phone;
	public:
		employee(){
			Id=0;
		}
		
		//seting data
		void setdata(){
			cout<<"\n First name ";
			cin>>firstname;
			cout<<"\n give last name ";
			cin>>lastname;
			cout<<"\n give destignation ";
			cin>>dist;
			cout<<"\n give phone number ";
			cin>>phone;
			cout<<"\n give employee Id";
			cin>>Id;
		}
		//will display private data
		void showdata(){
			cout<<"\n ID is ="<<Id;	
			cout<<"\nFirst name = "<<firstname;
			cout<<"\nlast name= "<<lastname;
			cout<<"\ndestignation "<<dist;
			cout<<"\n phone number "<<phone;
		}
		
		string getname(string array){
	
		firstname=array;
		return firstname;
		}
};

int main ()
{
employee array[10];
	 for( int i=0; i<10;i++)
	{
		cout<<"data of employee  "<<i+1<<endl<<endl;
			array[i].setdata();
	}
	string num;
	cout<<" if u want to display all employess data type       All \n\n if u want to display specific type S\n\n";
	cin>>num;
	if (num=="all"||num=="All"){

		 for( int i=0; i<10;i++)
		{
			cout<<"data of emp.. "<<i+1<<endl<<endl;
				array[i].showdata();
		}
	}
	if(num=="s"||num=="S")	
	{
		cout<<"\n give employee sr.No  :"<<endl;
		int n;
		cin>>n;
		n=n;
		array[n].showdata();
	}
return 0;
	}
