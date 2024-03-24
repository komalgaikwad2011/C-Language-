#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	FILE *f1,*f2;
	f1=fopen("ram.txt","r");
	f2=fopen("om.txt","w");
	if(f1==NULL)
	{
	printf("file not found");
	exit(0);
	}
	while(!feof(f1))
	{
	ch=fgetc(f1);
	fputc(ch,f2);
	}
	fclose (f1);
	fclose (f2);
	printf("file copy success");
}
