/*Arquivo: atividade_2.c
Autor: Keylla Tamarozi
Data: 22/03/20 12:37
Descrição: Este programa implementa o tipo Lista e suas funcionalidades de acesso e manipulacao */

#include <stdlib.h> 
#define Maximo 5

typedef struct{
	int tamanho;
	int vetor[Maximo];
}Lista;
 
//interface
Lista * criarLista(); //construtor
 
int obterTamanho(Lista * );  //acesso
void mostrarLista(Lista * ); //acesso
 
void inserir(Lista *,int); //manipulacao: inserir no fim da lista
 
 
int main(){
	printf("Criando lista...\n");
	Lista * lista;
	lista = criarLista(); 
	
	printf("Tamanho antes de inserir: %d\n", obterTamanho(lista)); 
	printf("Inserindo o valor 10 na lista...\n");
	inserir(lista, 10); //inclui o valor 10 na lista
	printf("Inserindo o valor 3 na lista...\n");
	inserir(lista, 3);
	printf("Inserindo o valor 266 na lista...\n");
	inserir(lista, 266);
	printf("Inserindo o valor 55 na lista...\n");
	inserir(lista, 55);
	printf("Inserindo o valor 333 na lista...\n");
	inserir(lista, 333);
	printf("Tamanho inserido: %d\n", obterTamanho(lista));
	printf("Lista Atual:\n");
	mostrarLista(lista);
}
 // cria lista 
Lista * criarLista(){
	Lista * lista;
	lista = malloc(sizeof(Lista)); //aloca espaco na memora no tamanho do tipo Lista
	lista -> tamanho = 0; //acessa a propriede tamanho e atribui 0
	return lista;
}

int obterTamanho(Lista * lista){
    return lista -> tamanho;
}

void mostrarLista(Lista * lista){
   int i; 
   for (i=0 ; i < obterTamanho(lista); i++){ //percorrer cada posicao da lista
       printf("%d\n", lista -> vetor[i]);
   }
}

void inserir(Lista * lista, int valor){
    if (lista -> tamanho < Maximo){ //valida o tamanho para nao acessar lixo (acesso indevido)
	int tamanho = obterTamanho(lista)
        lista -> vetor[tamanho] = valor;
        lista -> tamanho++;
    }
}
