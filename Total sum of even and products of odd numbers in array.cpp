#include<stdio.h>
int main()
{
	int a[10], i,sum=0,pro=1;
	for(int i=0;i<10;i++){
		printf("  Enter number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2==0)
		sum=sum+a[i];
		else
		pro=pro*a[i];
	}
	
	printf("\n Total sum of even numbers in array %d and Total products of odd numbers in array %d",sum,pro);
	return 0;
}
