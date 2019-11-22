#include<stdio.h>
int main(){
unsigned long int c = 1;
int count = 0;
while(c!=0){
    c=c<<1;
    count++;
}
printf("unsigned long int is sizeof %d bit. The max is %lu,the min is %lu",count,c-1,c);   
}