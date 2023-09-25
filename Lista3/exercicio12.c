//Um banco pode conceder um empréstimo imobiliário a seus clientes. De
//forma geral, é necessário que o valor do imóvel seja superior à R$ 100.000,00 e que
//o valor de entrada para o parcelamento esteja entre 20% e 75% do valor total. Os
//prazos para o financiamento variam entre 60 e 360 meses. Considere uma taxa de
//juros anual de 10% ao ano. Sua tarefa é escrever um programa em C que calcule o
//valor da primeira prestação utilizando o sistema de amortização SAC e o valor total
//pago no final do financiamento. Leia o valor do imóvel, a entrada para este imóvel, e o
//número de meses deste empréstimo.
 
#include <stdio.h>

    int main() {
    double valorI, entrada, jurosA, prestacao, jurosM, saldoDevedor;
    int numMeses;

    printf("Digite o valor do imovel em reais: ");
    scanf("%lf", &valorI);

    printf("Digite o valor da entrada em reais: ");
    scanf("%lf", &entrada);

    printf("Digite o numero de meses do emprestimo (entre 60 e 360 meses): ");
    scanf("%d", &numMeses);

   
    if (valorI <= 100000 || entrada < 0.20 * valorI || entrada > 0.75 * 
       valorI || numMeses < 60 || numMeses > 360) {
        printf("Os valores nao atendem aos criterios\n");
        return 1;
    }

   
    jurosA = 0.10;

    jurosM = jurosA / 12.0;

    saldoDevedor = valorI - entrada;

    prestacao = (saldoDevedor / numMeses) + (saldoDevedor * jurosM);

    double valorTotalPago = entrada + prestacao * numMeses;

    printf("O valor da primeira prestação e: R$ %.2lf\n", prestacao);
    printf("O valor total pago no final do financiamento e: R$ %.2lf\n", valorTotalPago);

    return 0;
}