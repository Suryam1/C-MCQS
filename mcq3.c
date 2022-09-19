#include <stdio.h>
int main(){
    char input='A';
    char in[]="A";//character array
    do{
        if(input>=65 && input<=90){
            printf("%c",input);
        }
        else if(input>=97 && input<=122){
            // printf("\n");
            printf("%c",input);
        }
    }
    while(input<=121 && input++);
}