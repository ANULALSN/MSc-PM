#include<stdio.h>
int factorial(int);
void main(){
    int num,fact;
    printf("Enter the number");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factorial of the number=%d",fact);
}
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    else return n*factorial(n-1);
}