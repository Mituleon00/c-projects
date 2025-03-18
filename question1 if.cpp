#include <iostream>
using namespace std;

int main(){
	
	double salary;
	int serviceyears;
	double bonus;
	
	cout<<"Enter your salary:"<<endl;
	cin>>salary;
	cout<<"Enter year of service:"<<endl;
	cin>>serviceyears;
	
	if(serviceyears > 10){
		bonus=salary*0.12;
		
	}
		else if(serviceyears>=6 && serviceyears<=10){
			bonus=salary*0.12;
			
		}
		else( {
			bonus=salary*0.08;
		}
     ); cout<<"the net bonus amount is:"<<bonus<<endl;
return 0;
}