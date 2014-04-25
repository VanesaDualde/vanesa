#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#define TAM 30

int palindromo(char*);
int main()
{ char cad [TAM];
  int b;

  printf("\n Ingrese una Palabra:");
  gets(cad);
  strlwr(cad); //por si pongo letras en mayúsculas y minúsculas
  b=palindromo(cad);
    if (b==1)
            printf ("\n  Es Palindromo");
        else
            printf("\n NO Es palindromo");

getch();
return 0;
}
int palindromo(char*cad)
{ int i,band=1;
  char *iv;
  char *fv;

  iv=cad;
  fv=cad;
  while(*fv)
  {
      fv++;
  }
  fv--;  //me corro una que seria la posicion /0

      while(*iv!='\0'&&band==1)
       {


           if(*iv==*fv)
              band=1; //1 es verdadero
           else
                band=0;

           iv++;
           fv--;

       }

   return(band);
}
