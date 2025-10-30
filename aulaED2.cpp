#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto{
	char nome[15];
	int estoque;
	struct Produto *prox;
	
}produto;

produto* criarLista(char nomeP[15], int estoqueP){
	produto *novoprod =(produto*)malloc(sizeof(produto));
	if(novoprod == NULL){
		printf ("\nErro de alocacao de memoria!");
		exit (1);
	}
	strcpy (novoprod ->nome, nomeP);
	novoprod->estoque=estoqueP;
	novoprod->prox = NULL;
	return novoprod;
}//fim do metodo criar lista

void insereInicio(produto **lista, char nomeP[15], int estoqueP){
	produto *novoprod = criarLista(nomeP, estoqueP);
	novoprod->prox =*lista;
	*lista = novoprod;
}//fim do inserir no inicio

void insereFim(produto **lista, char nomeP[15], int estoqueP){
	produto *novoprod = criarLista(nomeP, estoqueP);
	if (*lista ==NULL){
		*lista = novoprod;
	}else{
		produto *temp = *lista;
		while(temp->prox !=NULL){
			temp = temp->prox;
		}
		temp->prox = novoprod;
	}
}//fim do inserir no final

void imprimirProduto(Produto *lista){
	while (lista !=NULL){
		printf ("\nProduto: %s", lista->nome);
		printf ("\nEstoque: %d", lista->estoque);
		lista = lista->prox;
		printf ("\n---------------");
	}
}//fim do imprimir

produto* buscar(produto *lista, char nomeP[15]){
	while(lista != NULL){
		if (strcmp(lista->nome, nomeP)==0){
			return lista;
		}
		lista = lista->prox;
	}
	return NULL;
}

main(){
	int a, b, estoque;
	char nome [15];
	produto *lista = NULL;
	do{
		printf ("\n------menu------");
		printf ("\n1-Cadastrar");
		printf ("\n2-Cadastrar prioridade"); 
		printf ("\n3-LISTA");
		printf ("\nEscolha uma opcao: ");
		 scanf ("%d", &b);
		  switch (b){
		  	case 1: 
		  	 printf ("\nModulo de cadastro");
		  	 printf ("\nDigite o produto: ");
		  	  scanf ("%s", &nome);
		  	   printf ("\nDigite  estoque: ");
		  	    scanf ("%d", &estoque);
		  	 
		  	 insereFim(&lista, nome, estoque);
		  	 printf ("\nProduto cadastrado com sucesso");
		  	 break;
		  	 
		  	 
		  	case 2:
			printf ("\nModulo de cadastro em prioridade");
			 printf ("\nDigite o produto: ");
		  	  scanf ("%s", &nome); 
		  	  printf ("\nDigite o estoque: ");
		  	   scanf ("%d", &estoque);
		  	  insereInicio(&lista, nome, estoque);
		  	  printf ("\nProduto cadastrado com sucesso");
			  break; 
			  
			  
			case 3:	
			  printf ("\nLista de produtos");
			  imprimirProduto (lista);
			  break;   
			case 4: //buscar produto;
				break;
			case 5: //deletar produto;
				break;
			default:
				printf("Opção invalida");
		  }
		
		printf ("\nDigite 1 para continuar ou 0 para sair: ");
		scanf ("%d", &a);
		system ("cls");
	}while (a !=0);
	return 0;
}








