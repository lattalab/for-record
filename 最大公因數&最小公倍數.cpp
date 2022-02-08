#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int a,b,t,s;
     
	cin >> a >> b ;//10<=a,b<=100 
	s=a*b;  
	while(1 )
    {
    	if(a<10||a>100)
		continue;
    	else if(b<10||b>100)
		continue;
        while( b!=0 )
        {
            t = b;
            b = a%b;
            a = t;
        }      
    	cout <<"程そ计="<< a << endl;
    	cout<<"程そ计="<<s/a<<endl; 
    } 

  return 0;
}

