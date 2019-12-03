#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char ch;
fstream f;
f.open("first.txt",ios::out);
if(!f)
{
cout<<"Enter the opening file\n";
return 0;
}
cout<<"file name first.txt created !!!\n";
f<<"SY BTECH computer division A ,batch A-3,VIIT pune \n";
f.close();
f.open("first.txt",ios::in);
if(!f)
{
cout<<"Error opening file\n";
return 0;
}
while(!f.eof())
{
f>>ch;
cout<<ch;
}
f.close();;
return 0;
}
