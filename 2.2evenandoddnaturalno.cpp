#include<iostream>
using namespace std;
int main(){
	int num, max, evenSum = 0, oddSum = 0;
	cout<<"Sum of even and odd numbers for n natural numbers"<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"\n Enter the max limit for even and odd nums =";
	cin>> max;
	for(num = 1; num <= max; num++)
    {
    	if ( num % 2 == 0)
  			evenSum = evenSum + num;
	    else
		    oddSum = oddSum + num;
    }
	cout<<"\nThe Sum of All Even num upto "	<< max << " = "	<< evenSum;
	cout<<"\nThe Sum of All Odd num upto"  <<max <<" = " <<oddSum;
	return 0;
}
