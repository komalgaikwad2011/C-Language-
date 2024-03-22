#include<stdio.h>
int main()
{
	int a,b,temp,*p1,*p2;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("number after swaping a=%d and b=%d",a,b);
}
