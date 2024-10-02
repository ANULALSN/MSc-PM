#include<stdio.h>


void main(){
char password[20];
char ch;
int i=0;
printf("Enter the password:");
while(1){
ch=getchar();
if(ch==13)
break;
if(ch=='\b' && i>0){
printf("\b\b");
i--;
continue;
}
password[i++]=ch;
printf("*");
}
password[i]='\0';
printf("Entered password is %s",password);
}