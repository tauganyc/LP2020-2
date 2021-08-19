/* #include <stdio.h>
int main(void){
  int a;
  char str[51];
  //comando para pegar string
  //1 vareavel, 2 numero limite,3 stdin de onde pega o valor
  fgets(str,51,stdin);
  for(int b=0;b<51 && str[b]!='\0';b++){
    if(str[b]=='o'||str[b]=='a'||str[b]=='e'||str[b]=='u'){
      str[b]='i';
    }
  }
  printf("%s\n",str);
return 0;
} */