#include <stdio.h>

int main(){
  int matriz[2][3] = {
    {3, 5, 1},
    {5, 7, 9}
  }; 
  for (int i = 0; i < 2; i++){
  
    for (int j = 0; j < 3; j++){
      printf("%d ", matriz[i][j]);
    
    
    }
    
  printf("\n");

  };

  return 0;
}
