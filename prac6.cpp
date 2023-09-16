#include<iostream>
using namespace std;
class Person
{
	char Name[20];
	int Age;
public:
	void getData()
	{
		cout<<"Enter Name:";
		cin>>Name;
		cout<<"Enter Age:";
		cin>>Age;
	}
	void putData()
{
	 cout<<"\n\nDetails About Eldest Person as Follows:";
	 cout<<"\nNmae="<<Name<<"\nAge="<<Age;
	}	
	Person &Compare(Person &p1)
	{
		if(p1.Age>this->Age)
		return p1;
		else 
		return *this;
	}
};
int main()
{
	Person x,y,z;
	x.getData();
	y.getData();
	z=x.Compare(y);
	z.putData();
	return 0;
}
