#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
    char str[100];
    int vowels=0,whitespaces=0,tabs=0,newlines=0,specialcharacters=0,i=0;
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowels++;
        }
        else if(isspace(str[i])){
            if(str[i]==' '){
                whitespaces++;
            }
            else if(str[i]=='\t'){
                tabs++;
            }
            else if(str[i]=='\n'){
                newlines++;
            }
        }
        else if(!isalnum(str[i])){
            specialcharacters++;
        }
    }
printf("Vowels:%d\n",vowels);
printf("Special Characters:%d\n",specialcharacters);
printf("Whitespaces:%d\n",whitespaces);
printf("Tabs:%d\n",tabs);
printf("Newlines:%d\n",newlines);


}
