#include <stdio.h>

// Una variaible possiamo utilizzarla per accedere direttamente al valore o per avere l'indirizzo a cui punta x!

int main()
{

    // Noi sappiamo che la nostra variaibile in realtà è un indirizzo di un qualcosa di
    //  un pò più complesso da leggere che riguarda la celletta di memoria in cui è salvato il 56
    int x = 56;
    // QUESTA é una variabile puntatore, contiene l'idirzzo a cui punta la variabile x!
    // Il tipo della variaibile puntatore deve essere uguale al tipo della variaibile a cui punta
    // L'asterisco serve a indicare a C che è un puntatore
    // ptr sta per pointer
    // Quindi è consuetudine utilizzare ptr o puntatore + nome della variaibile per capire
    // immediatamente la variabile alla quale stiamo puntando
    int *ptrX = &x;

    printf("%d\n", x);
    // QUI VERRA STAMPATO L'INDIRIZZO DI MEMORIA DI 56!
    printf("%p\n", &x);
    // QUANDO RICHIAMIAMO LA VARIAIBILE PUNTATORE NON ABBIAMO BISOGNO DI UTILIZZARE L'ASTERISCO
    printf("%p\n", ptrX);

    //Una cosa che possiamo fare con i puntatori, è quella del "deferencing", cioè anzichè mandare a schermo l'indirizzo, voglio andare a pescare il valore che c'è all'indirizzo
    //lo faccio così, cioè in questo modo faccio deferencing, voglio che mandi a schermo il valore che c'è in quell'indirizzo
    printf("%d\n", *ptrX);
    
    return 0;
}