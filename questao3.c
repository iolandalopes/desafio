#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Faturamento {
    int dia;
    float valorFaturado;
};

float calculaPercentual(float faturamentoTotal, float faturamentoPorEstado) {
    return (faturamentoPorEstado * 100) / faturamentoTotal;
}

float menorValorFaturado(struct Faturamento* faturamentoMensal) {
    float menorValor = faturamentoMensal[0].valorFaturado;
    int i = 0;

    for (i = 0; i < 30; i++) {
        if (faturamentoMensal[i].valorFaturado < menorValor && faturamentoMensal[i].valorFaturado !=0) {
            menorValor = faturamentoMensal[i].valorFaturado;
        }
    }

    return menorValor;
}

float maiorValorFaturado(struct Faturamento* faturamentoMensal) {
    float maiorValor = faturamentoMensal[0].valorFaturado;
    int i = 0;

    for (i = 0; i < 30; i++) {
        if (faturamentoMensal[i].valorFaturado > maiorValor) {
            maiorValor = faturamentoMensal[i].valorFaturado;
        }
    }

    return maiorValor;
}

float mediaDeFaturamento(struct Faturamento* faturamentoMensal) {
    float total = 0.0;
    int quatidadeDeDiasComFaturamento = 0;
    int i = 0;

    for (i = 0; i < 30; i++) {
        total += faturamentoMensal[i].valorFaturado;

        if (faturamentoMensal[i].valorFaturado != 0) {
            quatidadeDeDiasComFaturamento++;
        }
    }

    return total / quatidadeDeDiasComFaturamento;
}

int diasAcimaDaMedia(struct Faturamento* faturamentoMensal) {
    float media = mediaDeFaturamento(faturamentoMensal);
    int diasAcimaDaMedia = 0;
    int i = 0;

    for (i = 0; i < 30; i++) {
        if (faturamentoMensal[i].valorFaturado > media) {
            diasAcimaDaMedia++;
        }
    }

    return diasAcimaDaMedia;
}

int main() {
    struct Faturamento faturamentoMensal[30];

    faturamentoMensal[0].dia = 1;
    faturamentoMensal[0].valorFaturado = 22174.1664;

    faturamentoMensal[1].dia = 2;
    faturamentoMensal[1].valorFaturado = 24537.6698;

    faturamentoMensal[2].dia = 3;
    faturamentoMensal[2].valorFaturado = 26139.6134;

    faturamentoMensal[3].dia = 4;
    faturamentoMensal[3].valorFaturado = 0.0;

    faturamentoMensal[4].dia = 5;
    faturamentoMensal[4].valorFaturado = 0.0;

    faturamentoMensal[5].dia = 6;
    faturamentoMensal[5].valorFaturado = 26742.6612;

    faturamentoMensal[6].dia = 7;
    faturamentoMensal[6].valorFaturado = 0.0;

    faturamentoMensal[7].dia = 8;
    faturamentoMensal[7].valorFaturado = 42889.2258;

    faturamentoMensal[8].dia = 9;
    faturamentoMensal[8].valorFaturado = 46251.174;

    faturamentoMensal[9].dia = 10;
    faturamentoMensal[9].valorFaturado = 11191.4722;

    faturamentoMensal[10].dia = 11;
    faturamentoMensal[10].valorFaturado = 0.0;

    faturamentoMensal[11].dia = 12;
    faturamentoMensal[11].valorFaturado = 0.0;

    faturamentoMensal[12].dia = 13;
    faturamentoMensal[12].valorFaturado = 3847.4823;

    faturamentoMensal[13].dia = 14;
    faturamentoMensal[13].valorFaturado = 373.7838;

    faturamentoMensal[14].dia = 15;
    faturamentoMensal[14].valorFaturado = 2659.7563;

    faturamentoMensal[15].dia = 16;
    faturamentoMensal[15].valorFaturado = 48924.2448;

    faturamentoMensal[16].dia = 17;
    faturamentoMensal[16].valorFaturado = 18419.2614;

    faturamentoMensal[17].dia = 18;
    faturamentoMensal[17].valorFaturado = 0.0;

    faturamentoMensal[18].dia = 19;
    faturamentoMensal[18].valorFaturado = 0.0;

    faturamentoMensal[19].dia = 20;
    faturamentoMensal[19].valorFaturado = 35240.1826;

    faturamentoMensal[20].dia = 21;
    faturamentoMensal[20].valorFaturado = 43829.1667;

    faturamentoMensal[21].dia = 22;
    faturamentoMensal[21].valorFaturado = 18235.6852;

    faturamentoMensal[22].dia = 23;
    faturamentoMensal[22].valorFaturado = 4355.0662;

    faturamentoMensal[23].dia = 24;
    faturamentoMensal[23].valorFaturado = 13327.1025;

    faturamentoMensal[24].dia = 25;
    faturamentoMensal[24].valorFaturado = 0.0;

    faturamentoMensal[25].dia = 26;
    faturamentoMensal[25].valorFaturado = 0.0;

    faturamentoMensal[26].dia = 27;
    faturamentoMensal[26].valorFaturado = 25681.8318;

    faturamentoMensal[27].dia = 28;
    faturamentoMensal[27].valorFaturado = 1718.1221;

    faturamentoMensal[28].dia = 29;
    faturamentoMensal[28].valorFaturado = 13220.495;

    faturamentoMensal[29].dia = 30;
    faturamentoMensal[29].valorFaturado = 8414.61;

    printf("Menor faturamento: %f\n", menorValorFaturado(faturamentoMensal));
    printf("Menor faturamento: %f\n", maiorValorFaturado(faturamentoMensal));
    printf("Media: %f\n", mediaDeFaturamento(faturamentoMensal));
    printf("Dias acima da média faturamento: %d\n", diasAcimaDaMedia(faturamentoMensal));

    return 0;
}
