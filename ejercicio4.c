#include<stdio.h>


int main(){
    int mat[2][3]={{1,2},{3,4,5}};
    printf("la direccion de mat es:%p\n", mat);
    printf("la direccion de mat [0] es:%p\n", mat[0]);
    printf("la direccion de mat[0][0] es:%p\n", &mat[0][0]);


    return 0;
}
