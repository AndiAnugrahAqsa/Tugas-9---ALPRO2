#define bil 9
#if bil>0
#define bilangan "positif"
#elif bil<0
#define bilangan "negatif"
#else
#define bilangan "bulat"
#endif

#include <iostream>
using namespace std;
int main (){

cout<<(bilangan);
}
