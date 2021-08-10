#include <iostream>

using namespace std;

int main()
{
  int age;
  char gender;
  printf("How old are you?\n");
  scanf(" %d",&age);
  printf("What is your gender?(m/f)\n");
  scanf(" %c",&gender);
  if(gender=='m'){
printf("Hello sir\n");
  }else{
  printf("Hello madam\n");
  }
  if(age>=18){
    printf("Welcome to computer world\n");
  }else{
   printf("You are too young");
  }

    return 0;
}
