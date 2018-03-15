#include <stdlib.h>
#include "UtilidadesListaEnlazada.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	nodo head = 0;


	//Numeros se ordenar de menor a mayor!

	UtilidadesListaEnlazada::insertarFinal(head, 2);
	UtilidadesListaEnlazada::insertarFinal(head, 7);
	UtilidadesListaEnlazada::insertarFinal(head, 3);

	cout << "\n === Lista desordenada === "<<endl;

	UtilidadesListaEnlazada::printList(head);
	UtilidadesListaEnlazada::ordenarLista(head);

	cout << "\n === Lista Ordenada === " << endl;
	UtilidadesListaEnlazada::printList(head);

	nodo nodeAE = UtilidadesListaEnlazada::crearLista(8);

	cout << "\n === Lista desordenada creada === " << endl;
	UtilidadesListaEnlazada::printList(nodeAE);

	UtilidadesListaEnlazada::ordenarLista(nodeAE);

	cout << "\n === Lista ordenada === " << endl;

	UtilidadesListaEnlazada::printList(nodeAE);



	char * nombre = new char;
	cout << "Nombre con la extension del archivo: ";
	cin >> nombre;

	UtilidadesListaEnlazada::guardarLista(nodeAE, nombre);

	cout << "Presione cualquier tecla para continuar menos ENTER porque puede crashear (EN mi visual studio lo hace pero en otros no)";
	_getch();

}