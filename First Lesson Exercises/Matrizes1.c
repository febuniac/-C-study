#include <stdio.h>
void main(int argc, char*argv[]){
	int matriz [3][3];
	int i,j;

	//struct pixel matriz [640][480]; uma matriz para armazenar um quadro de imagem de resolução 640 linhas x 480 colunas. Cada posição é do tipo struct pixel
	printf("Digite uma Matriz 3x3");
	for(i=0; i< 3;i++){
		for(j=0;j<3;j++){
		scanf("%d",&matriz[i][j]);
	}	
}
for(j=0;j<3;j++){
	for(i=0;i<3;i++){
		printf("%d", matriz[i][j]);
	}
	printf("\n");
}
return 0;
}
