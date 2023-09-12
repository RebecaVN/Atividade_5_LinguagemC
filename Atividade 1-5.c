//Faça um programa em Linguagem C que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: i. A idade dessa pessoa; ii. Quantos anos essa pessoa terá em 2012; 

#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual, idade, idade_2012;
    
    // solicita o ano de nascimento e o ano atual
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    
    // calcula a idade atual e a idade em 2012
    idade = ano_atual - ano_nascimento;
    idade_2012 = 2012 - ano_nascimento;
    
    // exibe os resultados
    printf("A idade atual seria %d anos.\n", idade);
    printf("Em 2012, a pessoa teria %d anos.\n", idade_2012);
    
    return 0;
}

