#include<stdio.h>
int gcd(int a,int b); 
int main() 
{   int a,b,g; 
    printf("Enter two numbers"); 
    scanf("%d%d",&a,&b); 
    g=gcd(a,b); 
    printf("GCD of %d and %d is %d",a,b,g); 
} 
int gcd(int a, int b) 
 { 
    if(b==0)
     return a; 
    else 
     return gcd(b,a%b); 
}
