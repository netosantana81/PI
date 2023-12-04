/*escrever um programa para ler o ano em que a criança toma a 1° dose e a perioridicidade(intervalo em anos)da vacina e exibir em que outros anos a criança deve tomar as proximas doses desta vacina, sabendo que são 4 (quatro) doses ao total. */

//Exercício 3
#include <stdio.h>

int main()
{
    int  ano_1;
    int  periodicidade;
    int  ano_2;
    int  ano_3;
    int  ano_4;
    printf("Ano da primeira dose:");
    scanf ("%d", &ano_1);
    printf("Periodicidade da vacina:");
    scanf("%d", &periodicidade);
    ano_2= ano_1 + periodicidade;
    ano_3= ano_2 + periodicidade;
    ano_4= ano_3 + periodicidade;
    printf("A criança deve tomar a próxima vacina em: %d,%d e %d", ano_2, ano_3 , ano_4);

    return 0;
    
    
}
