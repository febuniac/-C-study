#include <stdio.h>

int is_neg(int x){
    int desloc;
    //return ((unsigned)desloc)>>31;
    //return (desloc>>31)&1;
    //return !!(desloc>>31);
}
int main(int argc, char **argv){
    int x = -55;
    int resp;
    resp =is_neg(x);
    printf("%d \n", resp);
}
//logico = preenche com zero
//aritmético = prenche com o valor do primeiro bit
// o compilador entende que o unsigned tem uma regra diferente, para o computador, a sequencia de bits é a mesma