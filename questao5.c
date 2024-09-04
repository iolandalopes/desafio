#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Faturamento {
    char estado[6];
    float valorFaturado;
};

float calculaPercentual(float faturamentoTotal, float faturamentoPorEstado) {
    return (faturamentoPorEstado * 100) / faturamentoTotal;
}

int main() {
    struct Faturamento saoPaulo;
    strcpy(saoPaulo.estado, "SP");
    saoPaulo.valorFaturado = 67836.43;

    struct Faturamento rioDeJaneiro;
    strcpy(rioDeJaneiro.estado, "RJ");
    rioDeJaneiro.valorFaturado = 36678.66;

    struct Faturamento minasGerais;
    strcpy(minasGerais.estado, "MG");
    minasGerais.valorFaturado = 29229.88;

    struct Faturamento espiritoSanto;
    strcpy(espiritoSanto.estado, "ES");
    espiritoSanto.valorFaturado = 27165.48;

    struct Faturamento outros;
    strcpy(outros.estado, "Outros");
    outros.valorFaturado = 19849.53;

    float faturamentoTotal = saoPaulo.valorFaturado + rioDeJaneiro.valorFaturado + minasGerais.valorFaturado + espiritoSanto.valorFaturado + outros.valorFaturado;

    printf("Percentual %s: %.2f\n", saoPaulo.estado, calculaPercentual(faturamentoTotal, saoPaulo.valorFaturado));

    printf("Percentual %s: %.2f\n", rioDeJaneiro.estado, calculaPercentual(faturamentoTotal, rioDeJaneiro.valorFaturado));

    printf("Percentual %s: %.2f\n", minasGerais.estado, calculaPercentual(faturamentoTotal, minasGerais.valorFaturado));

    printf("Percentual %s: %.2f\n", espiritoSanto.estado, calculaPercentual(faturamentoTotal, espiritoSanto.valorFaturado));

    printf("Percentual %s: %.2f\n", outros.estado, calculaPercentual(faturamentoTotal, outros.valorFaturado));

    return 0;
}
