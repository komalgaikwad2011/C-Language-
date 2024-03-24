#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
	char s1[100];
	int cnt;
	FILE *f1;
	
	f1=fopen("sai.txt","r");
	if(f1==NULL)
	{
	printf("file not found");
	exit(0);
	}
	int w=0,l=0,ch=0;
	while(!feof(f1))
	{
	  ch=fgetc(f1);
	  ch++;
	 if(ch==' ')
	  { 
	   w++;
	  }
	 if(ch=='\n')
	  {
	    l++;
	  }	
	}
	printf("\ncharecter=%d",ch);
	printf("\nwords=%d",w);
	printf("\nlines=%d",l);
          fclose(f1);
}
