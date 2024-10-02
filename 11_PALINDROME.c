#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int start,end;
    printf("Enter the String:\n");
    fgets(str,sizeof(str),stdin);
    start=0;
    end=strlen(str)-2;
    while(start<end){
        if(str[start]!=str[end]){
            printf("%s is not palindrome",str);
            return 0;
        }
        start++;
        end++;
    }
    printf("%s is palindrome",str);
    return 0;
}