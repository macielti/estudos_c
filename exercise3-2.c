#include <stdio.h>
#include <stdlib.h>

int main(void){
    int D, M, A;

    printf("\nEnter the date. Ex: 12 31 2003: ");
    scanf("%d %d %d", &M, &D, &A);

    if(D==1||D==21||D==31) printf("\n%dst ", D);
    if(D==2||D==22) printf("\n%dnd ",D);
    if(D==3||D==23) printf("\n%drd ",D);
    if((D>=4 && D<=20)||(D>=24&&D<=30)) printf("\n%dth ", D);

    switch(M){
        case 1:
            printf("Janeiro ");
        break;

        case 2:
            printf("Fevereiro ");
        break;

        case 3:
            printf("Março ");
        break;

        case 4:
            printf("Abril ");
        break;

        case 5:
            printf("Maio ");
        break;

        case 6:
            printf("Junho ");
        break;

        case 7:
            printf("Julho ");
        break;

        case 8:
            printf("Agosto ");
        break;

        case 9:
            printf("Setembro ");
        case 10:
            printf("Outubro ");
        break;

        case 11:
            printf("Novembro ");
        break;

        case 12:
            printf("Dezembro ");
        break;

        default:
            printf("Inalid Month!");
        break;
    }

    printf("%d\n", A);

    return 0;
}
