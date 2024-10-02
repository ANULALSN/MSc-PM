#include<stdio.h>
void main(){
    int i,n,temp,j;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

}