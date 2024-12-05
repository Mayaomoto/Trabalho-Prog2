#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char Nome [31];
    char Letra;
    int Numero_do_agente;
    int poder;
    int altura;
    int idade;
    int peso;
    //bool
}Agente;
void leString(char texto [], int tam)
{
    setbuf(stdin,NULL);
    fgets(texto,tam,stdin);
    texto[strcspn(texto,"\n")] = '\0';

}
void Cadastro(Agente agentes [])
{   
    for (int i = 0; i < tam; i++)
    {
    printf("Nome: ");
    leString(agentes[tam].Nome,31);

    printf("Letra: ");
    scanf("%c", agentes[tam].letra);

    printf("Numero do agente: ");
    scanf("%d",agentes[tam].Numero_do_agente);

    printf("Poder do agente: ");
    scanf("%d", agentes)
        
    }
    



}

int main (){

    Agente agentes [33];




    return 0;
}
