#include <iostream>


#include<bits/stdc++.h>

using namespace std;

class sample

{

	public:
	    int a,k,n,i,f=0;
	int get()

	{
cin>>n;
return 0;

	}

	int calc()

	{
	   while(n>1){
	   	if(n%2==0){
	   		n=n/2;
	   	}
	   	else{
	   		n=n-1;
	   		f++;
	   		n=n/2;
	   		n=n+1;
	   	}
	   }
	   cout<<f;
	}

};

int main()

{

   sample s;

   s.get();

   s.calc();

   return 0;

}
