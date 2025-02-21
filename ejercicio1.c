#include<stdio.h>


int main(){
    int a[]={1,2,3,4,5};
    char b[]={1,2,3,4,5};
    for(int i=0; i<5; i++){
       printf("la direccion del arreglo %d de enteros es: %p \n", a[i],&a[i]);
    };
    printf("\n");
    for(int i=0; i<5; i++){
       printf("la direccion del arreglo de caracteres %d es: %p \n", b[i],&b[i]);
    };




    return 0;
}
