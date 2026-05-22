#include <stdio.h>
int main() {
//    local variable defination:
        char grade ='f';
        switch(grade){
            case'A':
            printf("Excellent\n");
            break;
            case'B':
            case'C':
            printf("Well done\n");
            break;
            case'D':
            printf("You passed\n");
            break;
            case'f':
            printf("your are the defined\n");
            break;

        }
    
    return 0;
}