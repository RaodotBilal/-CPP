double unit, bill, amount;
	cout<<"enter units :";
	cin>>unit;
	if(unit>1 && unit<=100){
		bill=unit*10;
		}
		else if(unit>=100 && unit<=200){
			bill=(unit*13);
		}
		else if (unit>=201 && unit<=300){
			bill=(unit*15);
		}
		else if (unit>300){
			bill=(unit*18);
		}
		tbill=bill+bill*20/100;
		cout<<"\n tbill :"<<tbill;
		tbill=amount+amount*5/100;
		cout<<"\n bill with taxes bill is :"<<tbill;
		return 0;
		}
