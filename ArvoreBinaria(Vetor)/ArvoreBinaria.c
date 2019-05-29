#include <stdio.h>
#include <stdlib.h>

void printArvore(int vet[]){
	int i;
	printf("\n");
	for(i=0;i<15;i++){
		printf("%d ",vet[i]);
	}
}

void busca(int vet[], int x){
	if(x == 1){
		printf("\nNo raiz sem pai");
		int i = (2 * x) ;
		if(i > 15){
			printf("\nNao tem filho a esquerda");
		}
		else{
			printf("\nNo Filho Esquerda: %d", vet[i]);
		}
		int j =(2 * x) + 1 ;
		if(j > 15){
			printf("\nNao tem filho a direita");
		}
		else{
			printf("\nNo Filho Direita: %d", vet[j]);
		}
	}
	else {
		printf("\nNo Desejado: %d",vet[x]);

		int y = x / 2;

		printf("\nNo Pai: %d", vet[y]);

		int i = (2 * x) ;
		if(i > 15){
			printf("\nNao tem filho a esquerda");
		}
		else{
			printf("\nNo Filho Esquerda: %d", vet[i]);
		}
		int j =(2 * x) + 1 ;
		if(j > 15){
			printf("\nNao tem filho a direita");
		}
		else{
			printf("\nNo Filho Direita: %d", vet[j]);
		}
	}
}

int main(){
	int vet[16] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int x;
	printf("Digite o no que deseja procurar\n");
	scanf("%d", &x);
	busca(vet,x);
	printArvore(vet);

}