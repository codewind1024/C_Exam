#include <stdio.h>
int main() {
	int a,b,c,max;
	printf("please input three number:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		max=a;	
	}
	else
	{
		max=b;
		if(c>max)
		{
			max=c; 
		}
		
	}		
	printf("\n%d,%d,%d,max:%d",a,b,b,max);
	return  0;
}
