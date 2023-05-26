#include<stdio.h>
int main()
{
	int a[10], i, even=0,odd=0;
	for(int i=0;i<10;i++){
		printf("  Enter number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2==0)
		even ++;
		else
		odd ++;
	}
	
	printf("\n Total even numbers in array %d and Total odd numbers in array %d",even,odd);
	return 0;
}
