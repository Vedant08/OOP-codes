#include<iostream>
#include<list>
using namespace std;
void display(list<int>&l)
{
list<int>::iterator itr;
for(itr=l.begin();itr!=l.end();++itr)
{
cout<<*itr<<",";
cout<<" \n";
}
}
int main()
{
	list <int>l1;
	list<int>l2(5);
	int no,value;
	std::cout<<"Enter the no of elements in list 1::\n";
	std::cin>>no;
		for(int i=0;i<no;i++)
		{
			std::cout<<"Enterthe value::\n";
			std::cin>>value;
			l1.push_back(value);
		}
		display(l1);
		list<int>::iterator itr2;
	for(itr2=l2.begin();itr2!=l2.end();++itr2)
	{
		*itr2=rand()/100;
	}
std::cout<<"List 1 element are::\n";
display(l1);
cout<<"list 2 element are::\n";
display(l2);
list<int>listA,listB;
listA=l1;
listB=l2;
l1.merge(l2);
cout<<"merge unsorted list::\n";
display(l1);
listA.sort();
listB.sort();
listA.merge(l2);
cout<<"merge sorted list::\n";
display(listA);
cout<<"reverse list::\n";
listA.reverse();
display(listA);
return 0;
}
