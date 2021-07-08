/* #include <stdio.h>
int main(void){
int dia,mes,ano,placa;
  scanf("%i %i %i %i",&dia,&mes,&ano,&placa);
  if(ano>2021)
  printf("ATRAZADO\n");
  else if(placa == 1 || placa == 2 || placa == 3){
    if(ano<=2021 && mes<=4 && dia<=30)
    printf("NO PRAZO\n");
    else
    printf("ATRAZADO\n");
  }
  else if(placa == 4 || placa == 5 || placa == 6){
    if(ano<=2021 && mes<=5 && dia<=31)
    printf("NO PRAZO\n");
    else
    printf("ATRAZADO\n");
  }
  else if(placa == 7 || placa == 8){
    if(ano<=2021 && mes<=7 && dia<=30)
    printf("NO PRAZO\n");
    else
    printf("ATRAZADO\n");
  }
else if(placa == 9 || placa == 0){
    if(ano<=2021 && mes<=8 && dia<=31)
    printf("NO PRAZO\n");
    else
    printf("ATRAZADO\n");
  }

return 0;} */