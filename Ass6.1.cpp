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
	printf("so le cuoi cung cua mang la : ");
	for(int i=n-1;i>=0;i--){
		if(arr[i]%2==1){
			printf(" %d",arr[i]);
			break;
		}
	}
	
}
