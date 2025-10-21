// aula 2 VARIAVEIS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    // Definir o idioma para suportar caracteres com acentos e especiais
    setlocale(LC_ALL, "pt_PT");

    #pragma region Exercícios de Algoritmos

        ////////////////////////////////////////////////// 
        // 1 - Identifique as variáveis da equação do 2º grau na forma ax² +bx - c = 0:

        // Solução: a, b, c, x

        ////////////////////////////////////////////////// 
        // 2 - Quais os argumentos de entrada e de saída para se calcular as raízes reais da equação?

        // Solução: ENTRADA - a, b, c | SAIDA - x

        ////////////////////////////////////////////////// 
        // 3 - Faça um algoritmo (forma narrativa) para calcular as raízes reais da equação.
        // Utilize objetos auxiliares se julgar necessário.

        // 1º Passo verificar variaveis a, b, c e x

        // 2º Passo verificar se a == 0 (validação)

        // 3º Verificar uma nova variavel designada de delta.
        // Esta nova variavel surge daquilo que se designa por norma de "REGRAS DE NEGOCIO".

        // 3.1º Declarar nova variavél: delta 
        // 3.2º Aplicar regra de acordo com o resultado do calculo delta = b2 - 4 * a * c :
        // 3.3º Se delta < 0 : não há raízes reais 
        // 3.4º Se delta == 0: uma raiz real(-b / 2 * a)
        // 3.5º Se delta > 0 : duas raízes reais utilizando: ( -b +/- ?(b2 - 4 * a * c) ) / 2 * a
        //
        // 4º Verificação do resultado para: 
        //
        // a = 5, b = 6, c = 5, x = ?
        //
        // 5x² +6x - 5 = 0

        ////////////////////////////////////////////////// 
        // 4 - Faça um algoritmo que converta uma temperatura fornecida em graus.
        // Fahrenheit para Centígrados. Sugestão: utilize a fórmula C = 5 / 9(F - 32).

        // Solução:
        // 1º Identificar variaveis C e F
        // 2º Atribuir valor a variável F. F = 55
        // 3º Aplicar formula para obter o valor da variavel C. C = 5 / 9 * ( 55 - 32 )
        // 4º A variável C = 23º 
     #pragma endregion

#pragma region Variaveis

    /////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 1. Declare variáveis para armazenar: nome (array de char), idade (int) e altura(float). Atribua valores e mostre-os na consola.

        //1º Declarar variaveis
        char nome[] = "Vitor Marques";;
        int idade;
        float altura;
        
        //2º Atribuir valores
        idade = 25;
        altura = 1.70;
        
        //3º Mostrar valores
        printf("Nome: %s, idade: %d, altura %f \n", nome, idade, altura);
        

        /////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 2. Troque os valores de duas variáveis inteiras a e b (sem usar uma terceira variável auxiliar).
  //      int a, b;
  //      
  //      a = 5;
  //      
  //      b = 20;

        //a = a + b; // a agora é 25

        //b = a - b; // b agora é 5

        //a = a - b; // a agora é 20

        //printf("\nValor de a: %d", a);
  //      
  //      printf("\nValor de b: %d", b);   

        /////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 3. Leia nome, dia, mês e ano de nascimento e escreva na consola.
       // char nome1[50];
        //int dia, mes, ano;

        //printf("\nNome: ");
        //gets_s(nome1, sizeof(nome1));

        //printf("\nDia: ");
        //scanf_s("%d", &dia);

        //printf("\Mes: ");
        //scanf_s("%d", &mes);

        //printf("\Ano: ");
        //scanf_s("%d", &ano);

        //printf("\nNome: %s, \nDia: %d, \nMes: %d, \nAno: %d ", nome1, dia, mes, ano);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 4. Fazer um programa para ler o nome e a idade de duas pessoas;

        //1º Identificar/declarar variaveis
        char nome2[50], nome3[50];
        int idade2, idade3;

        //2º Pedir dados e atribuir as váriaveis
        printf("\nPrimeira pessoa: ");
        printf("\nNome: ");
        gets_s(nome2, sizeof(nome2));

        printf("Idade: ");
        scanf_s("%d", &idade2);

        while (getchar() != '\n');

        printf("Segunda pessoa : ");
        printf("\nNome: ");
        gets_s(nome3, sizeof(nome3));

        printf("Idade: ");
        scanf_s("%d", &idade3);

        printf("\nDados das pessoas:\n");
        printf("1º pessoa: %s - %d anos\n", nome2, idade2);
        printf("2º pessoa: %s - %d anos\n", nome3, idade3);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 5. Fazer um programa para ler nome e salário de dois funcionários;

        //char nomeF1[50], nomeF2[50];
        //float salario1, salario2;

        //printf("\nFuncionário 1: ");
        //printf("\nNome: ");
        //gets_s(nomeF1, sizeof(nomeF1));
        //printf("Salário: ");
        //scanf_s("%f", &salario1);
        //while (getchar() != '\n');

        //printf("\nFuncionário 2: ");
        //printf("\nNome: ");
        //gets_s(nomeF2, sizeof(nomeF2));

        //printf("Salário: ");
        //scanf_s("%f", &salario2);
        //printf("\nDados dos funcionários:\n");
        //printf("1º funcionário: %s - Salário: %.2f\n", nomeF1, salario1);
        //printf("2º funcionário: %s - Salário: %.2f\n", nomeF2, salario2);


        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 6. Fazer um programa para ler o código de uma peça, a sua quantidade e o preço da peça;
        //int codigo;
        //int quantidade;
        //float preco;
        //printf("\nPeça: ");
        //printf("\nCódigo: ");
        //scanf_s("%d", &codigo);
        //printf("Quantidade: ");
        //scanf_s("%d", &quantidade);
        //printf("Preço: ");
        //scanf_s("%f", &preco);
        //printf("\nDados da peça:\n");
        //printf("Código: %d - Quantidade: %d - Preço: %.2f\n", codigo, quantidade, preco);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 7. Qual a diferença entre os tipos de dados int ou uint ?
        // Tipo de dados int podem ter valores inteiros negativos (exemplo: int posicao = -3) ou positivos (exemplo: int idade = 23).
        // Tipo de dados uint apenas podem ter apenas valores poitivos (exemplo: int idade = 23).

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 8. Crie um exemplo de comentários com uma linha e outro com várias linhas.
        // Este é um comentário de uma linha

        /* Este é um comentário
           de múltiplas linhas
           que pode continuar
           por várias linhas */

           ///////////////////////////////////////////////////////////////////////////////////////////////////////////
           // 9. Escreva um programa que peça e escreva o nome, email e idade do utilizador no ecrã.

           //char nome[50], email[50];
           //int idade;

           //printf("Digite seu nome: ");
           //gets_s(nome, sizeof(nome));

           //printf("Digite seu email: ");
           //gets_s(email, sizeof(email));

           //printf("Digite sua idade: ");
           //scanf_s("%d", &idade);

           //printf("\n=== Dados do Usuario ===\n");
           //printf("Nome: %s\n", nome);
           //printf("Email: %s\n", email);
           //printf("Idade: %d anos\n", idade);

           ///////////////////////////////////////////////////////////////////////////////////////////////////////////
           // 10. Crie o exemplo de uma fatura de um supermercado no ecrã.

           //printf("=====================================\n");
           //printf("           SUPER MERCADO            \n");
           //printf("=====================================\n");
           //printf("Data: 20/10/2025    Hora: 15:30    \n");
           //printf("-------------------------------------\n");
           //printf("PRODUTO          QTD    PREÇO   TOTAL\n");
           //printf("Leite            2      1.99    3.98€\n");
           //printf("Pão             4      0.50    2.00€\n");
           //printf("Arroz           1      2.49    2.49€\n");
           //printf("-------------------------------------\n");
           //printf("Subtotal:                     8.47€\n");
           //printf("IVA (23%):                    1.95€\n");
           //printf("Total:                       10.42€\n");
           //printf("=====================================\n");
           //printf("      Obrigado pela preferência!    \n");
           //printf("=====================================\n");

#pragma endregion

#pragma region Operadores Aritméticos

   ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //1º Fazer um programa para ler nome e salário de dois funcionários.Depois, mostrar a média do salário dos funcionários.
        //char nome1[50], nome2[50];
        //float salario1, salario2, media;

        //printf("Dados do primeiro funcionario:\n");
        //printf("Nome: ");
        //gets_s(nome1, sizeof(nome1));
        //printf("Salario: ");
        //scanf_s("%f", &salario1);

        //while (getchar() != '\n'); // Clear buffer

        //printf("\nDados do segundo funcionario:\n");
        //printf("Nome: ");
        //gets_s(nome2, sizeof(nome2));
        //printf("Salario: ");
        //scanf_s("%f", &salario2);

        //media = (salario1 + salario2) / 2.0f;

        //printf("\nMedia dos salarios: %.2f\n", media);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //2º Faça um programa que calcule a área do triangulo ? Formula : área = (base x altura) / 2
        //float base, altura, area;

        //printf("\nDigite a base do triangulo: ");
        //scanf_s("%f", &base);

        //printf("Digite a altura do triangulo: ");
        //scanf_s("%f", &altura);

        //area = (base * altura) / 2;

        //printf("\nArea do triangulo: %.2f\n", area);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //3º Declare uma constante para PI(3.14159) e calcule a área de um círculo de raio 5.0.Mostre o resultado.
        //const float PI = 3.14159f;
        //float raio = 5.0f;
        //float area2;

        //area2 = PI * raio * raio;

        //printf("Area do circulo com raio %.1f: %.2f\n", raio, area2);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //4º Crie uma calculadora que receba dois números e realize as 4 operações básicas.
        //float num1, num2;

        //printf("Digite o primeiro numero: ");
        //scanf_s("%f", &num1);

        //printf("Digite o segundo numero: ");
        //scanf_s("%f", &num2);

        //printf("\nResultados:\n");
        //printf("Soma: %.2f\n", num1 + num2);
        //printf("Subtração: %.2f\n", num1 - num2);
        //printf("Multiplicação: %.2f\n", num1 * num2);

        //if (num2 != 0) {
        //    printf("Divisão: %.2f\n", num1 / num2);
        //}
        //else {
        //    printf("Divisão por zero não é permitida!\n");
        //}

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //5º Crie um programa que leia 3 notas de um aluno e calcule a média aritmética.
        //float nota1, nota2, nota3, media;
        //char nome[50];

        //printf("Digite o nome do aluno: ");
        //gets_s(nome, sizeof(nome));

        //printf("Digite a primeira nota: ");
        //scanf_s("%f", &nota1);

        //printf("Digite a segunda nota: ");
        //scanf_s("%f", &nota2);

        //printf("Digite a terceira nota: ");
        //scanf_s("%f", &nota3);

        //media = (nota1 + nota2 + nota3) / 3.0f;

        //printf("\nResultado para %s:\n", nome);
        //printf("Media das notas: %.2f\n", media);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //6º Faça um programa que converta temperatura de Celsius para Fahrenheit
        //float celsius, fahrenheit;

        //printf("Digite a temperatura em Celsius: ");
        //scanf_s("%f", &celsius);

        //// Formula: °F = (°C × 9/5) + 32
        //fahrenheit = (celsius * 9 / 5) + 32;

        //printf("\nConversao de temperatura:\n");
        //printf("%.1f graus Celsius = %.1f graus Fahrenheit\n", celsius, fahrenheit);




#pragma endregion 







return 0;
}
