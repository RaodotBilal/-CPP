# include <iostream>
using namespace std;
main(){ 
//Q1: Proforming with given numbers "n1=40 and n2=20"
cout<<endl<<"Q1: Proforming with given numbers 'n1=40 and n2=20''"<<endl;
int n1=40,n2=20; cout<<"n1+n2="<<n1+n2<<endl; cout<<"n1-n2="<<n1-n2<<endl; cout<<"n1*n2="<<n1*n2<<endl; cout<<"n1/n2="<<n1/n2<<endl; cout<<"n1%n2="<<n1%n2<<endl; cout<<"++n1="<<++n1<<endl; cout<<"++n2="<<++n2<<endl; cout<<"--n1="<<--n1<<endl; cout<<"--n2="<<--n2<<endl;
//Q2
cout<<endl<<"Q2:If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100."<<endl;
int English,Math,Life_skills,Programing_Fundamental,ICT,Total,Percentage; cout<<endl<<"Input your marks in following oder:English,Math,Life_skills,Programing_Fundamental,ICT"<<endl;cin>>English>>Math>>Life_skills>>Programing_Fundamental>>ICT;
Total=(English+Math+Life_skills+Programing_Fundamental+ICT); cout<<"your total marks "<<Total<<endl; Percentage=(Total*100)/500; cout<<"This your percentage "<<Percentage<<endl;

//Q3: Write a C++-program to calculate area and perimeter of a triangle.
cout<<endl<<"Q3: Write a C++-program to calculate area and perimeter of a triangle."<<endl; cout<<"enter your values for base(a) & Height(b)\n" ;int a,b,Area;cin>>a>>b; Area=(a*b)/2; cout<<"Area of a Triangle is "<<Area<<endl;

//Q4:Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees and Centigrade to .
cout<<endl<<"Q4: Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees and Centigrade to ."<<endl; double t,Centigrade; cout<<endl<<"inter your city temperature in Fahrenheit "<<endl; cin>>t; Centigrade=(t-32)*5/9 ; cout<<"Temperature in centigrade :"<<Centigrade<<endl;

//Q5:Write a C++-Program to swap two integer numbers without and with using third variable.
cout<<"Q5: Write a C++-Program to swap two integer numbers without and with using third variable."; 
cout<<endl<<endl<<"With out 3rd Integer"<<endl;
int x=10,y=20; x=x+y;cout<<"we have taken x=10 & y=20" ;y=x-y; cout<<"x="<<x<<"y="<<y<<endl;
cout<<"With 3rd Integer"<<endl; int s=3,p=2; s=15; p=20; cout<<t<<endl;



//Q6
cout<<endl<<"Q6\n";
cout<<"  *    ******** *           *  *     * *********\n ***   *     *  **         **   *   *  *********\n*****  *     *  ***       ***     *    *********\n ***   *     *  ****     ****   *  *   *********\n  *    ******** *****   *****  *    *  *********\n";
return 0;
}
