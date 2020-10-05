#include <stdio.h>

int main(){
	int n;
	printf("ban muon nhap bao nhieu so :");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri :");
		scanf("%d",&a[i]);
	}
	int min;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			min=a[i];
			break;
		}
	}
	if(min==0){
		printf("mang khong co so duong ");
	}else{
		for(int i=0;i<n;i++){
			if(a[i]<min&&a[i]>0){
				min=a[i];
			}
		}printf("so duong nho nhat la :%d",min);
	}
}
