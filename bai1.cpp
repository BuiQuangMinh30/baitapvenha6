#include<stdio.h>
int main()
{
	int i,n;
	printf("Nhap so nguyen: ");scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Arr[%d] = ",i);scanf("%d",&arr[i]);
	}
	
	int a=0;
	  for(i=0;i<n;i++){
	  		if(arr[i]%2!=0){
	         	a=arr[i];
	  }
	}
	printf("So le cuoi cung la: %d",a);
	
}
