#include <stdio.h>
int main(){
	int n;
	printf("nhap so gia tri can nhap ");
	scanf("&d",&n);
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		bool flag;
		int x;
		do{
			flag=false;
			printf("nhap gia tri arr[%d]",i);
			scanf("%d",&x);
			for(int j=0;j<i;j++){
				if(arr[i]==x){
					flag=true;
					break;
				}
			}if(!flag){
				arr[i]=x;
			}
			
		}while(flag);
		
	}
	printf("mang sau khi nhap gia tri");
	for(int i=0;i<n;i++){printf("%5d",arr[i]);
	}
	
}
