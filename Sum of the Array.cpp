#include<stdio.h>
int main()
{
	int a[10], i, sum=0;
	for(int i=0;i<10;i++){
		printf("  Enter number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		sum= sum +a[i];
	}
	
	printf("\n Sum of the Array:%d",sum);
	return 0;
}
