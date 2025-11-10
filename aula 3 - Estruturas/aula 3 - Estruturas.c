#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{

#pragma region ESTRUTURAS CONDICIONAIS

    // Definir o idioma para suportar caracteres com acentos e especiais
    setlocale(LC_ALL, "pt_PT");

    //1. Fazer um programa para ler o nome e a idade de duas pessoas, depois mostrar o nome da pessoa mais velha
    // Declaração de variáveis
 //   char nome1[50], nome2[50];
 //   int idade1, idade2;

 //   // Entrada de dados da primeira pessoa
 //   printf("Dados da primeira pessoa:\n");
 //   printf("Nome: ");
	//gets_s(nome1, sizeof(nome1));

 //   printf("Idade: ");
 //   scanf_s("%d", &idade1);

 //   while (getchar() != '\n');

 //   // Entrada de dados da segunda pessoa
 //   printf("\nDados da segunda pessoa:\n");
 //   printf("Nome: ");
	//gets_s(nome2, sizeof(nome2));

 //   printf("Idade: ");
 //   scanf_s("%d", &idade2);

 //   while (getchar() != '\n');

 //   // Verifica e mostra quem é mais velho
 //   printf("\nPessoa mais velha: ");
 //   if (idade1 > idade2) {
 //       printf("%s (com %d anos)\n", nome1, idade1);
 //   }
 //   else if (idade2 > idade1) {
 //       printf("%s (com %d anos)\n", nome2, idade2);
 //   }
 //   else {
 //       printf("Ambos têm a mesma idade: %d anos\n", idade1);
 //   }

    //2 - Escreva um algoritmo que simule uma calculadora com as operações básicas
    //(adição, subtração, multiplicação e divisão)
    /*float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro número: ");
    scanf_s("%f", &num1);

    printf("Digite o segundo número: ");
    scanf_s("%f", &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf_s(" %c", &operador);

    if (operador == '+') {
        resultado = num1 + num2;

        printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
    }
    else if (operador == '-') {
        resultado = num1 - num2;

        printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
    }
    else if (operador == '*') {
		resultado = num1 * num2;

        printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
    }
    else if (operador == '/') {
		resultado = num1 / num2;

        printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
    }
    else {
        printf("Operador inválido!\n");
    }*/

    //3. Escreva um programa para o utilizador digitar um número entre 1 e 12.
    //Utilizando o switch...case exiba por extenso o mês do ano correspondente a
    //cada número (por exemplo: caso o utilizador digite, 1 deverá exibir “Janeiro”, 2
    //deverá exibir “Fevereiro”, e assim sucessivamente).

    /*int mes;

    printf("Digite um número (1-12): ");
    scanf_s("%d", &mes);

    switch (mes) {
    case 1: 
        printf("Janeiro\n"); 
        break;
    case 2: 
        printf("Fevereiro\n"); 
        break;
    case 3: 
        printf("Março\n"); 
        break;
    case 4: 
        printf("Abril\n"); 
        break;
    case 5: 
        printf("Maio\n"); 
        break;
    case 6: 
        printf("Junho\n"); 
        break;
    case 7: 
        printf("Julho\n"); 
        break;
    case 8: 
        printf("Agosto\n"); 
        break;
    case 9: 
        printf("Setembro\n"); 
        break;
    case 10: 
        printf("Outubro\n"); 
        break;
    case 11: 
        printf("Novembro\n"); 
        break;
    case 12: 
        printf("Dezembro\n"); 
        break;
    default: 
        printf("Mês inválido!\n");
    }*/

    //4. Recebe um número e verifica se é par ou ímpar
    /*int numero;

    printf("Digite um número: ");
    scanf_s("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d é par\n", numero);
    }
    else {
        printf("%d é ímpar\n", numero);
    }*/

    //5. Recebe um número indicativo do dia da semana e mostra a sua designação.
   /* int dia;

    printf("Digite um número (1-7): ");
    scanf_s("%d", &dia);

    switch (dia) {
    case 1: 
        printf("Domingo\n"); 
        break;
    case 2: 
        printf("Segunda-feira\n"); 
        break;
    case 3: 
        printf("Terça-feira\n"); 
        break;
    case 4: 
        printf("Quarta-feira\n"); 
        break;
    case 5: 
        printf("Quinta-feira\n"); 
        break;
    case 6: 
        printf("Sexta-feira\n"); 
        break;
    case 7: 
        printf("Sábado\n"); 
        break;
    default: 
        printf("Dia inválido!\n");
    }*/
        
    //6. Encontre o maior e menor número entre três valores.
    //int n1, n2, n3, maior, menor;

    //printf("Digite o 1º números:\n");
    //scanf_s("%d", &n1);

    //printf("Digite o 2º números:\n");
    //scanf_s("%d", &n2);

    //printf("Digite o 3º números:\n");
    //scanf_s("%d", &n3);

    //// Encontra o maior
    //maior = n1;
    //if (n2 > maior)
    //{
    //    maior = n2;
    //}
    //    
    //if (n3 > maior)
    //{
    //    maior = n3;
    //}
    //   
    //// Encontra o menor
    //menor = n1;
    //if (n2 < menor)
    //{
    //    menor = n2;
    //}
    //    
    //if (n3 < menor)
    //{
    //    menor = n3;
    //}    

    //printf("Maior: %d\n", maior);
    //printf("Menor: %d\n", menor);
        
    //7. Calcule a nota final da UC de “Fundamentos de Algoritmos e Estrutura de
    //    Dados”(NF = CT * 0, 40 + CP * 0, 60) e caso seja positiva escreva aprovado e o
    //        valor da nota.
    /*float CT, CP, NF;

    printf("Digite a nota CT: ");
    scanf_s("%f", &CT);

    printf("Digite a nota CP: ");
    scanf_s("%f", &CP);

    NF = (CT * 0.40) + (CP * 0.60);

    if (NF >= 9.5) {
        printf("Aprovado com nota final: %.2f\n", NF);
    }
    else {
        printf("Reprovado com nota final: %.2f\n", NF);
    }*/

    //8. O salario de um colaborador é 1000 euros brutos.Calcule o salário liquido para
    //descontos / impostos de 10 %, 20 % e 30 % .
	//float salario_bruto, salario_liquido, percentagem;
	//printf("Digite o salário bruto: ");
	//scanf_s("%f", &salario_bruto);

 //   printf("Digite a percentagem: ");
 //   scanf_s("%f", &percentagem);
 //       
	//if (percentagem == 10) {
	//	salario_liquido = salario_bruto - (salario_bruto * 0.10); // Desconto de 10%
	//	printf("Salário líquido para 10 por cento de IMPOSTOS: %.2f euros\n", salario_liquido);
	//}
 //   else if (percentagem == 20) {
 //       salario_liquido = salario_bruto - (salario_bruto * 0.20);  // Desconto de 20%
	//	printf("Salário líquido para 20 por cento de IMPOSTOS: %.2f euros\n", salario_liquido);
 //   }
 //   else if( percentagem == 30) {
 //       salario_liquido = salario_bruto - (salario_bruto * 0.30);  // Desconto de 30%
	//	printf("Salário líquido para 30 por cento de IMPOSTOS: %.2f euros\n", salario_liquido);
 //   }
 //   else {
 //       printf("Percentagem inválida!\n");
	//}
       
    //9. Calcule o Índice de Massa Corporal.
    //float peso, altura, imc;

    //// Entrada de dados
    //printf("=== Calculadora de IMC ===\n\n");
    //printf("Digite seu peso (kg): ");
    //scanf_s("%f", &peso);

    //printf("Digite sua altura (m): ");
    //scanf_s("%f", &altura);

    //// Cálculo do IMC
    //imc = peso / (altura * altura);

    //// Mostra o resultado e a classificação
    //printf("\nSeu IMC é: %.2f\n", imc);
    //printf("Classificação: ");

    //if (imc < 18.5) {
    //    printf("Abaixo do peso\n");
    //}
    //else if (imc < 25.0) {
    //    printf("Peso normal\n");
    //}
    //else if (imc < 30.0) {
    //    printf("Sobrepeso\n");
    //}
    //else if (imc < 35.0) {
    //    printf("Obesidade Grau 1\n");
    //}
    //else if (imc < 40.0) {
    //    printf("Obesidade Grau 2\n");
    //}
    //else {
    //    printf("Obesidade Grau 3\n");
    //}

#pragma endregion

    
#pragma region ESTRUTURAS DE CONTROLO/REPETIÇÃO

//1.Mostre a tabuada de um número.
//int numero;
//
//printf("Digite um número para ver sua tabuada: ");
//scanf_s("%d", &numero);
//
//printf("\nTabuada do %d:\n", numero);
//for (int i = 1; i <= 10; i++) {
//    printf("%d x %d = %d\n", numero, i, numero * i);
//}

//2. Conte quantas vogais (a, e, i, o, u) existem em uma palavra.
//char palavra[100];
//int vogais = 0;
//
//printf("Digite uma palavra: ");
//gets_s(palavra, sizeof(palavra));
//
//for (int i = 0; palavra[i] != '\0'; i++) {
//    char c = tolower(palavra[i]);
//    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//        vogais++;
//    }
//}

//printf("A palavra '%s' tem %d vogais\n", palavra, vogais);

//3.Leia n valores representativos do pH e mostre, para cada valor, que tipo de
// solução representa : ácida(pH < 7), neutra(pH = 7) ou alcalina(pH > 7) (for).
//int n;
//float pH;
//
//printf("Quantos valores de pH deseja verificar? ");
//scanf_s("%d", &n);
//
//for (int i = 1; i <= n; i++) {
//    printf("\nDigite o valor do pH %d: ", i);
//    scanf_s("%f", &pH);
//
//    printf("Solução %d é ", i);
//    if (pH < 7.0) {
//        printf("ácida\n");
//    }
//    else if (pH == 7.0) {
//        printf("neutra\n");
//    }
//    else {
//        printf("alcalina\n");
//    }
//}

//Ex.4 Leia o número de golos marcados por uma equipa de futebol em um numero
// desconhecido de jogos e no final mostre a média de golos por jogo(while).
//int golos, totalGolos = 0, jogos = 0;
//float media;
//
//printf("Digite o número de golos por jogo (-1 para terminar):\n");
//
//while (1) {
//    printf("Golos no jogo %d: ", jogos + 1);
//    scanf_s("%d", &golos);
//
//    if (golos == -1) {
//        break;
//    }
//
//    totalGolos += golos;
//    jogos++;
//}
//
//if (jogos > 0) {
//    media = (float)totalGolos / jogos;
//    printf("\nEstatísticas:\n");
//    printf("Total de jogos: %d\n", jogos);
//    printf("Total de golos: %d\n", totalGolos);
//    printf("Média de golos por jogo: %.2f\n", media);
//}
//else {
//    printf("\nNenhum jogo registrado!\n");
//}


#pragma endregion

	return 0;   
}
