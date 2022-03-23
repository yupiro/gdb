#include<stdio.h>

int arith_seq(int init, int d, int n)
{
  if ( 0 == n ){
    return init;
  }else{

    // printf("init=%d d=%d n=%d\n", init, d, n);

    return d + arith_seq(init, d, n-1);
  }
}


int main(void){

  int init,d,n;


  init = 1;
  d = 10;
  n = 1;
  //printf("init=%d d=%d n=%d arith_seq=%d\n", init, d, n, arith_seq(init, d, n));


  putchar('\n');

  n = 3;
  printf("init=%d d=%d n=%d arith_seq=%d\n", init, d, n, arith_seq(init, d, n));
  
  
  return 0;
  

}
