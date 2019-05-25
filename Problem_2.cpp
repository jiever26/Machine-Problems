#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main ()
{
    char geom;             //For the switch statement.
    int x;                 //For the bool statement.
    float h,l,w,rad;       //Makes use of the height, length, width, and radius.
    bool userquit = false; //To make user repeat the process of the application.
	
	cout<<"G E O M E T R I C   C A L C U L A T O R"<<endl;
	cout<<"---------------------------------------"<<endl;
	
    do
    {
    cout << "\nChoose which geometric figure you want to calculate.  \n\nPlease input C for Cone, P for Pyramid, and S for Sphere.\n \nAnswer: ";
    cin >> geom;

    if (geom!='C' && geom!='c' && geom!='P' && geom!='p' && geom!='S' && geom!='s')
        {
         cout << "Please Try Again.";  //Invalid input of the user.
         break;
        }
    switch(geom)  //To make the user choose the geometric figure they want to compute.
    
    {
    case 'c':
    case 'C':
        {
        	cout<<"\nPlease input the required elements to compute the different parameters of a cone: \n";
			cout<<"\nWhat is the radius of the cone? ";
			cin>>rad;
			cout<<"What is the height of the cone? ";
			cin>>h;
			
			float sh = sqrt((rad*rad)+(h*h));                            //Helps solve for the Lateral and Base Area of the Cone.
			cout<<"\nVolume: "<<(3.14*rad*rad*h)/3<<endl;                //Solves for the Volume of the Cone.
			cout<<"Lateral Area: "<<3.14*rad*sh<<endl;                   //Solves for the Lateral Area of the Cone.
			cout<<"Base Area: "<<3.14*rad*rad<<endl;                     //Solves for the Base Area of the Cone.
			cout<<"Surface Area: "<<(3.14*rad*sh)+(3.14*rad*rad)<<endl;  //Solves for the Surface Area of the Cone.
			break; 
        }
    
	case 'p':
    case 'P':
        {
        	cout<<"\nPlease input the required elements to compute the different parameters of a pyramid: \n";
			cout<<"\nWhat is the length of the base of the pyramid? ";
			cin>>l;
			cout<<"What is the width of the base of the pyramid? ";
			cin>>w;
			cout<<"What is the height of the pyramid? ";
			cin>>h;
			
			float sh=sqrt(((l/2)*(l/2))+(h*h));                          //Helps solve for the Lateral and Base Area of the Pyramid.
			cout<<"\nVolume: "<<(l*w*h)/3<<endl;                         //Solves for the Volume of the Pyramid.
			cout<<"Lateral Area: "<<(((w*2)+(l*2))*sh)/2<<endl;          //Solves for the Lateral Area of the Pyramid.
			cout<<"Base Area: "<<l*w<<endl;                              //Solves for the Base Area of the Pyramid.
			cout<<"Surface Area: "<<((((w*2)+(l*2))*sh)/2)+(l*w)<<endl;  //Solves for the Surface Area of the Pyramid.
			break;
        }
        
    case 's':
    case 'S':
        {
        	cout<<"\nPlease input the required elements to compute the different parameters of a sphere: \n";
			cout<<"\nWhat is the radius of the sphere? ";
			cin >>rad;
			cout<<"\nVolume: "<<(4*3.14*rad*rad*rad)/3<<endl;            //Solves for the Volume of the Sphere.
			cout<<"Surface Area: "<< 4*3.14*rad*rad<<endl;               //Solves for the Surface Area of the Sphere.
			break;
        }
    default:
        {
        	cout<<"Please Try Again.";   //Invalid input of the user.
			break;
        }
    }

    cout<<"\nDo you stil want to continue solving? \nPlease input 1 if yes and 0 if no.\n= ";
    cin>>x;
    cout << endl;

    if (x==0)     //To make user quit the application.
        {
        userquit=true;
        cout<<"Thank you for using the application.";
        }
    } while(!userquit);

    getch();
    return 0;
}

