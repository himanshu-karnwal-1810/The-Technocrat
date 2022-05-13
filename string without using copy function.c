#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10],i;
	printf("the name is:");
	scanf("%s",a);
	for(i=0;a[i]!=0;i++)
	{
		b[i]=a[i];
	}
	printf("%s\n",b);
	b[i]='\0';
	return 0;
}
