#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    printf("Il nostro argc rappresenta il numero di parametri\n");
    printf("Numero di parametri passatti al mio main: %d\n", argc);

    for (int i = 0; i < argc; i++)
        printf("argv[%d]: '%s \n", i, argv[i]);

    return 0;

}