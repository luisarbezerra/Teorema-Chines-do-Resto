#include <stdio.h>
#include <stdlib.h>
#include "teorema_resto_chines.h"

int main(void){

    int entradas, *mod = 1;
    Resto *vetor = NULL;

    printf ("----- Teorema Chines do Resto -----\nX = RESTO (MOD P)\n\n");

    printf ("Digite o numero de entradas que teremos: ");
    scanf ("%d", &entradas);

    if (entradas<=0){
        return 0;
    }

    vetor = (Resto*)malloc (entradas*sizeof(Resto));

    CaptarInformacoes(vetor, &entradas, &mod);

    printf ("\nResposta: %i + %dx\n\n", TeoremaRestoChines(vetor, &entradas), mod);

    free(vetor);
}
