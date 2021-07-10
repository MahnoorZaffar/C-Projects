#include <iostream>
#include <cmath>

using namespace std;

int coffee(){
	cout<<"do you want a $2.oo coffee"<<endl;
	string q1;
	getline(cin, q1);
	
	cout<<"what is you account balance?"<<endl;
	double q2;
	cin>>q2;
	
	int q3= (q2-2.00);
	
	
	if(q1=="yes" && q2>5){
	cout<<"here is your coffee and your remanaing balance is "<< q3 <<endl;
	cout<<"thank you for your purchase"<<endl;
	}else if(q1=="yes" && q2<=2){
		cout<<"sorry! but your balance is unsufficent"<<endl;
		cout<<"thank you for visiting our website"<<endl;
	}else if(q1=="no" && q2>2){
		cout<<"Do you not want the coffe then?"<<endl;
		cout<<"thank you for being here"<<endl;
		
	}else{
		cout<<"thank you for your attedance"<<endl;
		cout<<"have a good day"<<endl;
	}
	
}


int main(){
	coffee();
	
	return 0;
}
