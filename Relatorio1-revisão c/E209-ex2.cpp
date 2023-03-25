#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Digite um numero: " << endl;
  cin >> n;

  if (n == 0) {
    cout << "numero não pode ser 0" << endl;
  } else {
    for (int i = n - 1; i > 0; i--) {
      cout << "Resto da divisao de " << n << " por " << i << " : " << n % i << endl;
    }
  }
  return 0;
}