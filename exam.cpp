#include <stdio.h>
#include <math.h>

double chuvi(double a,double b,double c){
	double t=a+b+c;
	return t;
}
double dientich(double a,double b,double c ){
	double p=(a+b+c)/2;
	double s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main(){
	double a,b,c;
	do{
		printf("\n nhap do dai canh a = ");
		scanf("%lf",&a);
 		printf("\n nhap do dai canh b = ");
 		scanf("%lf",&b);
		printf("\n nhap do dai canh c = ");
		scanf("%lf",&c);
	}while(a+b<c || b+c<a || a+c<b ||a<0||b<0||c<0);
	
	printf("\n chu vi cua tam giac la : %lf",chuvi(a,b,c));
	printf("\n dien tich cua tam giac la : %lf",dientich(a,b,c));
}
