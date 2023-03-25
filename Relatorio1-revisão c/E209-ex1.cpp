#include <iostream>
#include <iomanip>

using namespace std;


int main(){

	float laranja;
	cin >> laranja;
	if(laranja < 12){
		cout<<"preco da unidade= R$0.80"<<endl;
		cout<<"preco total= R$"<<laranja*0.80<< setprecision(3)<<endl;
	}
	else
	{
		cout<<"preco da unidade= R$0.65"<<endl;
		cout<<"preco total= R$"<<laranja*0.65<<setprecision(3)<<endl;
	}
	
 

	return 0;
}