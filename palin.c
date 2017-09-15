#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int j=strlen(str)-1,i,flag=0,ch;
    for(i=0;i<=j;i++){
        if(str[i]!=str[j]){
            if(str[i]==str[j-1]){
                ch=str[j];
                flag++;
            }
            else if(str[j]==str[i+1]){
                ch=str[i];
                flag++;
            }
            else{
                if(i+1==j-1){
                    flag++;
                }
                ch=str[j];
                flag++;
            }
        }
        j--;
    }
    if(flag==1){
        printf("%c\n",ch);
    }
    else if(flag>1){
        printf("cannot be converted\n");
    }
    else{
        printf("Already a palindrome\n");
    }
    return 0;
}