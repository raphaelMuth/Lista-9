#include <iostream>
using namespace std;

class Animal{
	public:
		virtual string mover() = 0;
		virtual string alimentar() = 0;
		virtual string classe() = 0;
};


class Cachorro : public Animal{
	public:

		string mover(){
			return "\nEu caminho e corro com minhas patas";
		}
		string alimentar(){
			return "\nEu me alimento de ração";
		}
		string classe(){
			return "\nEu sou um animal domestico";
		}
};

class Foca : public Animal{
	public:

		string mover(){
			return "\nEu rastejo em terra firme";
		}
		string alimentar(){
			return "\nEu me alimento principalmente de animais marinhos";
		}
		string classe(){
			return "\nEu sou um animal selvagem";
		}
};

int main(){

	Animal *C = new Cachorro();
	Animal *F = new Foca();

	cout << "\nComo o cachorro se move ?\n"<<C->mover()<<endl;
	cout << "\nDe que o cachorro se alimenta ?\n"<<C->alimentar()<<endl;
	cout << "\nQual a classificação do cachorro ?\n"<<C->classe()<<endl;

	cout << "\n\n--------------------------------------------------\n\n";

	cout << "\nComo a foca se move ?\n"<<F->mover()<<endl;
	cout << "\nDe que a foca se alimenta ?\n"<<F->alimentar()<<endl;
	cout << "\nQual a classificação da foca ?\n"<<F->classe()<<endl;

	return 0;

}
