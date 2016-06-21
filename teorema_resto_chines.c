#include "teorema_resto_chines.h"

void CaptarInformacoes(Resto *vetor, int *entradas, int *mod){
    int i;

    for (i = 0; i < *entradas; i++){
        printf ("\nDigite o mod: ");
        scanf ("%d", &vetor[i].divisor);
        printf ("Digite o resto: ");
        scanf ("%d", &vetor[i].residuo);
        *mod = *mod*vetor[i].divisor;
    }
}

int TeoremaRestoChines(Resto *vetor, int *entradas){
    int i, adicionar = vetor->divisor, resultado = vetor->residuo;
    int MMC (int a, int b);

    for (i = 1; i<*entradas ; adicionar = MMC(adicionar, vetor[i++].divisor)){
        for (  ; resultado%vetor[i].divisor != vetor[i].residuo ; resultado = resultado + adicionar);
    }

    return resultado;
}

int MMC(int a, int b){
    int MaiorDivisorComum (int a,int b);
    return a*b/MaiorDivisorComum(a,b);
}

int MaiorDivisorComum(int a, int b){
    int temp;

    while (b!=0){
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}
