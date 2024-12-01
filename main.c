// Il cancelletto dice che questa è una direttiva del preprocessore
// il .h è un file che si chiama header
//std --> standard io --> input/outuput quindi vuol dire che fa parte della libreria standard e si occupa di input e output
#include <stdio.h>
#include <stdlib.h>

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

   //Perchè utlizzo le costanti invece delle variabili?
   // Li utilizziamo ovviamente per rendere più leggibile il codice
   //Ongi tipo di dato occupa un certo numero di spazio in memoria
   //ci permettono di fare più economia della memoria


   //Tipi di dati
   // int // 4 byte ci permette di slavare numeri da - due miliardi a + due miliardi e qualcosa
   // short // 2 byte -32mila fino a 32727
   // long //8 byte miliardi di miliardi
   // long long
  
   //IN base al tipo più numeri dopo la virgola a disposizone (generalmente si va con il double)
   // float //Numeri con la virgola  
   // double //
   // long double//


   // char //sta per carattere
   // bool // valori booleani


   //Che cosa sono gli specificatori?
   // %d --> serve a farmi stampare un intero
   // %c ---> server a farmi stampare un carattere
   // %f --> stampare un float


   int u = 30;
   float o = u;


   printf("\nciao ho %f anni", o);


   const int a = 1;
   const int b = 2;
   const int valoRandom = rand();


   printf("\nValore random: %d", valoRandom);


   int valoreRisultato = valoRandom % (b-a+1) + a;


   printf("\nValore: %d", valoreRisultato);


   int completo = rand() % (b-a+1) + a;


   int n = 11;
   int m = ++x; // Se metto ++ prima la x allora la mia varabile x verrà prima aumentata e poi verrà assegna a y

   int t = 10;
   int j = t++; // Se metto invece ++ dopo allora prima verrà assegnata t a j e poi a j verrà aggiunto un +1

    return 0;
}