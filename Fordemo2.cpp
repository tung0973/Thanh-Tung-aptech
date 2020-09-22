#include <stdio.h>
#include <math.h>
int main(){
	float n;
	printf("Xin moi nhap so = ");
	scanf("%f",&n);
	
	float s;
	
	for(float i=0;i<=n;i++){
		s+= 1/i;}
		
		printf("S =%f ",s);
}
