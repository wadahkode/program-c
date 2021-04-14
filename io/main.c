#include <stdio.h>

int main() {
  char nama[30];
  int umur = 100;

  printf("Belajar input dan output dengan bahasa C\n\n");
  printf("Nama: ");
  scanf("%[^\n]s", &nama);
  printf("Umur: ");
  scanf("%i", &umur);

  printf("\n-------------------------------\n");
  printf("Nama lengkap: %s\n", nama);
  printf("Umur: %i", umur);
  printf("\n-------------------------------\n");

  return 0;
}