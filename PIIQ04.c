#include <stdio.h>
int main()
{
    float valor, cambio;
    
    printf("Digite o valor em reais:");
        scanf("%f",&valor);
    printf("Digite o valor do cambio em dolar:");
        scanf("%f",&cambio);
    printf("O valor da conversão: $ %.2f", valor / cambio);
    
    return 0;
}