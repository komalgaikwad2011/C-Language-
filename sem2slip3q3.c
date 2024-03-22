#include<stdio.h>
#include<string.h>
struct person
	{
	char name[20],address[20];
	struct bdate
	{
	int dd,mm,yyyy;
	}d1;
	}p1;
int main()
{
	
	printf("enter the person name");
	scanf("%s",&p1.name);
	printf("enter the address");
	scanf("%s",&p1.address);
	printf("enter the bdate as dd-mm-yyyy");
	scanf("%d%d%d",&p1.d1.dd,&p1.d1.mm,&p1.d1.yyyy);
	printf("details of person:\n");
	printf("name:%s\naddress:%s\ndbate:%d%d%d\n",p1.name,p1.address,p1.d1.dd,p1.d1.mm,p1.d1.yyyy);
	
	
}
