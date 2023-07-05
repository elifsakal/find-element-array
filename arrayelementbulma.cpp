#include<stdio.h>

int main ()

{
	int i,search_key,n;
	printf("enter size of array: ");
	scanf("%d" ,&n);
	
	int arr[n];
	printf("enter elements of array: ");
	
	for(i=0; i<n; i++){
		scanf("%d" ,&arr[i]);
	}
	printf("enter the key: ");
	scanf("%d" ,&search_key);
	
	for(i=0; i<n; i++){
		if(arr[i]==search_key)
		{
			printf("elements was found. position: %d" ,i+1);
			break;
		}
		if(i==n-1) {
			printf("search elements not found");
		}
	}
	return 0;
}
