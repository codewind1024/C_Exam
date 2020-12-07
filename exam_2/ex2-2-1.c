#include <stdio.h>
int main(){
	int a,b,c;
	a=1;
	b=2;
	printf("a:%d,b:%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("swap: a:%d,b:%d",a,b);
	getchar();

	return 1;
}


