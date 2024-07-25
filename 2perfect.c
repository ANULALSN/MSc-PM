//prime number
#include<stdio.h>
void main(){
int i,j,range;
printf("Enter the range:");
scanf("%d",&range);
for(i=1;i<=range;i++){
int sum=0;
//checking whether current number i is perfect or not
for(j=1;j<i;j++)
{
if(i%j==0){
sum=sum+j;
}
}
if(sum==i)
printf("%d\t",i);
}

}
