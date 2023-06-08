#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public :
	char s_name[100];
	int s_grid;
};

int main()
{
	Student s,s2;
	
   strcpy(s.s_name,"pranshu");
   s.s_grid=3527;
   strcpy(s2.s_name,"dax");
   s2.s_grid=3717;
   
   cout<<"1st student name="<<s.s_name<<endl;
    cout<<"1st student gr id="<<s.s_grid<<endl;
   cout<<"2nd student name="<<s2.s_name<<endl;
    cout<<"2nd student gr id="<<s2.s_grid<<endl;
}
