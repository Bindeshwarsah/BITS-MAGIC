//Count the total number of setbit
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Enter any number"<<endl;
	cin>>n;
	while(n!=0)
	{
		if(n&1==1)
		{
		count++;
	}
	n=n>>1;
}
cout<<"Total number of setbit:"<<count;
}
/* output:
Enter any number
10
Total number of setbit:2
----------------------------*/
