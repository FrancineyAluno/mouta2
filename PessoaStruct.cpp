#include<iostream>
using namespace std;

struct{
	char nome[20],endereco[30];
	int idade;
}pessoa;

int main(){
	cout << "Digite o nome da Pessoa" << endl;
	cin >> pessoa.nome;
	cout << "Digite a idade da Pessoa" << endl;
	cin >> pessoa.idade;
	cout << "Digite o endereco da Pessoa" << endl;
	cin >> pessoa.endereco;
	
	cout << "Nome da Pessoa " << pessoa.nome << endl;
	cout << "Idade da Pessoa " << pessoa.idade << endl;
	cout << "Endereco da Pessoa " << pessoa.endereco;
}
