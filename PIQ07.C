/*Criar um programa em C que converta a temperatura de Celsius para
Fahrenheit. Solicite ao usuário a temperatura em Celsius e exiba o resultado em
Fahrenheit. Pesquise e escreva, como comentário, a regra de conversão usada.
*/

//Exercício 7
#include <stdio.h>

int main() 
{
    int temperatura, fahrenheit;
   
    printf("Digite a temperatura em graus Celsius:");
    scanf("%d",&temperatura);
    fahrenheit = temperatura * 1.8 + 32 ;
    printf("A temperatura em Fahrenheit é: %d°", fahrenheit);
    
    return 0;
}