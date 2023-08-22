#include <stdio.h>

int main() {
    float custo_mercadoria, valor_frete, despesas_eventuais, valor_venda;

    
    printf("Digite o custo da mercadoria: R$ ");
    scanf("%f", &custo_mercadoria);

    
    printf("Digite o valor do frete: R$ ");
    scanf("%f", &valor_frete);

    printf("Digite o valor das despesas eventuais: R$ ");
    scanf("%f", &despesas_eventuais);

    
    float custo_total = custo_mercadoria + valor_frete + despesas_eventuais;

  
    printf("Digite o valor de venda: R$ ");
    scanf("%f", &valor_venda);

   
    float lucro = valor_venda - custo_total;
    float percentual_lucro = (lucro / custo_total) * 100;

    
    printf("\nResumo:\n");
    printf("Custo total: R$ %.2f\n", custo_total);
    printf("Lucro: R$ %.2f\n", lucro);
    printf("Percentual de lucro: %.2f%%\n", percentual_lucro);

    return 0;
}