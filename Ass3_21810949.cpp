/*
Lab Assignment No 3: Implement C++/Java/Python program to create a base class called shape. Use this class to store two double type values that could be used to compute the area of figures. Derive two specific classes called function get_data() to initialize base class data members and another member function display_area() to compute and display the area of figures. Make classes to suit their requirements. Using these three classes, design a program that will accept dimension of a triangle or a rectangle interactively, and display the area. Remember the two values given as input will be treated as lengths of two sides in the case of rectangles, and as base and height in the case of triangles, and used as follows:
Area of rectangle= x*y Area of triangle =1/2*x*y
*/


#include<iostream>
using namespace std;

class Shape
{
	public:
        double length,width;
        void get_data() //Accepting values
        {
        cout<<"Enter the length-->>";
        cin>>length;
        cout<<"Enter the width-->>";
        cin>>width;
        }
        void display()  //Displaying values
        {
        cout<<"length-->>"<<length;
        cout<<"\t width-->>"<<width<<"\n";
        }
};

class rectangle:public Shape //Inheriting base class shape
{
	public:
        double result;
        void cal()    //Calculating  area of rectangle
        {
        get_data();
        display();
        result=(length*width);
        }
        void display_area() //Displaying area of rectangle
        {
        cout<<"Area of Rectangle-->>"<<result<<"\n";
        }
};

class triangle:public Shape //Inheriting of shape class
{
	public:
        double result;

        void cal() //Calculating area of triangle
        {
        get_data();
        display();
        result=(length*width)/2;
        }
        void display_area()  //Displaying area of Triangle
        {
        cout<<"Area of Triangle-->>"<<result<<"\n";
        }
};

int main()
{
	int check;
	char repeat='n';
        rectangle rec;
        triangle tri;
        do
        {
	 cout<<"Pick any one from the given choice:-\n";
        cout<<"1.Area of Rectangle.\n";
	cout<<"2.Area of Triangle.\n";
        cout<<"Enter the choice::";
        cin>>check;
        switch(check)  // switch case used for multiple operation
        {
		case 1:
    		rec.cal();
    		rec.display_area();
    		break;
		case 2:
    		tri.cal();
    		tri.display_area();
    		break;
		default:
    		cout<<"Enter the valid choice::\n";
    		break;
	}
        cout<<"Do you want to continue (Y/N)::";
        cin>>repeat;
        }
	while(repeat=='Y'||repeat=='y');
    return 0;
}
