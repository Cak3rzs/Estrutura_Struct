#include <iostream>

using namespace std;

struct aluno{
	int matricula;
	float nota;
	char turma;
 

};

main(){
	int mediaturmaA=0;
	int ContaTurmaA=0;
	const int TAM_VETOR = 3;
	struct aluno alunos[TAM_VETOR];
	int i;
	for(i = 0; i<TAM_VETOR; i++){

	cout << "\n Digite a matricula do " <<i+1<< "o aluno:";
	cin >> alunos[i].matricula;
	cout << "\n Digite a nota do " <<i+1<< "o aluno:";
	cin >> alunos[i].nota;
	cout << "\n Digite a turma do " <<i+1<< "o aluno:";
	cin >> alunos[i].turma;
	if((alunos[i].turma == 'A')||(alunos[i].turma == 'a')){
		ContaTurmaA++;
		mediaturmaA +=alunos[i].nota;
	}
}
	cout << "\n Aluno cadastrado: ";
	cout << "\n Matricula: " <<  alunos[i].matricula;
	cout << "\n Nota:" <<  alunos[i].nota;
	
	
		cout << "\n Alunos Cadastrados: \n";
		for (i=0; i<TAM_VETOR; i++){
			cout << "\n Matricula: " << alunos[i].matricula;
			cout << "\n Nota: " << alunos[i].nota;
			cout << "\n Turma: " << alunos[i].turma;
		}
	cout << "\n Media das notas da turma A: " <<mediaturmaA/ContaTurmaA;	
}


