#include <stdio.h>

int main()
{
    FILE *file = fopen("prova.txt", "w");

    if (file == NULL)
    {
        printf("Impossibile aprire il file. \n");
        return 1;
    };

    // LA MODALITA Write va a sovrascrivere tutto ciò che ci sta dentro il file!! quindi non è la stessa cosa di append
    fprintf(file, "Ciao sono Luigi");

    fclose(file);

    FILE *fileA = fopen("prova-append.txt", "a");

    if (fileA == NULL)
    {
        printf("Impossibile aprire il file. \n");
        return 1;
    };

    // IN QUESTO CASO CIò che scrivo verrà "appeso, accodato"
    fprintf(fileA, "\nCiao sono Luigi");

    fclose(fileA);

    FILE *fileR = fopen("prova-append.txt", "r");

    if (fileR == NULL)
    {
        printf("Impossibile aprire il file. \n");
        return 1;
    };

    // LA FUNZIONE fgets mi serve per andare a prendere il contenuto del file
    char contenuto[100];

    // RICORDA CHE fgets prende soltanto la prima riga
    fgets(contenuto, 100, fileR);
    printf("%s", contenuto);

    printf("Tutto il contenuto: \n");
    //SE VOGLIO ANDARE A PRENDERE IVECE TUTTO IL CONTENUTO DEVO ITERARE L'OPERAZIONE PER OGNI RIGA
    while (fgets(contenuto, 100, fileR))
    {
        printf("%s", contenuto);
    }

    fclose(fileR);
    return 0;
}