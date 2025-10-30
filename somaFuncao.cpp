#include<iostream>
using namespace std;

int soma(int a ,int b){
	int res = a+b;
	return res;
}

int main(){
	int n1,n2;
	cout <<"Digite o primeiro valor para somar\n";
	cin >> n1;
	cout <<"Digite o segundo valor para somar\n";
	cin >> n2;
	
	int resultado = soma(n1,n2);
	
	cout << "A soma de" << n1 <<"+"<<n2<<"="<< resultado;
	
	return 0;
}
