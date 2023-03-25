#include <stdio.h>
#include <stdlib.h>


int cuadrado(int num);
void cuadradoV(int num, int *punt);
void invertir(int a, int b,int *pa, int *pb);
void orden(int a,int b, int *pa, int *pb);

int main(){
int num=5, cuad, var,a,b,nuevo;
int *punt,*pa,*pb;
punt=&num;
pa=&a;
pb=&b;
cuad=cuadrado(num);
printf("Cuadrado del numero: %d\n",cuad);
cuadradoV(num,punt);
printf("Cuadrado del numero: %d\n",*punt);

printf("Entre una variable: ");
scanf("%d",&var);
fflush(stdin);
printf("Direccion de var: %p\n",&var);
printf("Contenido de var: %d\n",var);


printf("Nuevo var de valores: (1-si,0-no): ");
scanf("%d",&nuevo);
fflush(stdin);
while (nuevo==1&&nuevo!=0)
{
    printf("Entre un valor a: ");
scanf("%d",&a);
fflush(stdin);
printf("Entre un valor b: ");
scanf("%d",&b);
fflush(stdin);

invertir(a,b,pa,pb);
printf("Valor de a cambiado: %d\n",a);
printf("Valor de b cambiado: %d\n",b);

orden(a,b,pa,pb);
printf("Valor mas chico: %d\n",*pa);
printf("Valor mas grande: %d\n",*pb);
printf("Nuevo var de valores: (1-si,0-no): ");
scanf("%d",&nuevo);
fflush(stdin);
}



    return(0);
}

int cuadrado(int num){
  num=num*num;
  return(num);
}

void cuadradoV(int num, int *punt){
    *punt=punt[0]*punt[0];
}

void invertir(int a, int b,int *pa, int *pb){
    int aux;
    aux=a;
    pa[0]=b;
    pb[0]=aux;
}
void orden(int a,int b, int *pa, int *pb){
  int aux;
  if (a>b){
    aux=a;
    *pa=b;
    *pb=aux;
  }
}