//Comentario realizado para hacer algun cambio 01

int calcfact(int num)
{
  if (num <= 1) return 1;
  else return (num*calcfact(num-1));
}
