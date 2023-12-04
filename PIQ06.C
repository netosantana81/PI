/*Escrever programa em C para solicitar ao usuário um número e exibir a
tabuada (de multiplicação) desse número até 10.*/

//Exercício 6
#include <stdio.h>

int main() 
{
    int num,contador;
    printf ("Digite um numero:");
    scanf("%d", &num);
    for(contador= 1; contador <= 10;contador++)
    {
    printf ("%d x %d = %d\n", contador,num, contador * num);
    };
 
    return 0;
}