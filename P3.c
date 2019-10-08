/* P3.c */
/* João Barboza Rodrigues */
/* 11811ECP005 */


#include <stdio.h>

int pot(int base,int exp){
  int res=1;
  for(;exp>0;exp--){
    res=res*base;
  }
  return res;
}

int main(){
  int res=0,i,ind,j;
  char num[256];
  printf("Digite a string : \n");
  scanf("%s%*c",num);
  for(i=0;num[i]!='\0';i++);
  ind=i;
  j=i;
  while(j<=0){
      if(num[j]>=48 && num[j]<=57){
        res=res+((num[j]-48)*(pot(10,(ind-j))));
    }
	j--;
    else{ ind--;}

  }
  printf("\nString convertida %i",res);
  getchar();
 
