#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//vambora
typedef struct 
{
    char Nome [31];
    char Letra;
    int Numero_do_agente;
    int poder;
    float altura;
    int idade;
    float peso;
    //bool
}Agente;

Agente *cadastroteste = (Agente*) malloc (33*sizeof(Agente));   

strcpy(cadastroteste[0].Nome,"Sage");



void leString(char texto [], int tam)
{
    setbuf(stdin,NULL);
    fgets(texto,tam,stdin);
    texto[strcspn(texto,"\n")] = '\0';

}
void Cadastro(Agente agentes [], int tam)
{   
    for (int i = 0; i < tam; i++)
    {
    printf("Nome: ");
    leString(agentes[tam].Nome,31);

    printf("Letra: ");
    scanf("%c", &agentes[tam].Letra);

    printf("Numero do agente: ");
    scanf("%d",&agentes[tam].Numero_do_agente);

    printf("Poder do agente: ");
    scanf("%d", &agentes[tam].poder);

    printf("Altura: ");
    scanf("%.2f",&agentes[tam].altura);

    printf("Idade: ");
    scanf("%d",&agentes[tam].idade);

    printf("Peso: ");
    scanf("%.2f",&agentes[tam].peso);

    
    }
    



}

void listar(Agente agentes[], int tam)

{
    for (int i = 0; i < tam; i++)
    {
        printf("Nome: %s",agentes[tam].Nome);
        printf("Letra: %c",agentes[tam].Letra);
        printf("Numero do agente: %d",agentes[tam].Numero_do_agente);
        printf("Poder: %d",agentes[tam].poder);
        printf("Altura: %.2f",agentes[tam].altura);
        printf("Idade: %d",agentes[tam].idade);
        printf("Peso: %.2f",agentes[tam].peso);  
    }
    


}
int main (){






    return 0;
}
