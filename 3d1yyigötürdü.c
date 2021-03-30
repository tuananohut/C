#include <stdio.h>
#include <cs50.h>

int main(void){
    int dogru = get_int("Doğru sayısı: ");
    int yanlis = get_int("Yanlış sayısı: ");
    
    if(yanlıs >= 3){
        int kac = yanlis/3;
        dogru = dogru - kac;
        printf("Net doğru sayın: %i\n", dogru);
    }

    else
        printf("Ya hiç yanlışın yok ya da yanlış sayın 3'ten küçük. Tebrikler!");

    return 0;
}
