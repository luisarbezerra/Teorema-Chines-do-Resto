#ifndef TEOREMA_RESTO_CHINES_H_INCLUDED
#define TEOREMA_RESTO_CHINES_H_INCLUDED


typedef struct Resto {
    int divisor;
    int residuo;
}Resto;

void CaptarInformacoes(Resto *vetor, int *entradas, int *mod);

int TeoremaRestoChines(Resto *vetor, int *entradas);

int MMC(int a, int b);

int MaiorDivisorComum(int a, int b);

#endif // TEOREMA_RESTO_CHINES_H_INCLUDED
