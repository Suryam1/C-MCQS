#include <stdio.h>
int main(){
    int i,j;
    for (i=1;i<=3;i++){
        j=1;
        while (i%j==2)
        j++;
        printf("%d %d ",i,j);
    }
}