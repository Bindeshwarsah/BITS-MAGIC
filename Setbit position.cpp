//Check wheather the given position is set or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,pos;
	cout<<"Enter any number"<<endl;
	cin>>n;
	cout<<"Enter the position to check the set bit"<<endl;
	cin>>pos;
	if(n&(pos-1)<<1)
	{
		cout<<"Given position is set";
	}
	else
	{
	cout<<"Given position is not set";	
	}
	return 0;
}
/*output:
Enter any number
15
Enter the position to check the set bit
2
Given position is set
----------------------*/

