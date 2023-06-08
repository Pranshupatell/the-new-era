#include<iostream>
#include<string.h>
using namespace std;

class Distance
{
	public :
	int inch,feet;
};

int main()
{
    Distance d,d2,sum;
    
    cout<<"enter 1st distance:"<<endl;
    cout<<"feet1=";
    cin>>d.feet;
    cout<<"inch1=";
    cin>>d.inch;
    
    cout<<"enter 2nd distance:"<<endl;
    cout<<"feet2=";
    cin>>d2.feet;
    cout<<"inch2=";
    cin>>d2.inch;
    
    sum.feet=d.feet+d2.feet;
    sum.inch=d.inch+d2.inch;
    
    while(sum.inch>=12)
    {
    	sum.feet++;
    	sum.inch-=12;
    	
	}
     cout<<"feet="<<sum.feet;
     cout<<"inch="<<sum.inch;
  	 return 0;
}
