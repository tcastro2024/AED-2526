// aula 4 - Metodos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#pragma region EXERCICIO 1
/// <summary>
/// Soma dois numeros.
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns>Resultado da soma</returns>
float somar(float a, float b) 
{
    return a + b;
}

/// <summary>
/// Subtrai dois numeros.
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns>Resultado da subtracao</returns>
float subtrair(float a, float b) 
{
    return a - b;
}

/// <summary>
/// Multiplica dois numeros.
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns>Resultado da multiplicacao</returns>
float multiplicar(float a, float b) 
{
    return a * b;
}

/// <summary>
/// Divide dois numeros.
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns>Resultado da divisao</returns>
float dividir(float a, float b) 
{
    if (b != 0) {
        return a / b;
    }
    else {
        printf("Erro: Divisao por zero!\n");
        return 0;
    }
}

#pragma endregion

#pragma region EXERCICIO 2 
/// <summary>
/// Calcula a media ponderada das notas da UC de Fundamentos de Algoritmos e Estruturas de Dados.
/// </summary>
/// <param name="notaDesempenhoAula"></param>
/// <param name="notaTeste"></param>
/// <param name="notaProjeto"></param>
/// <returns>Retorna a média de desempenho da UC</returns>
static float calculaMediaAED(float notaDesempenhoAula, float notaTeste, float notaProjeto) {
    return (0.1 * notaDesempenhoAula) + (0.45 * notaTeste) + (0.45 * notaProjeto);
}
#pragma endregion

#pragma region EXERCICIO 3
/// <summary>
/// Encontra a maior idade entre três idades fornecidas.
/// </summary>
/// <param name="idade1"></param>
/// <param name="idade2"></param>
/// <param name="idade3"></param>
/// <returns>Retorna a maior idade entre as três fornecidas</returns>
int encontrarMaiorIdade(int idade1, int idade2, int idade3) {
    int maior = idade1;

    if (idade2 > maior) {
        maior = idade2;
    }

    if (idade3 > maior) {
        maior = idade3;
    }

    return maior;
}
#pragma endregion

#pragma region EXERCICIO 4

/// <summary>
/// Encontra o menor preço entre três preços fornecidos.
/// </summary>
/// <param name="preco1"></param>
/// <param name="preco2"></param>
/// <param name="preco3"></param>
/// <returns>Retorna o menor preço entre os três fornecidos</returns>
static float encontrarMenorPreco(float preco1, float preco2, float preco3) {
    float menor = preco1;

    if (preco2 < menor) {
        menor = preco2;
    }

    if (preco3 < menor) {
        menor = preco3;
    }

    return menor;
}

#pragma endregion



int main()
{
    // Definir o idioma para suportar caracteres com acentos e especiais
    setlocale(LC_ALL, "pt_PT");

#pragma region Métodos

    //Ex1. Calculadora que chama múltiplos métodos(exemplo: somar, subtrair, dividir e multiplicar).

  /*  float num1, num2;
    int operacao;

    printf("=== Calculadora Simples ===\n");
    printf("Digite o primeiro numero: ");
    scanf_s("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf_s("%f", &num2);

    printf("\nEscolha a operacao:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    scanf_s("%d", &operacao);

    if (operacao == 1)
    {
        printf("%.2f + %.2f = %.2f\n", num1, num2, somar(num1, num2));
    }
    else if (operacao == 2)
    {
		printf("%.2f - %.2f = %.2f\n", num1, num2, subtrair(num1, num2));
    }
    else if (operacao == 3)
    {
        printf("%.2f * %.2f = %.2f\n", num1, num2, multiplicar(num1, num2));
    }
    else if (operacao == 4)
    {
        printf("%.2f / %.2f = %.2f\n", num1, num2, dividir(num1, num2));
    }
    else
    {
        printf("Operacao invalida!\n");
        return 1;
	}*/

    //Ex2. Método que calcule a média da UC de Fundamentos de Algoritmos e Estruturas de Dados.
    //float notaDesempenhoAula, notaTeste, notaProjeto, media;

    //printf("=== Calculo da UC de Fundamentos de Algoritmos e Estruturas de Dados ===\n");

    //printf("Digite a nota de desempenho na aula: ");
    //scanf_s("%f", &notaDesempenhoAula);

    //printf("Digite a nota do teste: ");
    //scanf_s("%f", &notaTeste);

    //printf("Digite a nota do projeto: ");
    //scanf_s("%f", &notaProjeto);

    //media = calculaMediaAED(notaDesempenhoAula, notaTeste, notaProjeto);
    //printf("\nA media das notas e: %.2f\n", calculaMediaAED(notaDesempenhoAula, notaTeste, notaProjeto));
        
    // Ex3. Método que recebe 3 idades e retorna a idade mais velha.
    int idade1, idade2, idade3;

    printf("=== Encontrar Maior Idade ===\n");

    printf("Digite a primeira idade: ");
    scanf_s("%d", &idade1);

    printf("Digite a segunda idade: ");
    scanf_s("%d", &idade2);

    printf("Digite a terceira idade: ");
    scanf_s("%d", &idade3);

    int maiorIdade = encontrarMaiorIdade(idade1, idade2, idade3);

    printf("\nA maior idade e: %d anos\n", maiorIdade);

    
    // Ex4. Método que recebe 3 preços e retorna o mais baixo.
    float preco1, preco2, preco3, menorPreco;

    printf("=== Encontrar Menor Preco ===\n");

    printf("Digite o primeiro preco: ");
    scanf_s("%f", &preco1);

    printf("Digite o segundo preco:  ");
    scanf_s("%f", &preco2);

    printf("Digite o terceiro preco: ");
    scanf_s("%f", &preco3);

    menorPreco = encontrarMenorPreco(preco1, preco2, preco3);
    printf("\nO menor preco e: %.2f\n", menorPreco);

#pragma endregion



    return 0;
}


