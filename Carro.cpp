#include<iostream>
using namespace std;

typedef struct Carro{
	char marca[29],modelo[20];
	int ano;
	float preco;
}carro;

void imprimirFichaCarro(Carro carro){
	cout << "Marca do carro\n" << carro.marca;
	cout << "Modelo do carro\n" << carro.modelo;
	cout << "Ano do carro\n" << carro.ano;
	cout << "Preco do carro\n" << carro.preco;
}
int main(){
	Carro car;
	cout << "Digite a marca do carro ";
	cin >> car.marca;
	
	imprimirFichaCarro(car);
}
