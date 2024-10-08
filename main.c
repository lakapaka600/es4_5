#include <stdio.h>

int main(void) {
    int numProdotto;
    int i;
    float  PrezzoProdotto;

    printf("Inserisci il numero di prodotto: ");
    scanf("%d", &numProdotto);
    i=numProdotto;
    while (i > 0) {
        printf("Inserisci il prezzo del prodotto: ");
        scanf("%f", &PrezzoProdotto);
        i--;

    }
    float PrezzoProdottoTotale = PrezzoProdotto + numProdotto;
    printf("il prezzo totale e : %f ", PrezzoProdottoTotale);
    return 0;
}
