#include <stdio.h>
int main(){
	int n;
	printf("ban muon nhap vao bao nhieu gia tri ? :");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){

		printf("nhap tiep gia tri :");
		scanf("%d",&arr[i]);
	}
	int min;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			min=arr[i];
			break;
		}
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]>0&&min>arr[i]){
			min=arr[i];
		}
	}printf("so duong be nhat la :");
		printf("%d",min);
		
}
