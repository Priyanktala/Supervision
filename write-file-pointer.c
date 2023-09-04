#include<stdio.h>
main()
{
	int *p;
	char data[1000]="Priyank Here";
	
	p=fopen("demo.txt","w");
	
	if(p==0)
	{
		printf("File could not Open");
	}
	else
	{
		printf("Enter Data=");
		gets(data);
		fputs(data,p);
		printf("Data add successfull");
	}
	fclose(p);
}