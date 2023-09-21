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
	z=max(x,y);//引用自定义函数 
	printf("%d",z);
	return 0;
}
