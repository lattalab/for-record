#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("請勿輸入非數字。n請輸入菱形對角線長度(必須是奇數)，離開請輸入0:");
	while(scanf("%d",&n))
	{
		if(n==0)
		break;
		else if(n%2==0)
		printf("請輸入菱形對角線長度(必須是奇數)，離開請輸入0:");
		else 
		{
			//上半部菱形 
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
			//下半部
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
			
			printf("請輸入菱形對角線長度(必須是奇數)，離開請輸入0:");
		} 
	}
	return 0;
}
