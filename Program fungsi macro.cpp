#include <iostream>
  
// macro definition 
#define perkalian(x,y) (x*y)
int main() 
{ 
    int a, b;
    std::cout<<"Masukkan angka ke-1 : ";
    std::cin>>a;
    std::cout<<"Masukkan angka ke-2 : ";
    std::cin>>b;
    std::cout<<"Hasil perkalian : "<<perkalian(a,b);
  
    return 0; 
} 
