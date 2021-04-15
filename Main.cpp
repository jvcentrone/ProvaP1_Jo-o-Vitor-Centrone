// JOÃO VITOR TELES CENTRONE 32033125 

#include <iostream>
#include "StaticQueue.h"
#include "StaticStack.h"
using namespace std;
using namespace DataStructures;
using namespace Queue;

StaticQueue fila;


int main()
{
	int option;
	char elem;
	

	do
	{
		cout << "Digite a acao que deseja fazer\n ";
		cout << "0. Adicionar a fila\n 1.Remover da fila\n 2.Sair\n";
		cin >> option;
		switch (option)
		{
		case 0:
			cout << "Digite o elemento ";
			cin >> elem;
			Queue::Enqueue(fila, elem);
			break;
		case 1:
			cout << "O numero retirado e o " << Queue::Dequeue(fila) << "\n";	 
		}
		

	} while (option != 2);

	

}