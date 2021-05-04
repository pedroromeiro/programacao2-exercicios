#include <iostream>

using namespace std;

int main() {

    //resposta letra a
    long value1 = 200000, value2, *longPtr;

    //resposta letra b
    longPtr = &value1;

    //c)
    printf("longPtr object value = %li \n", *longPtr);

    //d)
    value2 = *longPtr;

    //e)
    printf("Value2 = %li \n", value2);

    //f)
    printf("Value1 Address = %p \n", &value1);

    // G) sim são iguais, pois nao modifiquei o endereço armazenado no
    //ponteiro depois de associar o mesmo a value1
    printf("lonfPtr Address Value = %p \n", longPtr);



}