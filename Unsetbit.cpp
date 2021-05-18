//Making the given bits unset
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,res,pos;
	cout<<"Enter any number"<<endl;
	cin>>n;
	cout<<"Enter the position to be unset"<<endl;
	cin>>pos;
	res=n^(pos-1)<<1;
     cout<<"The unset number is: "<<res;
 } 
 /* output:
 Enter any number
6
Enter the position to be unset
2
The unset number is: 4
---------------------------*/
