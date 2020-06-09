#line 100 "stdio.h"
#include<stdio.h>
int display();

#pragma startup display()
#pragma exit display()
int a??;
int main() {
   printf("\nI am in main function");
   return 0;
}

int display() {
   printf("\nI am in display function");
   return 0;
}
