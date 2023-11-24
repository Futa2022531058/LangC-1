#include<stdio.h>
int main(){
    int i,a;
    for(i=1;i<=25;i++){
        if(i%3==0){
            printf("%d\n",i);
        }
    }
    a=26;
    while(a<50){
        if(a%3==0){
            printf("%d\n",a);
        }
        a++;
    }
    return 0;
}