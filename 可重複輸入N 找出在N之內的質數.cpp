#include <iostream>
using namespace std;
int main()
{
	int s,N;
	while(cin>>N)
	{
		for(int i=2;i<=N;i++)
		{
		s=1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			s=0;
		 	break;
		}
		
		
	  	if(s==1)
	  	cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
 } 
