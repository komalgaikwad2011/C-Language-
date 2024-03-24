#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int k;
	printf("enter the two string");
	scanf("%s%s",&s1,&s2);
	printf("\na.compare\n");
	k=strcmp(s1,s2);
	if(k==0)
	printf("string1 and string2 are same");
	else if(k>0)
	printf("string1 is greater");
	else if(k<0)
	printf("string2 is greater");
	printf("\n b.copy\n");
	strcpy(s1,s2);
	printf("\n strinf1=%s",s1);
	printf("\n string2=%s",s2);
}
