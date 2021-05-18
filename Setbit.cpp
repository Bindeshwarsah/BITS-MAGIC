//Making the given bit as set bit
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,res,pos;
	cout<<"Enter any number"<<endl;
	cin>>n;
	cout<<"Enter the position to make set"<<endl;
	cin>>pos;
	res=n|(pos-1)<<1;
	cout<<"The set number is: "<<res;
 }
 /*output:
 Enter any number
10
Enter the position to make set
3
The set number is: 14
------------------------------*/ 
