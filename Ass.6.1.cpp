#include <stdio.h>

int main(){
	int n;
	printf("muon nhap bao nhieu phan tu :");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap cac gia tri : ");
		scanf("%d",&a[i]);
	}
	printf("gia tri chan cuoi cung :");
	for(int i=n-1;i>=0;i--){
		if(a[i] % 2 == 0){
			printf("%d",&a[i]);
		}
		
	}
	
	
	
}
