#include <stdio.h>

int main() {
  char nama[] = "Ayus irfang filaras";
  int umur = 30;
  double tinggi = 168;
  float berat = 60;

  printf("Nama: %s\n", nama);
  printf("Umur: %i\n", umur);
  printf("Tinggi badan: %.2fcm\n", tinggi);
  printf("Berat badan: %.2fkg\n", berat);

  return 0;
}