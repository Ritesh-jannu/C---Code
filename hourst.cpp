#include<iostream>
using namespace std;
int main(){
	int tot, h, min, sec;
	cout<<"Secondss conversion into hours, minutes and seconds"<<endl;
	cout<<"-----------------"<<endl;
	cout<<"enter seconds";
	cin>>tot;
	 h=tot/3600;
	 min=(tot/60)%60;
	 sec=tot%60;
	 cout<<h<<"hours"<<":"<<min<<"minutes"<<": "<<sec<<"seconds";
	 return 0;
}
