#include<stdio.h>
struct Book{
  char name[20];
  short price;
};
int main(){
  struct Book b1 = {"c语言设计",55};
  printf("%s\n",b1.name);
  printf("%d\n",b1.price);
  return 0;
}