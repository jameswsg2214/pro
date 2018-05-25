#include <iostream>


#include<bits/stdc++.h>

using namespace std;

class sample

{

	public:
	    int n1,k,n,c=0,l,c2,f=0,v1,temp;
	int get()

	{
cin>>n>>k;
return 0;

	}

	int calc()

	{
	n1=n;
	while(n>0){
    	n=n/10;
    	c++;
	}
	c2=c-k;
	l=pow(10,c2);
	n=n1;
	while(n1>-1){
	v1=n%l;
	n=n/10;
	n1=n/l;
	if(f>0&&v1<temp)
	temp=v1;
	else if(f==0)
	temp=v1;
	
	if(n1==0)
	break;
	f++;
	}
	cout<<temp;
	return 0;

	}

};

int main()

{

   sample s;

   s.get();

   s.calc();

   return 0;

}
