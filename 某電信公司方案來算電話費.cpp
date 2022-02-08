#include <iostream>
using namespace std;
int main()
{
	//題目:800分鐘內,每分0.6元 ;800~1500分鐘則每分為0.45元 ; 1500分鐘以上為每分0.3元 
	//但是電話費超過200元打95折 ;超過500打8折 ; 超過900打6折 
	int a;
	float sum;
	cout<<"請輸入通話分鐘數:";
	cin>>a;
	if(a<=800)
	sum=a*0.6; 
	else if(a>800&&a<=1500)
	sum=800*0.6+(a-800)*0.45;
	else if(a>1500)
	sum=800*0.6+700*0.45+(a-1500)*0.3;
	
	if(sum>200&&sum<=500)
	sum=sum *0.95;
	else if(sum>500&&sum<=900)
	sum=sum*0.8;
	else if(sum>900)
	sum=sum*0.6;
	
	cout<<"你的費用為:"<<sum<<endl; 
	
	return 0;
	
}
