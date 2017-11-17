
// Función que calcula el factorial de un número num
// y  ademas...
//comentario de rafromsan

int calcfact(int num)
{
  if (num <= 1) return 1;
  else return (num*calcfact(num-1));
}
