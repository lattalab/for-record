#include <iostream>
using namespace std;
int main()
{
	//�D��:800������,�C��0.6�� ;800~1500�����h�C����0.45�� ; 1500�����H�W���C��0.3�� 
	//���O�q�ܶO�W�L200����95�� ;�W�L500��8�� ; �W�L900��6�� 
	int a;
	float sum;
	cout<<"�п�J�q�ܤ�����:";
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
	
	cout<<"�A���O�ά�:"<<sum<<endl; 
	
	return 0;
	
}
