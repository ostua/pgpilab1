#include <stdio.h>
#include <stdlib.h>
emiferale
//ccomentario

//Segundo comentario de prueba por alvmargar4
master
#include "calcfact.h"
//comentario de prueba en fact.c
int main(int argc, char **argv)
{
emiferale
  int num;

  int numTemp;
  
master
  if (argc!=2)
  {
	printf("uso: %s <numero>\n", argv[0]);
        exit(-1);
  }
emiferale
  num=atoi(argv[1]);
  printf ("resultado: el factorial de [%d] es [%d].\n", num, calcfact(num));

  numero=atoi(argv[1]);
  printf ("resultado: el factorial de [%d] es [%d].\n", numero, calcfact(numero));
master
}
