#include<stdio.h>
void main(){
    int i,n,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
  
    printf("The  array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("The  sum of elements is:\n%d",sum);

}
