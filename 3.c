#include<stdio.h>
int main()
{
	int a,b d;
	int m=0;
	int c=1;
	scanf("%d",&a);
	for(d=1;d<a+1;d++)
	{
		c=c*d;
		m+=c;
	}
	prinf("%d",m);
	return 0;
}
