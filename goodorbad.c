#include <stdio.h>
#include <cs50.h>

int main(void){
    string i = get_string("What is your name?\n");
    printf("%s How are you? (bad(0)/good(1))", i);
    int bg = get_int(":\n");
    int bad = 0;
    int good = 1;
    if (bg == bad ){
        printf("Get well soon!\n");
        return 0;
    }
    if (bg == good){
        printf("So I am happy!\n");
        return 0;
    }
    else{
        printf("You have to type 0 or 1\n");
    }
    return 0;
}
