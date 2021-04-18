#include <stdio.h>

void main() {
  char data[2][3] = {
    {1,2,3},
    {4,5,6}
  };

  int sum = sizeof(data) / sizeof(*data);
  
  for (int i = 0; i < sum; i++) {
    int column = sizeof(data[i]) / sizeof(*data[i]);

    for (int j = 0; j < column; j++) {
      printf("Baris %d kolom %d nilainya adalah %d\n", i, j, data[i][j]);
    }
  }
}