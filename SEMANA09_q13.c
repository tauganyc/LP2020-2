/* #include <stdio.h>
int main(void){
  int a[10];
  for(int b=0; b<10; b++){
    scanf("%i",&a[b]);
  }
  while(1){
    int mexi;
    mexi=0;
    for(int b=1; b<10; b++){
      if(a[b]<a[b-1]){
        int c;
        c=a[b-1];
        a[b-1]=a[b];
        a[b]=c;
        mexi=1;
      }
    }
    if(mexi==0){
      break;
    }

  }
  for(int b=0; b<10; b++){
    printf("%i ",a[b]);
  }
  printf("\n");
  for(int b=9; b>=0; b--){
    printf("%i ",a[b]);
  }
return 0;} */