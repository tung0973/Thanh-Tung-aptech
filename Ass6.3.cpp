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
	int x=0;
	
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			x++;
			
		}else(x=0); 
	}printf("so luong duong lien tiep la %d",x);
}
