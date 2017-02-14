#include <stdio.h>
#define MAXELEM 1000

int main(int argc, char * argv[]){
	int num_elem;
	int vec[MAXELEM];
	int i =0;
	//ler numero de elementos
printf("Quantos elementos?");
scanf("%d",&num_elem);

if(num_elem<0||num_elem>MAXELEM){
	printf("Digite um numero menor que %d e maior que zero. \n",MAXELEM);	
	return -1;
}
//Ler os elementos
for(i=0; i< num_elem;i++){
	scanf("%d",&vec[i]);
}

//Imprimir os elementos
for(i=num_elem -1;i>=0;i--){
	printf("%d",vec[i]);

}
return 0;

}


