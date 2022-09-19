#include <stdio.h>
int main(){
    int i=0;
    while(i<=50){
        if(++i%10==0)
        continue;
        else
        break;
        i+=10;
        printf("%d ",i%10);
    }
}