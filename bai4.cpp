#include<stdio.h>
int main()
{
	int n,i;
	printf("Nhap n: ");scanf("%d",&n);
	int arr[i];
	for(i=0;i<n;i++){
		printf("Arr[%d] = ",i);scanf("%d",&arr[i]);
	}
	int min=arr[0];
    for(i=0;i<n;i++){
    	if(arr[i]<min&&min>0){
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
	
	int dem=0;
	int j=0;
//	int max=0,dem =0;
//	for(int i=0;i<n;i++){
//		if(arr[i] >0){
//			dem+=arr[i];
//			if(dem > max){
//				max = dem;
//			}
//		}else{
//			dem=0;
//		}
//	}
     for(i=0;i<n;i++){
     	for(j=1;j>min;j++){
     	if(min1=min1+1 & 0<=arr[j]-arr[j-1] &&arr[j]-arr[j-1]<=1){
     		min++;
     		dem++;
		 }
	 }
}
	 printf("So luong bien lien tiep la %d",dem);
}

