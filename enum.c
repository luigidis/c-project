#include <stdio.h>

enum Difficolta
{
    // Di base a ogni valore corrisponde un valore numerico
    // Quindi in questo caso FACILE = 0 MEDIO = 1 DIFFICILE = 2
    FACILE,
    MEDIO,
    DIFFICILE,
    NOT_EXIST
};

int main()
{
    enum Difficolta difficolta = MEDIO;

    if (difficolta == MEDIO)
    {
        printf("Il livello sembra medio\n");
    }

    switch (difficolta)
    {
    case FACILE:
        printf("LIVELLO FACILE\n");
        break;

    case MEDIO:
        printf("LIVELLO MEDIO\n");
        break;

    case DIFFICILE:
        printf("LIVELLO DIFFICILE\n");
        break;
    
    default:
        printf("Difficoltà non trovata\n");
    }

    return 0;
}