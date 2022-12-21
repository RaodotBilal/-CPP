#include<iostream>
using namespace std;
class employee{
	private:
		string firstname,lastname,dist;
		int Id,pno;
	public:
		employee(){
			Id=0;
		}
		
		//seting data
		void setdata(){
			cout<<" First name ";
			cin>>firstname;
			cout<<" give last name ";
			cin>>lastname;
			cout<<" give destignation ";
			cin>>dist;
			cout<<"give phone number ";
			cin>>pno;
			cout<<" give employee Id";
			cin>>Id;
		}
		//will display private data
		void showdata(){
			cout<<"\n ID is ="<<Id;	
			cout<<"\nFirst name = "<<firstname;
			cout<<"\nlast name= "<<lastname;
			cout<<"\ndestignation "<<dist;
			cout<<"\n phone number "<<pno;
		}
		
		string getname(string array){
	
		firstname=array;
		return firstname;
		}
};

int main (){
	

employee array[10];
	 for( int i=0; i<2;i++)
	{
		cout<<"data of employee  "<<i+1<<endl<<endl;
			array[i].setdata();
	}
		system("pause");
		system("cls");
	string num;
	cout<<" if u want to display all employess data enter   all  or All \n\n if u want to display specific employee data just press 1\n\n";
	cin>>num;
	if (num=="all"||num=="All"){

		 for( int i=0; i<2;i++)
		{
			cout<<"data of emp.. "<<i+1<<endl<<endl;
				array[i].showdata();
		}
	}
	if(num=="s"||num=="S")	
	{
		system("cls");
		cout<<" give employee sr.No  :"<<endl;
		int n;
		cin>>n;
		n=n+1;
		array[n].showdata();
	}
return 0;
	}
