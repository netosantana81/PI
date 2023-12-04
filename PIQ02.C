/*Para a manutenção da saúde é indispensável que as

pessoas mantenham o peso ideal e, assim, evitem a

obesidade. Escrever programa para ler: peso atual, peso

ideal e perda mensal; e exibir em quantos dias a pessoa

alcançará o peso ideal*/
// Exercício 2
#include <stdio.h>

int main()
{
     float peso_atual,perda_mensal,peso_ideal;
    int dias;
    printf("Qual é seu peso atual:");
    scanf("%f",&peso_atual);
    printf("Qual é a sua perda mensal:");
    scanf("%f",&perda_mensal);
    printf("Qual é o seu peso ideal:");
    scanf("%f",&peso_ideal);
    dias= (peso_atual - peso_ideal) / perda_mensal;
    printf(" seu peso ideal será alcançado em %d dias.",dias);
   

    
    return 0;
}
