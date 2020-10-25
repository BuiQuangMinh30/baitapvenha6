#include<stdio.h>
int main()
{
	int i,n;
	printf("Nhap so nguyen: ");scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++){
			printf("Arr[%d] = ",i);scanf("%d",&arr[i]);
	}
	int min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<min&&arr[i]>0){
			if(min>0){
				min=arr[i];
			}
		}
	}
	int min1=min;
	for(i=0;i<n;i++){
		if(arr[i]<min1&&arr[i]>min){
			min1=arr[i];
		}
	}
	printf("So duong nho nhat la %d",min1);
}
