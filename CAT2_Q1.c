//Arrays in 2D
#include<stdio.h>
int main () {
int k, j;
int scores[4][2] = {{65, 92},{84, 72},{35, 70},{59, 67}};
    
     for(k=0;k<4;k++){
      for (j=0;j<2;j++){
     printf("scores[%d][%d]=%d \n", k,j,scores [k][j]) ;
     }
     }
     return 0;
     }
