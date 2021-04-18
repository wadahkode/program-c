#include <stdio.h>

void input(char name[]) {
  printf("Halo %s, Selamat Belajar!!!\n", name);
}

int main() {
  char name[30];

  printf("Input your name: ");
  scanf("%[^\n]s", &name);

  input(name);

  return 0;
}