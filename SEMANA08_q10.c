/* #include <stdio.h>
int main(void){
int m1,m2,m3,a,b;
m1=999;
m2=999;
m3=999;
for(a=1; a<=10;a++){
  scanf("%i", &b);
  if(b<m1){
    m3=m2;
    m2=m1;
    m1=b;
  }
else if(b<m2){
    m3=m2;
    m2=b;
  }
  else if(b<m3){
    m3=b;
  }
}
printf("%i %i %i\n",m1,m2,m3);
return 0;} */