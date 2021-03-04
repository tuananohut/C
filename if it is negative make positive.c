#include <stdio.h>

int main(void){
  
    int a;
    int b;
    int c;
    int p;
    
    printf("a=");
    scanf("%d", &a);
    
    printf("b=");
    scanf("%d", &b);
    
    printf("c=");
    scanf("%d", &c);
    
    p = a*(b+c);
    printf("p = %d\n",p);

    if (p >= 0){
      printf ("%d", p);
    }
    
    do {
      a--;        
      b = b - 2;
      p = a*(c + b);
      printf("%d\n",p);
    } while(p < 0);  
    
    return 0;
}
