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
	ifstream is; //objetos para abrir o ficheiro em modo de escrita
	Aluno v[3];
	int i;
	char aux[30];

	is.open("alunos.txt");
	if (!is)
	{
		cout << "ERRO: n�o � possivel abrir o ficheiro alunos.txt" << endl;
		system("pause");
		exit(1);
	}

	i = 0;

	while (is.peek() != EOF)
	{
		is.getline(v[i].nome, sizeof(v[i].nome), ';');
		cout << "Nome: " << v[i].nome << endl;
		is.getline(aux, 30, ';');
		v[i].idade = atoi(aux);
		cout << "Idade: " << v[i].idade << endl;
		is.getline(aux, 30, ';');
		cout << "Numero: " << v[i].num << endl;
		is.get();
		i++;
	}

	is.close(); // fecha o ficheiro associado a is
	system("pause");

	return 0;
}
