/* #include <stdio.h>
int main(void)
{
  int r,n100,n50,n20,n10,n5,n2,total;
  scanf("%i",&r);
  total = r;
  n100 = r/100;
  r = r - (n100*100);
  n50 = r/50;
  r = r-(n50*50);
  n20 = r/20;
  r = r-(n20*20);
  n10 = r/10;
  r = r-(n10*10);
  n5 = r/5;
  r = r-(n5*5);
  n2 = r/2;
  r = r-(n2*2);
  if(n100>0){
  printf("%i notas de R$ 100\n",n100);}
  if(n50>0){
  printf("%i notas de R$ 50\n",n50);}
  if(n20>0){
  printf("%i notas de R$ 20\n",n20);}
  if(n10>0){
  printf("%i notas de R$ 10\n",n10);}
  if(n5>0){
  printf("%i notas de R$ 5\n",n5);}
  if(n2>0){
  printf("%i notas de R$ 2\n",n2);}
  if(r>0){
  printf("%i notas de R$ 1\n",r);}
return 0;
} */