#include <iostream>
using namespace std;

void checkTest(int num[5]){
  int pares = 0;
  int impar = 0;
  int positivo = 0;
  int negativo = 0;
  
   for(int x = 0; x < 5; x++){
     if((num[x] % 2) == 0){
       pares++;
     } else {
       impar++;
     }

    if(num[x] >= 0){
       positivo++;
    } else {
       negativo++;
    }
  }
  cout << "Quantidade de numeros pares:"<< pares << endl;
  cout << "Quantidade de numeros impares:"<< impar << endl;
  cout << "Quantidade de numeros positivos:"<< positivo << endl;
  cout << "Quantidade de numeros negativos:"<< negativo << endl;
}
 
int main() {
  int n;
  cout << "Digite a quantidade de teste:"<< endl;
  cin >> n;

  for(int x = 1; x <= n; x++){
    int n1, n2, n3, n4, n5;
    cout << "Digite os cinco numeros de teste:"<< endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int num[5] = {n1, n2, n3, n4, n5};
    checkTest(num);
  }
}