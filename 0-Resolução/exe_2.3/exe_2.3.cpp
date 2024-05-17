#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

typedef struct {
	char nome[50];
	int idade, num;
}Aluno;

int main() 
{
	ofstream os; //objetos para abrir o ficheiro em modo de escrita
	Aluno v[3];

	for (int i = 0; i < 3; i++) 
	{
		cout << "Nome: ";
		cin.getline(v[i].nome, sizeof v[i].nome);

		cout << "Idade: ";
		cin >> v[i].idade;
		cout << "Numero: ";
		cin >> v[i].num;
		// Para limpar o buffer
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		//cin.get();// para o caso de saltar a leitura do nome
	}

	os.open("alunos.txt");
	if (!os) {
		cout << "Erro: não é possivel abrir o ficheiro alunos.txt" << '\n';
		exit(1);
	}

	for (int i = 0; i < 3; i++)
		os << v[i].nome << ";" << v[i].idade << ";" << v[i].num << ";" << endl;

	os.close(); //fecha o ficheiro associado a os
	cout << "Ficheiro criado com sucesso!" << endl;
	cout << "Abra, num editor, oficheiro \"alunos.txt\"" << endl;
	cin.get();

	return 0;
}
