#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter A, B and C\n");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("the largest number is: ");
	
	if((a>b) && (a>c))	// Jodi a value tu sobotke dangor hoi
	{
		printf("%d",a);
		printf("\t\nIn ascending and descending order:\n");
		if(b>c)
			{
				printf("%d,%d,%d\n",c,b,a); //eitu ascending order
				printf("%d,%d,%d",a,b,c);	// eitu descending order
			}
		else
			{
				printf("%d,%d,%d\n",b,c,a); //eitu ascending order
				printf("%d,%d,%d",a,b,c);	// eitu descending order
			}
	}
	else if(b>c)	// Jodi b value tu sobotke dangor hoi
	{
		printf("%d",b);
		printf("\t\nIn ascending and descending order:\n");
		if(a>c)
			{
				printf("%d,%d,%d\n",c,a,b); //eitu ascending order
				printf("%d,%d,%d",b,a,c);	// eitu descending order
			}
		else
		{
			printf("%d,%d,%d\n",a,c,b);	//eitu ascending order
			printf("%d,%d,%d",b,c,a);	// eitu descending order
		}
			
	}
	else	// Jodi c value tu sobotke dangor hoi
	{
		printf("%d",c);
		printf("\t\nIn ascending and descending order:\n");
		if(a>b)
		{
			printf("%d,%d,%d \n",b,a,c);	//eitu ascending order
			printf("%d,%d,%d",c,a,b);	// eitu descending order
		}	
		else
		{
			printf("%d,%d,%d \n",a,b,c);
			printf("%d,%d,%d",c,b,a);	// eitu descending order
		}			
	}
	
	printf("\nThe smallest number is : ");
    if( (a < b) && (a < c) )	// Jodi a value tu sobotke horu hoi
    	printf("%d", a);
    else if(b < c)	// Jodi b value tu sobotke horu hoi
    	printf("%d", b);
    else
    	printf("%d",c);	// Jodi c value tu sobotke horu hoi
    	
	return 0;
}
