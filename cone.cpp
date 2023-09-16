 #include<iostream>
 using namespace std;
 int main(){
 	float h,r,v_cone;
 	cout<<"enter radius and height:";
	cin>>h>>r;
	v_cone=0.33*3.14*r*r*h;
	cout<<"Volume of cone:"<<v_cone<<endl;
	cout<<"---------------------------"<<endl;
	float s,v_square;
	cout<<"enter side:";
	cin>>s;
	v_square=s*s*s;
	cout<<"Volume of square:"<<v_square<<endl;
	cout<<"------------------------"<<endl;
	float l,b,h1,v_rect;
	cout<<"enter length, breadth and height:";
	cin>>l>>b>>h1;
	v_rect=l*b*h1;
	cout<<"Volume of Rectangle:"<<v_rect<<endl;
	cout<<"---------------------"<<endl;
	return 0;
}
