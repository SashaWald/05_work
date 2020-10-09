#include "euler.h"
#include <stdio.h>

int main(){
    char c = 20;
    int i = 1288;
    long l = 12;
    
    printf("hex adresses \n");
    printf("char hex adress: %p\n",  &c);
    printf("int hex adress: %p\n",  &i);
    printf("long hex adress: %p\n\n",  &l);
    
    printf("decimal adresses \n");
    printf("char hex adress: %d\n",  (int)&c);
    printf("int hex adress: %d\n",  (int)&i);
    printf("long hex adress: %d\n\n",  (int)&l);
    
    char *cp = &c;
    int *ip = &i;
    long *lp = &l;
    
    printf("pointers /n");
    printf("char pointer: %p\n",cp);
    printf("int pointer: %p\n",ip);
    printf("long pointer: %p\n\n",lp);
    
    *cp = 21;
    *ip = 1289;
    *lp = 13;
    
    printf("char: %d\n", c);
	printf("int: %d\n", i);
	printf("long: %ld\n\n", l);
    
    unsigned int ui = 120904214;
    int *uip = &ui;
    char *uip_2 = &ui;
    
    printf("unsigned pointers\n");
    printf("int pointer: %p, int pointer points to: %d\n",uip,*uip);
    printf("char pointer: %p, char pointer points to: %d\n\n",uip_2,*uip_2);
    
    printf("unsigned int\n");
    printf("decimal: %x\n",ui);
    printf("hex: %u\n\n",ui);
    
    int j = 0;
    for (j = 0; j < 4; j++){
        printf("byte %d: %hhu\n",j,*(uip_2+j));
    }
    printf("\n");
    
    for (j = 0; j < 4; j++){
        ++*(uip_2+j);
        printf("unsigned int value (dec): %u\n",ui);
        printf("unsigned int value (hex): %x\n\n",ui);
    }

    for (j = 0; j < 4; j++){
        printf("byte %d: %hhu\n",j,*(uip_2+j));
    }
    
    for (j = 0; j < 4; j++){
        *(uip_2+j) = *(uip_2+j) + 16;
        printf("unsigned int value (dec): %u\n",ui);
        printf("unsigned int value (hex): %x\n\n",ui);
    }

    for (j = 0; j < 4; j++){
        printf("byte %d: %hhu\n",j,*(uip_2+j));
    }
    return 0;
}