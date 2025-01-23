// Il cancelletto dice che questa è una direttiva del preprocessore
// il .h è un file che si chiama header
// std --> standard io --> input/outuput quindi vuol dire che fa parte della libreria standard e si occupa di input e output
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

// Tecnimcamente questa è una funzione, una funzione non è altro che un blocco di codice
int main()
{

    printf("\nHello World!");

    // Inizializzare una costante, per il nome stesso non cambia durante l'esecuzione del programma
    // ti permette di avere una miglior capacità di lettura del codice

    const int ETA_NONNA = 30;

    // Questa è una variabile, questa cambia nel tempo in base alle esigenze
    int eta = 30;
    printf("\n%d\n", eta);

    // Posso inizilizzare una variabile in diversi modi:
    //  - Inizializzando e Dichiarando il valore della variabile stessa
    //  - Inizializzando e basta

    int etaNonna;
    etaNonna = 60;

    printf("%d\n", etaNonna);

    double x = 30.20131;

    int y = (int)x; // Casting esplicito

    int z = x; // Casting implicito

    printf("Casting esplicito: %d\n", (int)x);
    printf("Casting implicito: %d\n", z);

    // Perchè utlizzo le costanti invece delle variabili?
    //  Li utilizziamo ovviamente per rendere più leggibile il codice
    // Ongi tipo di dato occupa un certo numero di spazio in memoria
    // ci permettono di fare più economia della memoria

    // Tipi di dati
    //  int // 4 byte ci permette di slavare numeri da - due miliardi a + due miliardi e qualcosa
    //  short // 2 byte -32mila fino a 32727
    //  long //8 byte miliardi di miliardi
    //  long long

    // IN base al tipo più numeri dopo la virgola a disposizone (generalmente si va con il double)
    //  float //Numeri con la virgola
    //  double //
    //  long double//

    // char //sta per carattere
    // bool // valori booleani

    // Che cosa sono gli specificatori?
    //  %d --> serve a farmi stampare un intero
    //  %c ---> server a farmi stampare un carattere
    //  %lf --> stampare un float

    int u = 30;
    float o = u;

    printf("\nciao ho %f anni", o);

    const int a = 1;
    const int b = 2;
    const int valoRandom = rand();

    printf("\nValore random: %d", valoRandom);

    int valoreRisultato = valoRandom % (b - a + 1) + a;

    printf("\nValore: %d", valoreRisultato);

    int completo = rand() % (b - a + 1) + a;

    int n = 11;
    int m = ++x; // Se metto ++ prima la x allora la mia varabile x verrà prima aumentata e poi verrà assegna a y

    int t = 10;
    int j = t++; // Se metto invece ++ dopo allora prima verrà assegnata t a j e poi a j verrà aggiunto un +1

    // Queste due funzione (E altre) serve la libreria math.h
    int elevamento = pow(5, 2); // Elevamento a potenza
    int radiceq = sqrt(25);     // Radice quadrata

    // Iniziamo gli operatori di comparazione
    bool vero = 5 < 10; // Sto facendo una comparazione è 5 minore di 10 si vero quindi averemo stampato 1
    bool falso = 5 > 10;
    bool uguale = 10 == 10;
    bool diverso = 10 != 10;

    printf("\nTrue: %d", vero);
    printf("\nFalse: %d", falso);

    // if else e operatori ternari

    int deltaT = 10;
    int deltaJ = deltaT < 5 ? 5 : 500; // Se x minore di 5 allora y è uguale a 5 allora = 100

    if (deltaT < 5)
    {
        printf("\nDelta T è minore di 5");
    }
    else
    {
        printf("\nDelta T è maggiore di 5");
    }

    printf("\n%d", deltaJ);

    // L'operatore ternario altra casistica

    bool mandaX = true;

    printf(!mandaX ? "\nCiao sono true" : "\nCiao sono false");

    // ALtra casistica

    int deltaTT = 10;
    int deltaJJ = deltaTT < 5 ? 5 : (deltaTT >= 10 && deltaTT <= 20) ? 10
                                                                     : 100;

    printf("\ndeltaJJ = %d", deltaJJ);

    printf("\n");

    //Errore d'esecuzione
    // int func(int l)
    // {
    //     if (l == 1)
    //         return 1;
    //     else
    //         return l + func(l + 1);
    // }

    // printf("\n %d", func(l + 1));

    //Scope delle variabili
    //Ambito globale
    //Variabili che esistono nel file e esistono in tutto il file
    
    //Ambito locale che esistono solo all'interno di una funzione o di una speicifco blocco di codice


    //Posso iniziarizzare un'array così
    int votiStoria[] = {8,9,10,2,4}; //Array di interi
    int k = 1;
    int l = 3;
    int p = 5;
    
    //Oppure lo posso inizializzare così
    int votiStoriaX[5];
    votiStoriaX[0] = 8;
    votiStoriaX[1] = 8;
    votiStoriaX[2] = 8;
    votiStoriaX[3] = 8;
    votiStoriaX[4] = 8;

    votiStoriaX[0] = 1000;


    printf("%d\n", votiStoriaX[0]);
    printf("%d\n", votiStoria[0]);
    
    //Adesso parliamo di lunghezza di un Array, 
    //in questo modo otteniamo la grandezza dell'array in termini di BYTE!!
    printf("%zu byte\n", sizeof(votiStoria));

    //Per ottenere quindi la lunghezza effettiva dell'array in C come anche in C++ noi dobbiamo
    //calcolare la sizeof cioè la sua grandezza in byte e andare a dividere quanto è grosso un elemento in ordine di byte
    //QUindi il calcolo per avere la lunghezza dell'array è la larghezza in memoria di tutto l'array fratto la larghezza in memoria del primo elemento di quello stesso array
    printf("%zu lunghezza dell'array\n", sizeof(votiStoria) / sizeof(votiStoria[0]));

    //Adesso possiamo fare quello che si chiama looping ossia iterare sul ciclo, cioè sull'array in questo caso
    for (int i = 0; i < sizeof(votiStoria) / sizeof(votiStoria[0]); i++) 
    {
        printf("%d\n", votiStoria[i]);
    }

    //ARRAY MULTIDIMENSIONALI
    int matrice[3][3] = { {10,20,30}, {40,50,60}, {70,80,90}};
    printf("%zu, Numero totale di elementi della matrice\n", sizeof(matrice)/ sizeof(matrice[0][0]));
    printf("%zu, Numero totale di righe\n", sizeof(matrice) / sizeof(matrice[0]));
    printf("%zu, Numero totale di colonne\n", sizeof(matrice[0]) / sizeof(matrice[0][0]));


    //Come iteriamo in un array di questo?
    for (int r = 0; r < sizeof(matrice) / sizeof(matrice[0]); r++) {
        for (int c = 0; c < sizeof(matrice[0]) / sizeof(matrice[0][0]); c++) {
            printf("%d, Contenuto matrice\n", matrice[r][c]);
        }
    }
    //In C una lettera è un carattere
    char qwerty = 'a';
    //Le stringhe non sono altro che insiemi di caratteri
    //Quindi possiamo dire che un stringa è una collezione di caratteri ossia un array di caratteri
    //La stringa non è altro che un array di caratteri quindi possiamo inizializzarli così
    char nome[] = "Luigi";
    // Alla fine abbiamo un ultimo carattere nell'array di stringhe che è il carattere nullo che non compare a schermo non viene letto ma che c'è per dire che l'array è finito

    printf("%s, Nome Completo\n", nome);
    printf("%c, Carattere in posizione 4\n", nome[3]);

    nome[3] ='w';
    printf("%c, Carattere in posizione 4 Aggiornato\n", nome[3]);
    for (int i = 0; i < strlen(nome); i++)
    {
        printf("%c, Itero i Caratteri dell'array\n", nome[i]);
    }

    char benvenuto[] = "Ciao, benvenuto";
    //strcato() è la funzione che serve per concatenare delle stringhe
    printf("%s", strcat(benvenuto, " "));
    printf("%s", strcat(benvenuto, nome));
    
    return 0;
}