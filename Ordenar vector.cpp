#include <stdio.h>
#include <conio.h>
#define TAM 5
void carga_vector(int*,int);
void intercambio(int*,int*);
void ordenar_vector (int*,int);
void mostrar (int*,int);
int main()
{int v[TAM];
 int *pv;
 int i;
   pv=v;
   puts("\n\nCargamos el vector");
   carga_vector(v,TAM);
   ordenar_vector(pv,TAM);
   mostrar(v,TAM);

getch();

return (0);
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

void intercambio(int *a,int*b)
{int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

void ordenar_vector(int*pa,int x)
{int ia, is; //ia=posicion actual ,is= posicion siguiente
 int *psiguiente;

 for(ia=0;ia<(x-1);ia++)
 { psiguiente=(pa+1);
        for(is=(ia+1);is<x;is++)
        {
            if(*pa<*psiguiente)  //el contedido pe pactuall es menot que el contenido de psiguiente
            {
              intercambio(pa,psiguiente);
            }
            psiguiente++;

        }
   pa++;
 }

}

void mostrar(int*vec,int lim)
{  int i;

    for(i=0;i<lim;i++)
   {
       printf("\n El Vector Ordenado de Mayor a Menor Es: %d  y su posicion es: %d",*vec,i);
       vec++;
   }

}


