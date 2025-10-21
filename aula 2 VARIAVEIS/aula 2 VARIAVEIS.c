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

    #pragma region Exerc�cios de Algoritmos

        ////////////////////////////////////////////////// 
        // 1 - Identifique as vari�veis da equa��o do 2� grau na forma ax� +bx - c = 0:

        // Solu��o: a, b, c, x

        ////////////////////////////////////////////////// 
        // 2 - Quais os argumentos de entrada e de sa�da para se calcular as ra�zes reais da equa��o?

        // Solu��o: ENTRADA - a, b, c | SAIDA - x

        ////////////////////////////////////////////////// 
        // 3 - Fa�a um algoritmo (forma narrativa) para calcular as ra�zes reais da equa��o.
        // Utilize objetos auxiliares se julgar necess�rio.

        // 1� Passo verificar variaveis a, b, c e x

        // 2� Passo verificar se a == 0 (valida��o)

        // 3� Verificar uma nova variavel designada de delta.
        // Esta nova variavel surge daquilo que se designa por norma de "REGRAS DE NEGOCIO".

        // 3.1� Declarar nova variav�l: delta 
        // 3.2� Aplicar regra de acordo com o resultado do calculo delta = b2 - 4 * a * c :
        // 3.3� Se delta < 0 : n�o h� ra�zes reais 
        // 3.4� Se delta == 0: uma raiz real(-b / 2 * a)
        // 3.5� Se delta > 0 : duas ra�zes reais utilizando: ( -b +/- ?(b2 - 4 * a * c) ) / 2 * a
        //
        // 4� Verifica��o do resultado para: 
        //
        // a = 5, b = 6, c = 5, x = ?
        //
        // 5x� +6x - 5 = 0

        ////////////////////////////////////////////////// 
        // 4 - Fa�a um algoritmo que converta uma temperatura fornecida em graus.
        // Fahrenheit para Cent�grados. Sugest�o: utilize a f�rmula C = 5 / 9(F - 32).

        // Solu��o:
        // 1� Identificar variaveis C e F
        // 2� Atribuir valor a vari�vel F. F = 55
        // 3� Aplicar formula para obter o valor da variavel C. C = 5 / 9 * ( 55 - 32 )
        // 4� A vari�vel C = 23� 
     #pragma endregion

#pragma region Variaveis

    /////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 1. Declare vari�veis para armazenar: nome (array de char), idade (int) e altura(float). Atribua valores e mostre-os na consola.

        //1� Declarar variaveis
        char nome[] = "Vitor Marques";;
        int idade;
        float altura;
        
        //2� Atribuir valores
        idade = 25;
        altura = 1.70;
        
        //3� Mostrar valores
        printf("Nome: %s, idade: %d, altura %f \n", nome, idade, altura);
        

        /////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 2. Troque os valores de duas vari�veis inteiras a e b (sem usar uma terceira vari�vel auxiliar).
  //      int a, b;
  //      
  //      a = 5;
  //      
  //      b = 20;

        //a = a + b; // a agora � 25

        //b = a - b; // b agora � 5

        //a = a - b; // a agora � 20

        //printf("\nValor de a: %d", a);
  //      
  //      printf("\nValor de b: %d", b);   

        /////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 3. Leia nome, dia, m�s e ano de nascimento e escreva na consola.
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

        //1� Identificar/declarar variaveis
        char nome2[50], nome3[50];
        int idade2, idade3;

        //2� Pedir dados e atribuir as v�riaveis
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
        printf("1� pessoa: %s - %d anos\n", nome2, idade2);
        printf("2� pessoa: %s - %d anos\n", nome3, idade3);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 5. Fazer um programa para ler nome e sal�rio de dois funcion�rios;

        //char nomeF1[50], nomeF2[50];
        //float salario1, salario2;

        //printf("\nFuncion�rio 1: ");
        //printf("\nNome: ");
        //gets_s(nomeF1, sizeof(nomeF1));
        //printf("Sal�rio: ");
        //scanf_s("%f", &salario1);
        //while (getchar() != '\n');

        //printf("\nFuncion�rio 2: ");
        //printf("\nNome: ");
        //gets_s(nomeF2, sizeof(nomeF2));

        //printf("Sal�rio: ");
        //scanf_s("%f", &salario2);
        //printf("\nDados dos funcion�rios:\n");
        //printf("1� funcion�rio: %s - Sal�rio: %.2f\n", nomeF1, salario1);
        //printf("2� funcion�rio: %s - Sal�rio: %.2f\n", nomeF2, salario2);


        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 6. Fazer um programa para ler o c�digo de uma pe�a, a sua quantidade e o pre�o da pe�a;
        //int codigo;
        //int quantidade;
        //float preco;
        //printf("\nPe�a: ");
        //printf("\nC�digo: ");
        //scanf_s("%d", &codigo);
        //printf("Quantidade: ");
        //scanf_s("%d", &quantidade);
        //printf("Pre�o: ");
        //scanf_s("%f", &preco);
        //printf("\nDados da pe�a:\n");
        //printf("C�digo: %d - Quantidade: %d - Pre�o: %.2f\n", codigo, quantidade, preco);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 7. Qual a diferen�a entre os tipos de dados int ou uint ?
        // Tipo de dados int podem ter valores inteiros negativos (exemplo: int posicao = -3) ou positivos (exemplo: int idade = 23).
        // Tipo de dados uint apenas podem ter apenas valores poitivos (exemplo: int idade = 23).

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        // 8. Crie um exemplo de coment�rios com uma linha e outro com v�rias linhas.
        // Este � um coment�rio de uma linha

        /* Este � um coment�rio
           de m�ltiplas linhas
           que pode continuar
           por v�rias linhas */

           ///////////////////////////////////////////////////////////////////////////////////////////////////////////
           // 9. Escreva um programa que pe�a e escreva o nome, email e idade do utilizador no ecr�.

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
           // 10. Crie o exemplo de uma fatura de um supermercado no ecr�.

           //printf("=====================================\n");
           //printf("           SUPER MERCADO            \n");
           //printf("=====================================\n");
           //printf("Data: 20/10/2025    Hora: 15:30    \n");
           //printf("-------------------------------------\n");
           //printf("PRODUTO          QTD    PRE�O   TOTAL\n");
           //printf("Leite            2      1.99    3.98�\n");
           //printf("P�o             4      0.50    2.00�\n");
           //printf("Arroz           1      2.49    2.49�\n");
           //printf("-------------------------------------\n");
           //printf("Subtotal:                     8.47�\n");
           //printf("IVA (23%):                    1.95�\n");
           //printf("Total:                       10.42�\n");
           //printf("=====================================\n");
           //printf("      Obrigado pela prefer�ncia!    \n");
           //printf("=====================================\n");

#pragma endregion

#pragma region Operadores Aritm�ticos

   ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //1� Fazer um programa para ler nome e sal�rio de dois funcion�rios.Depois, mostrar a m�dia do sal�rio dos funcion�rios.
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
        //2� Fa�a um programa que calcule a �rea do triangulo ? Formula : �rea = (base x altura) / 2
        //float base, altura, area;

        //printf("\nDigite a base do triangulo: ");
        //scanf_s("%f", &base);

        //printf("Digite a altura do triangulo: ");
        //scanf_s("%f", &altura);

        //area = (base * altura) / 2;

        //printf("\nArea do triangulo: %.2f\n", area);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //3� Declare uma constante para PI(3.14159) e calcule a �rea de um c�rculo de raio 5.0.Mostre o resultado.
        //const float PI = 3.14159f;
        //float raio = 5.0f;
        //float area2;

        //area2 = PI * raio * raio;

        //printf("Area do circulo com raio %.1f: %.2f\n", raio, area2);

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //4� Crie uma calculadora que receba dois n�meros e realize as 4 opera��es b�sicas.
        //float num1, num2;

        //printf("Digite o primeiro numero: ");
        //scanf_s("%f", &num1);

        //printf("Digite o segundo numero: ");
        //scanf_s("%f", &num2);

        //printf("\nResultados:\n");
        //printf("Soma: %.2f\n", num1 + num2);
        //printf("Subtra��o: %.2f\n", num1 - num2);
        //printf("Multiplica��o: %.2f\n", num1 * num2);

        //if (num2 != 0) {
        //    printf("Divis�o: %.2f\n", num1 / num2);
        //}
        //else {
        //    printf("Divis�o por zero n�o � permitida!\n");
        //}

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //5� Crie um programa que leia 3 notas de um aluno e calcule a m�dia aritm�tica.
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
        //6� Fa�a um programa que converta temperatura de Celsius para Fahrenheit
        //float celsius, fahrenheit;

        //printf("Digite a temperatura em Celsius: ");
        //scanf_s("%f", &celsius);

        //// Formula: �F = (�C � 9/5) + 32
        //fahrenheit = (celsius * 9 / 5) + 32;

        //printf("\nConversao de temperatura:\n");
        //printf("%.1f graus Celsius = %.1f graus Fahrenheit\n", celsius, fahrenheit);




#pragma endregion 







return 0;
}
