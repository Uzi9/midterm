#include<stdio.h>
int main(){
    printf("请输入一段总长度不超过50个字符的任意字母数字，空格符，制表符\n");
    char c[50];
    int i = 0;
    int j = 1;
    int k = 0;
    c[i]=getchar();
    while(c[i]!='\n'){
        i++;
        c[i]=getchar();
    }
    for(k = 0;k<i;){
        if((c[k]>='A'&&c[k]<='Z')||(c[k]>='a'&&c[k]<='z')){
            k++;
        }
        else{
            j++;
            k++;
        }
    }
    printf("The number of word is: %d\n",j);
    return 0;
}