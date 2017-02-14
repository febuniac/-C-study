#include <stdio.h>
#include <math.h>

int harshad(unsigned int num){
    int alg1;
    int sum;
    int salvaantigo = num;
    while(num>0){
        alg1=num%10;
        sum += alg1;
        num/=10;
    }
    if (salvaantigo%sum ==0){
        return 1;
    }
    else{
        return 0;
    }
}


int main(int argc, char **argv){
    int num;
    int Y;
    printf("Qual o numero a ser checado?" );
    scanf("%d",&num);
    Y= harshad(num);

    printf("%s\n", Y?"É Harshad":"Não é Harshad");
	}
