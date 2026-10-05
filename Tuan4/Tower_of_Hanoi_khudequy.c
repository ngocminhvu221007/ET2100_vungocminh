#include <stdio.h>
void ToH (int n, char nguon, char dich, char trung_gian){
  char cot[3] = {nguon, trung_gian, dich};
  int vitri[n] ={0};
  int sum_of_steps =1;
  for (int i=0; i< n; i++){
  sum_of_steps = 2*sum_of_steps;
  }
  sum_of_steps-= 1; 
  int step=1;
  for ( int step; step <= sum_of_steps; step++){
  int disk=1;
  int t= step;
  while (step % 2 ==0){
  disk++;
  t=t/2;
  }
  int jump=1
  if (n % 2 ==0) {
  if (disk % 2 ==0) jump =2;
  else jump =1;
  }
  else (n % 2 !=0) {
  if (disk % 2==0) jump =1;
  else jump =2;
  }
  int tu_cot = vitri[disk];
  int den_cot = (jump + tu_cot) % 3;
  printf ("Move disk %d form %d to %d \n", disk, cot[tu_cot], cot[den_cot]);
  vitri[disk]= den_cot;
  }
  }
  int main () {
  int n;
  printf ("So dia: ");
  scanf ("%d", &n);
  ToH (n, 'A', 'C', 'B');
  }
