// aula 5 - FichaTreino.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <locale.h>

//float calcularMedia(float n1, float n2, float n3)
//{
//    return (n1 + n2 + n3) / 3.0f;
//}

static float MediaEAD(float participacao, float teste, float projeto)
{
    return (0.10 * participacao) + (0.45 * teste) + (0.45 * projeto);
}

static float Media3Notas(float nota1, float nota2, float nota3, float media)
{
    /*float media;
    media = (nota1 + nota2 + nota3) / 3;

    return media;*/

    return (nota1 + nota2 + nota3) / 3;
}


int main()
{

#pragma region Ficha de Treino
 //   //1. Faça um programa que calcule a soma de 2 preços.
 //       
 //   setlocale(LC_ALL, "");
 //   float preco1, preco2, total;

 //   printf("=== Soma de Precos ===\n");
 //   printf("Digite o primeiro preço: ");
 //   scanf_s("%f", &preco1);

 //   printf("Digite o segundo preço: ");
 //   scanf_s("%f", &preco2);

 //   total = preco1 + preco2;
 //   printf("\nTotal: %.2f\n", total);

 //   //2. Faça um programa para verificar se a pessoa tem 18 anos de idade para assistir
 //   //a um evento e caso não tenham indique quantos anos faltam(Utilize a estrutura if - else).
    //int idade;

    //printf("=== Verificacao de Idade para Evento ===\n");
    //printf("Digite sua idade: ");
    //scanf_s("%d", &idade);
    //
    //if (idade < 18) 
    //{
    //    printf("Voce tem %d anos. Faltam %d anos para assistir ao evento.\n", idade, 18 - idade);
    //} else 
    //{
    //    printf("Voce tem idade suficiente para assistir ao evento.\n");
    //}

 //   //3. Leia n valores representativos das notas e mostre a classificação de cada uma.
 //   // Exemplo: bom(nota > 14), suficiente(nota > 9.5) e baixo(nota < 9.5) (Utilize a estrutura for).
 //   int n;
 //   float nota;

 //   printf("Digite o número de notas: ");
 //   scanf_s("%d", &n);
 //   
 //   for (int i = 0; i < n; i++) {
 //       printf("Digite a nota %d: ", i + 1);
 //       scanf_s("%f", &nota);

 //       if (nota > 14)
 //       {
 //           printf("Classificacao: Bom\n");
 //       } else if (nota > 9.5) 
 //       {
 //           printf("Classificacao: Suficiente\n");
 //       } else 
 //       {
 //           printf("Classificacao: Baixo\n");
 //       }
 //   }
 //   
 //   //4. Criar um método que calcule a média de 3 notas
	//float nota1, nota2, nota3, media;

	//printf("=== Calculo da Media de 3 Notas ===\n");

	//printf("Digite a primeira nota: ");
	//scanf_s("%f", &nota1);

	//printf("Digite a segunda nota: ");
	//scanf_s("%f", &nota2);

	//printf("Digite a terceira nota: ");
	//scanf_s("%f", &nota3);

	//media = calcularMedia(nota1, nota2, nota3);
	//printf("A media das notas é: %.2f\n", media);

#pragma endregion








#pragma region Ficha de Treino FEITA NA AULA


    //1. Faça um programa que calcule a soma de 2 preços.
    //float preco1, preco2, soma;

    //printf("Preco 1: ");
    //scanf_s("%f", &preco1);

    //printf("Preco 2: ");
    //scanf_s("%f", &preco2);

    //soma = preco1 + preco2;

    //printf("Soma dos precos: %f", soma);


   /* 2. Faça um programa para verificar se a pessoa tem
        18 anos de idade para assistir
        a um evento e caso não tenham indique 
        quantos anos faltam(Utilize a estrutura if - else).*/
        
    //int idade, anosEmFalta;

    //printf("Digite a sua idade: ");
    //scanf_s("%d", &idade);

    //if (idade >= 18)
    //{
    //    printf("Tem idade para assistir ao evento.");
    //}
    //else
    //{
    //    //17 -18 = -1
    //    anosEmFalta = 18 - idade;
    //    printf("Ainda nao tem idade para assistir ao evento, faltam %d", anosEmFalta);
    //}


    //3. Leia n valores representativos das notas e mostre a classificação de cada uma.
    //Exemplo: bom(nota > 14), suficiente(nota > 9.5) e baixo(nota < 9.5) (Utilize a
    //    estrutura for).


  /*  int qtd;
    float nota;

    printf("Quantidade de notas: ");
    scanf_s("%d", &qtd);*/

    //1 <= 3
    //2 <= 3  
    //3 <= 3 verdade
    /*for (int i = 1; i <= qtd; i++)
    {
        printf("\nDigite a nota %d: ", i);
        scanf_s("%f", &nota);

        if (nota > 14)
        {
            printf("\nBOM");
        }
        else if (nota >= 9.5)
        {
            printf("\nsuficiente");
        }
        else
        {
            printf("\nbaixo");
        }
    }*/

    //4. Criar um método que calcule a média de 3 notas*/

    /*float nota1, nota2, nota3, media;

    printf("\nDigite a nota 1: ");
    scanf_s("%f", &nota1);

    printf("\nDigite a nota 2: ");
    scanf_s("%f", &nota2);

    printf("\nDigite a nota 3: ");
    scanf_s("%f", nota3);

    media = Media3Notas(nota1, nota2, nota3);
    printf("\nMedia de notas: %f", media);*/

#pragma endregion



    //2. Método que calcule a média da UC de Fundamentos de Algoritmos e Estruturas de Dados.

    //float n1, n2, n3, media;

    //printf("******* Media da UC de Fundamentos de Algoritmos e Estruturas de Dados ********");
    //printf("\nNota da participacao: ");
    //scanf_s("%f", &n1);

    //printf("\nNota da teste: ");
    //scanf_s("%f", &n2);

    //printf("\nNota da projeto: ");
    //scanf_s("%f", &n3);

    //media = MediaEAD(n1, n2, n3);

    //printf("Media de EAD: %f", media);


    // 4. Método que recebe 3 preços e retorna o mais baixo.




    return 0;
}
