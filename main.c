#include <stdio.h>

int main(void)
{
    int ora1, ora2, min1, min2, sec1, sec2, secondiTotali1, secondiTotali2, diff;
    printf("inserisci il primo orario in ore: ");
    scanf("%d", &ora1);
    printf("inserisci il primo orario in minuti: ");
    scanf("%d", &min1);
    printf("inserisci il primo orario in sec: ");
    scanf("%d", &sec1);
    printf("inserisci il secondo orario in ore: ");
    scanf("%d", &ora2);
    printf("inserisci il secondo orario in minuti: ");
    scanf("%d", &min2);
    printf("inserisci il secondo orario in sec: ");
    scanf("%d", &sec2);
    secondiTotali1= ora1*3600+min1*60+sec1;
    secondiTotali2= ora2*3600+min2*60+sec2;
    if (secondiTotali1 >= secondiTotali2)
        diff= secondiTotali1-secondiTotali2;
    else diff=secondiTotali2-secondiTotali1;
    printf ("la differenza e' di %d secondi", diff);
    return 0;
}
