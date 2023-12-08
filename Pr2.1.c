#include<stdio.h>

main(){
	int no;
	
	printf("Enter any number : ");
	scanf("%d",&no);
	
	(no%2==0) ? printf("\nNumber is Even") : printf("\nNumber is Odd");
}
