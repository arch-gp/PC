#include<stdio.h>

int main(){
  FILE *fp = fopen("test.txt", "rb+");
  fseek(fp, 0, SEEK_SET);
  fwrite("A", 1, 1, fp);
  fwrite("B", 1, 1, fp);
  fseek(fp, 5, SEEK_SET);
  fwrite("C", 1, 1, fp);
  fseek(fp, 0, SEEK_END);
  fwrite("D", 1, 1, fp);
  fseek(fp, 1, SEEK_END);
  fwrite("E", 1, 1, fp);
  fclose(fp);
}
