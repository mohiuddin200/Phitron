#include<stdio.h>

// int main(){
//   int money;
//   scanf("%d", &money);
//   if(money > 100){
//     printf("We will eat burger!\n");
//   } else if(money > 50) {
//     printf("We will eat salad!\n");
//   } else {
//     printf("We will eat something else!\n");
//   }
// }

int main() {
  int money;
  scanf("%d", &money);
  if(money > 5000){
    printf("We will go to Cox's Bazar!\n");
  } else if(money > 1000) {
    printf("We will go to the hill tracts!\n");
  } else {
    printf("We will stay home!\n");
  }
}