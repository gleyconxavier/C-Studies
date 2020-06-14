#include <stdio.h>
#include <locale.h>
/*
    Simple program with conditionals,
    also set locale to portuguese
*/
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int portfolio;
    int prova;
    int engajamento;
    int totalPts;
    int sair;
    printf("Qual pontuação conseguiu no portfólio este semestre ?");
    scanf("%d",&portfolio);
    printf("Qual o engajamento do seu AVA?");
    scanf("%d",&engajamento);
    printf("Qual pontuação recebeu na prova desta grade?");
    scanf("%d",&prova);
    totalPts=portfolio+prova+engajamento;
    if(totalPts>=6000) {
        printf("\n O total da sua pontuação é %d, acima do requerido, parabéns!!!", totalPts);
        printf("\n|￣￣￣￣￣￣￣ |");
        printf("\n|   Parabéns    |");
        printf("\n|＿＿＿＿＿ _＿_|");
        printf("\n(\\__/) || ");
        printf("\n(•ㅅ•) || ");
        printf("\n/ 　 づ  \n");
        printf("\n");
        scanf("%d",&sair);
    } else {
        printf("\n O total da sua pontuação é %d, abaixo do requerido, infelizmente não deu :/", totalPts);
        printf("\n");
        scanf("%d",&sair);
    }
    return(0);
}