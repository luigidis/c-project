// Il cancelletto dice che questa è una direttiva del preprocessore
// il .h è un file che si chiama header
//std --> standard io --> input/outuput quindi vuol dire che fa parte della libreria standard e si occupa di input e output
#include <stdio.h>

//Tecnimcamente questa è una funzione, una funzione non è altro che un blocco di codice
int main() {
    
    printf("\nHello World!");

    //Inizializzare una costante, per il nome stesso non cambia durante l'esecuzione del programma
    //ti permette di avere una miglior capacità di lettura del codice

    const int ETA_NONNA = 30;
    
    //Questa è una variabile, questa cambia nel tempo in base alle esigenze
    int eta = 30;
    printf("\n%d\n", eta);

    //Posso inizilizzare una variabile in diversi modi: 
        // - Inizializzando e Dichiarando il valore della variabile stessa
        // - Inizializzando e basta

    int etaNonna;
    etaNonna = 60;
    
    printf("%d\n", etaNonna);

    double x = 30.20131;
    
    int y = (int)x; //Casting esplicito

    int z = x; //Casting implicito

    printf("Casting esplicito: %d\n", (int)x);
    printf("Casting implicito: %d\n", z);
    return 0;
}