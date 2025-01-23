#include <stdio.h>

// Una variaible possiamo utilizzarla per accedere direttamente al valore o per avere l'indirizzo a cui punta x!

int main()
{

    // Noi sappiamo che la nostra variaibile in realtà è un indirizzo di un qualcosa di
    //  un pò più complesso da leggere che riguarda la celletta di memoria in cui è salvato il 56
    int x[4] = {20, 40, 80, 100};


    // QUI VERRA STAMPATO L'INDIRIZZO DI MEMORIA!
    printf("%p\n", &x);
    //QUI MANDO A SCHERMO L'INDIRIZZO DEL PRIMO VALORE DELL'ARRAY
    printf("%p\n", &x[0]);
    //QUESTO DIMOSTRA CHE IL "NOME DELL'ARRAY" ossia X non è altro che un puntatore al primo elemento
    //proviamo a stampare gli altri
    printf("%p\n", &x[1]);
    printf("%p\n", &x[2]);
    printf("%p\n", &x[3]);

    //Se ora andiamo a fare il deferencing
    printf("%d\n", *x);


    return 0;
}