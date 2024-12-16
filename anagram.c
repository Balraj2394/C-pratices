#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[100];
    scanf("%s",str);
    int L=strlen(str);
    int temp;
    for(int i=0;i<L;i++){
        for(int j=i+1;j<L;j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    char str1[100];
    scanf("%s",str1);
    int L1=strlen(str1);
    int temp1;
    for(int i=0;i<L1;i++){
        for(int j=i+1;j<L1;j++){
            if(str1[i]>str1[j]){
                temp1=str1[i];
                str1[i]=str1[j];
                str1[j]=temp1;
            }
        }
    }
    if(L==L1){
        if(strcmp(str,str1)){
            printf("Strings  not anagrams");
        }
        else
        printf("Strings are anagrams");
    }
}
