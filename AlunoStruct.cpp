#include<iostream>
using namespace std;

struct{
	char nome[20][5],curso[30][5];
	int mat[5];
}aluno;

int main(){
	int i;
	for(i=0;i<5;i++){
		cout << "Nome do aluno "<<i+1<<endl;
		cin >> aluno.nome[i];
		cout << "Matricula do aluno "<<i+1<<endl;
		cin >> aluno.mat[i];
		cout << "Curso do aluno "<<i+1<<endl;
		cin >> aluno.curso[i];
	}
	system("cls");
	for(i=0;i<5;i++){
		cout <<  "Nome: "<<  aluno.nome[i]<< endl;
		cout <<  "Matricula: "<<  aluno.mat[i]<< endl;
		cout <<  "Curso: "<<  aluno.curso[i]<< endl;
	}
}
