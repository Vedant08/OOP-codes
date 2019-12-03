#include<iostream>
using namespace std;

class Student{
	static int count;
	int roll;
	string name,clas,div,Dob,blood,add,phone,drlNo;

	public:

	Student()//default Constructor
	{

		//roll=00;
	}
	Student(int roll,string name)//Parameterized Constructor
	{
		this->roll=roll;
		this->name=name;
	}
	Student(Student *st)//Copy Constructor
	{
		this->roll=st->roll;
		this->name=st->name;
		this->clas=st->clas;
		this->div=st->div;
		//this->Dob=st->Dob;
		this->blood=st->blood;
		this->add=st->add;
		this->phone=st->phone;
		this->drlNo=st->drlNo;
		cout<<"Done...!";

	}
	friend inline void copy_Roll(Student *&,Student *&);//friend function declaration
	void add_Record()
	{
		cout<<"Enter Roll no:"<<endl;
		cin>>roll;
		cout<<"Enter Name:"<<endl;
		cin>>name;
		cout<<"Enter class:"<<endl;
		cin>>clas;
		cout<<"Enter Division:"<<endl;
		cin>>div;
		cout<<"Enter blood group:"<<endl;
		cin>>blood;
		cout<<"Enter address:"<<endl;
		cin>>add;
		cout<<"Enter phone no:"<<endl;
		cin>>phone;
		cout<<"Enter driving licscene no:"<<endl;
		cin>>drlNo;
		Student::count++;

	}
	void display_Record()
	{
		cout<<"Roll no:"<<roll<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"Class:"<<clas<<endl;
		cout<<"Division:"<<div<<endl;
		cout<<"Blood Group : "<<blood<<endl;
		cout<<"Address :"<<add<<endl;
		cout<<"Phone No:"<<phone<<endl;
		cout<<"Driving Liscene No:"<<drlNo<<endl;
	}
	static void record_Count()
	{
		cout<<"Number Of Records is:"<<Student::count<<endl;
	}

};
int Student::count=0;

inline void copy_Roll(Student *&p1,Student *&p2)		//Inline Function
{
	cout<<"Friend Function Called..!"<<p2->roll<<" "<<p2->roll<<endl;
	p1->roll=p2->roll;
	cout<<"Friend Function Called..!"<<p2->roll<<" "<<p2->roll<<endl;
}

int main()
{
	int n,pos,check;
	cout<<"Enter No of students"<<endl;
	cin>>n;
	Student *std[n],*tmp;
	do{

	cout<<"1.Add Students\n2.Delete Student\n3.display"<<endl;
	cin>>check;
	switch(check)
	{
	case 1:
	cout<<"Enter Student details"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<"st record"<<endl;
		std[i]=new Student;				//Dynamic Allocation
		std[i]->add_Record();
	}
	break;

	case 2:
	cout<<"Enter position to delete record from:"<<endl;
	cin>>pos;
	for(int i=pos-1;i<n-1;i++)
	{
		std[i]=std[i+1];
	}
	
	copy_Roll(std[n-2],std[n-1]);
	tmp=std[n-1];
	delete(tmp);						//Freeing up memory space

	n--;
	break;

	case 3:
	cout<<"Student Records"<<endl;
	Student::record_Count();
	for(int i=0;i<n;i++)
	{
		std[i]->display_Record();
	}
	break;

	default:
	cout<<"Invalid Choice";
	}

	cout<<"Enter 1 to continue else enter 0>>"<<endl;
	cin>>check;
	}while(check==1);

	return 0;
}
