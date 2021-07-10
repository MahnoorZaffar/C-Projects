#include <iostream>
#include <cmath>

using namespace std;


int main(){
	cout<<"---------------------hello welcome to the APP---------------------------"<<endl;
	cout<<"----------------------please craete a new account------------------------"<<endl;
	 
	 // user name and password
	 cout<<"choose an username: "<<endl;
	 string name;
	 getline(cin, name);
	 cout<<"make a uniques password: "<<endl;
	 string pass;
	 getline(cin, pass);
	 
	cout<<"please enter your information"<<endl;
	cout<<"Username: "<<endl;
	string user;
	getline(cin, user);
	cout<<"password: "<<endl;
	string pword;
	getline(cin, pword);
	
	while(user!=name || pword!=pass){
		cout<<"wrong username or password, please try again"<<endl;
		cout<<"username: "<<endl;
		getline(cin, user);
		cout<<"passowrd: "<<endl;
		getline(cin, pword);
		
	}
	cout<<"-----------------------------welcome to the BAGAL APP----------------------"<<endl;
	// wallet
	cout<<"welcome to the app... you have won $5 to your account"<<endl;
	double balance = 5.00;
	cout<<"would you like to put some money in your wallet"<<endl;
	string q1;
	getline(cin, q1);
	if(q1=="yes"){
		cout<<"how much mone you want to add"<<endl;
		double add;
		cin>>add;
		int balance2=(balance+add);
		cout<<"your new balance is "<<balance2<<endl;
	}else {
		cout<<"you can still order a bagal it is just $3"<<endl;
	}
	
	
	cout<<"-------------would you like to order a BAGAL now... they are oven fresh-----------------------"<<endl;
	// ordering the bagal
	cout<<"would you like to order now?"<<endl;
	string order="yes";
	
	
	if(order=="yes"){
		cout<<"what toppingwould you like?"<<endl;
		string type[]={"all", "cheese", "jam", "blue-cheese", "sesme-begal"};
		double price[]={5, 5, 5, 5, 5};
		cout<<"1. "<<type[0]<<"--"<<price[0]<<endl;
		cout<<"2. "<<type[1]<<"--"<<price[1]<<endl;
		cout<<"3. "<<type[2]<<"--"<<price[2]<<endl;
		cout<<"4. "<<type[3]<<"--"<<price[3]<<endl;
		cout<<"5. "<<type[4]<<"--"<<price[4]<<endl;
		
		cout<<"what do you want"<<endl;
		int q5;
		cin>> q5;
		
		while(q5>4 || q5<1){
			cout<<"this is not a valid input.. try again"<<endl;
			cin>>q5;
			
		}
		
		
		if(q5==1){
			cout<<"you have ordered bagal: "<<type[0]<<endl;
			cout<<"the total price of order is "<<price[0]<<endl;
			
		}else if (q5==2){
			cout<<"you have ordered bagal: "<<type[1]<<endl;
			cout<<"the total price of order is "<<price[1]<<endl;
			
		}else if(q5==3){
			cout<<"you have ordered bagal: "<<type[2]<<endl;
			cout<<"the total price of order is "<<price[2]<<endl;
			;
		}else if(q5==4){
			cout<<"you have ordered bagal: "<<type[3]<<endl;
			cout<<"the total price of order is "<<price[3]<<endl;
			
		}
		
		cout<<"-------------------congrats you got a BAGAL------------------"<<endl;
		
	}

	
	
}
