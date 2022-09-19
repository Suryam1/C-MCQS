#include <stdio.h>
int main(){
    float f=1.0f;
    switch(f){
        case 1.0f:printf("A");
        case 2.0f:printf("B");//float double and strings are not allowed in switch
    }
    printf("C");
}