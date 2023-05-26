//Taking input  and print array
#include<stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		printf("\Enter number:");
		scanf("%d",&a[i]);
	}
	printf("\n Array elements are:");
	for(int i=0;i<10;i++){
		printf("\n %d",a[i]);
	}
	return 0;
}
