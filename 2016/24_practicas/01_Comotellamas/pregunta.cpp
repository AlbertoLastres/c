#include "pregunta.h"
#include "stdlib.h"
int pregunta(char name) {

    printf("Como te llamas: ");
    scanf("%c", &name);
    return name;
}
