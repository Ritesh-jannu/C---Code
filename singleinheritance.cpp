#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<"This is a vehicle\n";
		}
};
class car:public vehicle
{
};
int main()
{
	car obj;
	return 0;
	
}
