#include <iostream>
using namespace std;

void checkTest(int num[5]) {
  int num_pares = 0;
  int num_impares = 0;
  int num_positivos = 0;
  int num_negativos = 0;

  for(int x = 0; x < 5; x++){
    if((num[x] % 2) == 0){
      num_pares++;
    } else {
      num_impares++;
    }

    if(num[x] >= 0){
      num_positivos++;
    } else {
      num_negativos++;
    }
  }

  cout << "Quantidade de numeros pares: " << num_pares << endl;
  cout << "Quantidade de numeros impares: " << num_impares << endl;
  cout << "Quantidade de numeros positivos: " << num_positivos << endl;
  cout << "Quantidade de numeros negativos: " << num_negativos << endl;
}

int main() {
  int n;
  cout << "Digite a quantidade de testes: " << endl;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int n1, n2, n3, n4, n5;
    cout << "Digite os cinco numeros de teste: " << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int num[] = {n1, n2, n3, n4, n5};
    checkTest(num);
  }
  return 0;
}