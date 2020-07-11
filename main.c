#include <stdio.h>
#include <string.h>

int main(void) {
  int quantidade,i,j,x,cont, tamanhoA,tamanhoB;
  char a[31],b[31];
  scanf("%d",&quantidade);
  long int matriz[quantidade][2];
  
  for(i=0;i<quantidade;i++){
    scanf("%ld %ld",&matriz[i][0],&matriz[i][1]);   
  }

  for(i=0;i<quantidade;i++){
    sprintf(a,"%ld",matriz[i][0]);
    sprintf(b,"%ld",matriz[i][1]);
    tamanhoA = strlen(a);
    tamanhoB = strlen(b);

    if(tamanhoB<=tamanhoA){
      x=0;
      for(j=0;j<tamanhoA;j++){
        if(a[j]==b[x]){
          x++;
        }else{
          if(x<tamanhoB){
            x=0;
          }          
        }
      }
      if(x==tamanhoB){
        printf("encaixa\n");
      }else{
        printf("nao encaixa\n");
      }
    }else{
      printf("nao encaixa\n");
    }
  }
  return 0;
}