#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int k;
	printf("enter two string");
	scanf("%s%s",&s1,&s2);
	printf("\na. compare");
	k=strcmp(s1,s2);
	if(k==0)
	printf("\nstring1 and string2 same");
	else if(k>0)
	printf("\nstrinf1 is greater");
	else if(k<0)
	printf("\nstring2 is greater");
	printf("\n b.copy");
	strcpy(s1,s2);
	printf("\n string 1=%s",s1);
	printf("\n string 2=%s",s2);
}
