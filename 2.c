#include<stdio.h>
 int max(int a,int b)
{
	if (a>b)
	return a;
	else 
	return b;
}
int main()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=max(x,y);//�����Զ��庯�� 
	printf("%d",z);
	return 0;
}
