#include <stdio.h>

int main() 
{
    double x = 25.465;

    int input;
    int y;
    char carattere;

    printf("ciao sono %d %d %c %s %p %.3f %.2f %f\n", 100,200, 'A', "ciao", &x, x, x, x);

    printf("Inserisci due numeri e un carattere separati da spazio:\n");

    scanf("%d %d %c", &input, &y, &carattere);
    printf("il primo numero: %d\n il secondo: %d\n il carattere: %c\n", input, y, carattere);

    return 0;
}