 #include <stdio.h>
int main(void){
int a,b,c;
  scanf("%i %i %i",&a,&b,&c);
  if(a+b<c)
  printf("Candidato C\n");
  else if(a+c<b)
  printf("Candidato B\n");
  else if(c+b<a)
  printf("Candidato A\n");
  else
  printf("SEGUNDO TURNO\n");
return 0;
}