/*
Lab Assignment No 3: Implement C++/Java/Python program to create a base class called shape. Use this class to store two double type values that could be used to compute the area of figures. Derive two specific classes called function get_data() to initialize base class data members and another member function display_area() to compute and display the area of figures. Make classes to suit their requirements. Using these three classes, design a program that will accept dimension of a triangle or a rectangle interactively, and display the area. Remember the two values given as input will be treated as lengths of two sides in the case of rectangles, and as base and height in the case of triangles, and used as follows:
Area of rectangle= x*y Area of triangle =1/2*x*y
*/


#include<iostream>
using namespace std;

class shape
{
		
	public:
		float a,b;
	
		virtual void getdata()=0;
		virtual void sarea()=0;
};

class triangle: public shape
{
	void getdata()
	{
		
		cout<<"Enter the Height and Base\n";
		cin>>a>>b;
	}
	
	void sarea()
	{
		cout<<"Area of Triangle: "<<0.5*a*b<<"squnit\n";
	}
	
};

class rectangle: public shape
{
	void getdata()
	{
		
		cout<<"Enter the Length and B\n";
		cin>>a>>b;
	}
	
	void sarea()
	{
		cout<<"Area of Rectangle: "<<a*b<<"squnit\n";
	}
	
};



int main()
{
	
	triangle tri;
	shape *stri=&tri;
	stri->getdata();
	stri->sarea();
	
	rectangle rec;
	shape *srec=&rec;
	srec->getdata();
	srec->sarea();
	

	return 0;
}
