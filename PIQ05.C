/*) Escrever programa em C para solicitar ao usuário a distância que ele pretende
correr e sua velocidade média esperada. Exibir o tempo estimado de exercício
(corrida).*/
//Ecercício 5
#include <stdio.h>

int main() 
{
    float dist, velo, temp;

    printf("Qual distância você pretende correr:");
    scanf("%f", &dist);
    printf("Qual é a sua velocidade média:");
    scanf("%f", &velo);
    // calcular
    temp = dist / velo;
    
    printf("Você atingirá essa distância em: %.f", temp);
    

    return 0;
}