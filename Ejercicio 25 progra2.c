#include<stdio.h>
#include<conio.h>
#define TAM 4

void carga_vector(int*,int);
void eliminar(int*,int,int);
void mostrar (int*,int);
int buscar(int*,int,int);

int main()
{ int n,x;
  int v[TAM];
  int *pv;
  pv=v;

    carga_vector(v,TAM);
    puts("Ingrese el numero a buscar:");
    scanf("%d",&n);
   x= buscar(v,TAM,n);

    if(x!=-1)
      {
          printf("La posicion es: %d y el numero es %d",(x+1),n);
         eliminar(v,TAM,n);
      }

        else
         printf("EL numero no esta");

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
int buscar(int*pv,int lim,int n)
{
  int i,pos=-1,band=0;

  for(i=0;i<lim;i++)
       {   if(*pv==n&&band==0)
          { pos=(i);
            band++;
          }
           else
           pv++;
       }
  return(pos);
}

void eliminar(int *pv, int lim,int pe)
{ int aux;
   pv+=(pe-1);

   while(pe<lim)
   {
    *pv=*(pv+1);
     pv++;
     pe++;
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

