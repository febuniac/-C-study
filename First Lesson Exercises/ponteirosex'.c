//p eh aond esta sendo guardado
//*p eh o que esta sendo guardado

//*=variavel apontada por
//&=endereco de



int y;
int*x;
x=&y;

int**p;
p=&x;

**p=10;


//Temos um papel x que esta escrito o endereco y 

//chegamos em p e tem um papel com o endereco de de x

//p tem um papel com o endereco de x (p=&x)quando chego no endereco de x tem um papel apontando para o endereco de y(x = &y) em y acho o valor 10(**p)
// a variavel apontada pela variavel apontada por p tem o valor 10