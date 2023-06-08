#include<iostream>
#include<string.h>
using namespace std;

class House
{
	public :
	int h_no;
	char h_name[100];
	char h_add[100];
	int h_room;
	int h_r_size;
	
};

int main()
{
	House h;
	
	h.h_no=7;
	strcpy(h.h_name,"shanti niketan");
	strcpy(h.h_add,"nana varachha");
	h.h_room=5;
	h.h_r_size=15*16;
	
	cout<<"house no.="<<h.h_no<<endl;
	cout<<"house name="<<h.h_name<<endl;
	cout<<"house address="<<h.h_add<<endl;
	cout<<"house rooms="<<h.h_room<<endl;
	cout<<"house rooms size="<<h.h_r_size<<endl;
	
	return 0;
}\
