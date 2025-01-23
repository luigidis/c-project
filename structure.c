#include <stdio.h>
#include <string.h>

struct Persona
{
    char nome[10];
    char cognome[10];
    int eta;

    // NON SI POSSONO AVERE FUNZIONI ALL'interno delle STRUTTURE
};

void presentatiPersona(struct Persona persona)
{
    printf("%d Età della persona\n", persona.eta);
    printf("%s Nome della persona\n", persona.nome);
    printf("%s Cognome della persona\n", persona.cognome);
    printf("Mi sono Presentato!\n");
};

int main()
{

    // Persona persona1 = nome cognome ed età
    // Per creare il nostro tipo di dato personalizzato uso le strutture
    struct Persona persona1;
    // Vado a modificare il valore di eta in persona 1
    persona1.eta = 25;
    // Per quando riguarda i char[] non possiamo direttamente ad assegnare il valore della stringa che vogliamo quando
    // Accediamo al suo valore da una struttura
    // persona1.nome = "Luigi";
    // Piuttosto dobbiamo utilizzare una funzione

    strcpy(persona1.nome, "Luigi");
    strcpy(persona1.cognome, "Distefano");

    printf("%d Età della persona\n", persona1.eta);
    printf("%s Nome della persona\n", persona1.nome);
    printf("%s Cognome della persona\n", persona1.cognome);

    presentatiPersona(persona1);

    return 0;
}