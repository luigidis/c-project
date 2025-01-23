#include <stdio.h>
//PER POTER AVERE IL CODICE ORDINATO VADO A DIVIDERE LA DICHIARAZIONE DELLA 
//FUNZIONE DAL CONTENUTO DELLA FUNZIONE STESSA IN QUESTO MODO
// void saluta();
// void somma(int x, int y);
// int sommaReturn(int x, int y);
//Posso anche farlo in un altro file ed ESTERNALIZZARE la mia funzione con un file Header!
#include "utils-f.h"

// FUNZIONE MAIN
int main() {
    
    saluta();
    //Ciò che metto qua dentro dei parametri SONO ARGOMENTI!
    somma(45, 56);
    
    int z = sommaReturn(100, 200);
    printf("Risultato Return: %d\n", z);

    return 0;
}

//La funzione più basica che si possa fare
void saluta() {
    printf("Ciao sono Luigi!\n");
}

//Ciò che è preso dalla funzione sono i PARAMETRI
void somma(int x, int y) {
    int result = x + y + 100;

    printf("Risultato: %d\n", result);
}

//Somma CHE RITORNA UN INT
int sommaReturn(int x, int y) {
    int result = x + y + 100;

    return result;
}



