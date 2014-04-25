#include<stdio.h>
#include<conio.h>
#define TAM 3

void carga_vector(int*,int);
void eliminar(int*,int);
void mostrar (int*,int);

int main()
{
  int v[TAM];
  int *pv;
  pv=v;

    carga_vector(v,TAM);
    eliminar(v,TAM);
    mostrar(v,TAM);

getch();
return(0);
}

void carga_vector(int*a,int x)
{int i;
for(i=0;i<x;i++)
      {
      printf("\n Ingrese un numero entero: ");
      scanf("%d",& (*a));
      a++;
      }

}

void eliminar(int *pv, int lim)
{ int pos,aux;

  do{
        printf("\n INGRESE LA POSICION A ELIMINAR:");
        scanf("%d",&pos);
    }while(pos>lim);
   pv+=(pos-1);

   while(pos<lim)
   {
    *pv=*(pv+1);
     pv++;
     pos++;
   }
  *pv=0;
}
void mostrar(int*vec,int lim)
{  int i;
    for(i=0;i<lim;i++)
   {
       printf("\n El Vector es: %d",*vec);
       vec++;
   }
}
