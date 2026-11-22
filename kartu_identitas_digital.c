#include <stdio.h>

int main() {
  char inisial;
  int umur;
  float tinggi;
  printf("Masukkan inisial: ");
  scanf("%c", &inisial);
  printf("Masukkan umur: ");
  scanf("%d", &umur);
  printf("Masukkan tinggi badan: ");
  scanf("%f", &tinggi);
  printf("\n");
  printf("\t=========================\n");
  printf("\t KARTU IDENTITAS DIGITAL \n");
  printf("\t=========================\n");
  printf("\tInisial: %c\n", inisial);
  printf("\tUmur: %d\n", umur);
  printf("\tTinggi badan: %.2f\n", tinggi);
  return 0;
}
