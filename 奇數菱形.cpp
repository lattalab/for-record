#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("�Фſ�J�D�Ʀr�Cn�п�J�٧ι﨤�u����(�����O�_��)�A���}�п�J0:");
	while(scanf("%d",&n))
	{
		if(n==0)
		break;
		else if(n%2==0)
		printf("�п�J�٧ι﨤�u����(�����O�_��)�A���}�п�J0:");
		else 
		{
			//�W�b���٧� 
			for(i=1;i<=(n+1)/2;i++)
			{
				for(int j=n/2;j>i-1;j--)
				{
					printf(" ");
				}
				for(int k=1;k<=2*i-1;k++)
				{
					printf("*");
				}
				printf("\n");
			}
			//�U�b��
			for(int a=1;a<=n/2;a++)
			{
				for(int b=1;b<=a;b++)
				{
					printf(" ");
				}
				for(int c=n-2;c>2*a-2;c--)
				{
					printf("*");
				}
				printf("\n");
			} 
			
			printf("�п�J�٧ι﨤�u����(�����O�_��)�A���}�п�J0:");
		} 
	}
	return 0;
}
