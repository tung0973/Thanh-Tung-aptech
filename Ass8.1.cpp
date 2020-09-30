#include <stdio.h>
#include <math.h>
bool nguyento(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0 && n != i)
        {
            return true ;
            break;
        }
}
int main()
{
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    printf("\nCac so nguyen to nho hon n la: ");
    for (int i =n-1; i >=3; i--)
        if (nguyento(i) != 1){
        	printf("%d ", i);
        	break ;
		}
        
            
    
}
