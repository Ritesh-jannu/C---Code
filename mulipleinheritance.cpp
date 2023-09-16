#include<iostream>
Using namespace std;
class vehicle
{
	public:
	       vehicle()
		   {
		   	cout<<"This is a vehicle\n";
			   }};
class four wheeler
{
	public:
		four wheeler
		{
			cout<<"This is a 4 wheeler vehicle\n";
		}};
		class car:public vehicle,public four wheeler{
		};
		int main()
		{
			car obj;
			return 0;
		}
