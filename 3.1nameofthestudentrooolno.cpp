#include<iostream>
using namespace std;
class student
{
	char name[20];
	int marks;
	public:void input(){
		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter marks:";
		cin>>marks;
	}
	public : void display(){
		cout<<"\nName:"<<name;
		cout<<"\nMarks:"<<marks;
	}
};
int main()
{
	student s;
	cout<<"Taking input from the usfer:"<<endl;
	s.input();
	cout<<endl<<"--------------------------------"<<endl;
	cout<<"Entered details of the student are as follows"<<endl;
	s.display();
}
