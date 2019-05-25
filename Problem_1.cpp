#include<iostream>
#include<conio.h>
#include<math.h>
#include<cmath>

using namespace std;

int main()
{
	double w,x,y,z,a,b,c;
	double pi=3.14;
	double area;
	double s;
	double APOTHEM,CIRCUMCENTER;
	char ans='Y';

	
while(ans=='Y')
{
	cout<<"\nPlease input the three sides of the triangle."<<endl;
	cout<< "\nFirst Side of the Triangle: ";
	cin>>w;
	cout<< "Second Side of the Triangle: ";
	cin>>x;
	cout<< "Third Side of the Triangle: ";
	cin>>y;
	a=round(acos((x*x+y*y-w*w)/(2*x*y))*180/pi);
	cout << "\nThe angle A is: " << a << " degrees" << endl;
	b=round(acos((y*y+w*w-x*x)/(2*w*y))*180/pi);
	cout << "The angle B is: " << b<< " degrees" << endl;
	c=180-(a+b);
	cout<< "The angle C is: "<<c<<" degrees"<<endl;
	
{
		
	if(w==x&&x==y&&w==y)
	{
		cout<<"\nThis is an equilateral triangle"<<endl;
	}
	if(sqrt(w*w+x*x)==y&&sqrt(x*x+y*y)==w&&sqrt(y*y+w*w)==x)
	{
		cout<<"\nThis is an isosceles triangle"<<endl;
	}
	if(w!=x&&x!=y&&y!=w)
	{
		cout<<"\nThis is a scalene triangle"<<endl;
	}
}
		
	z=w+x+y;
	cout<< "\nThe perimeter of the triangle is: "<<z<<endl;
	s=(w+x+y)/2;
	area=sqrt(s*(s-w)*(s-x)*(s-y));
	cout<<"The area of the triangle is: "<<area<<endl;
{
	
	if(a<90&&b<90&&c<90)
	{
		cout<<"\nThis is an acute triangle"<<endl;
	}
	if(a==90 or b==90 or c==90)
	{
		cout<<"\nThis is a right triangle"<<endl;
	}
	if(a>90 or b>90 or c>90)
	{
		cout<< "\nThis is an obtuse triangle"<<endl;
	}
}

	APOTHEM=area/0.5*z;
	cout<<"\nThe Apothem's length is: "<<APOTHEM<<endl;
	
	CIRCUMCENTER=w*x*y/sqrt((w+x+y)*(x+y-w)*(y+w-x)*(w+x-y));
	cout<<"The Circumcenter's length is: "<<CIRCUMCENTER<<endl;
	
	cout<<"\n\nDo you want to Try Again? Input 'Y' for yes and 'N' for no: ";
	cin>>ans;
}

	getch();
	return 0;
}
