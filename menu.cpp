#include <iostream>

using namespace std;

const string DEF_COLOR = "def color";
const bool DEF_TINTA = true;
const int DEF_CANTIDAD = -1;

typedef struct lapicera{
	string color = DEF_COLOR;
	bool tinta = DEF_TINTA;
	int cantidad = DEF_CANTIDAD;
}lapicera_t;


int main (){

int opcion;
string color;
bool tinta;
int cantidad;
string tinta_texto = "Hola";

do{
	cout << "Modificar 1-Color 2-Tinta 3- Nro de Lapiceras 4-Salir" << endl;
	cin >> opcion;

	switch(opcion){
		case 1:
			cout << "Escriba el color de la lapicera" << endl; 
			cin >> color;
			break;
		case 2:
			cout << "Tiene tinta? Si-1 No-0" << endl;
			cin >> tinta;
			break;
		case 3:
			cout << "Que numero de lapiceras tiene?" << endl;
			cin >> cantidad;
			break;
	} 
} while ( opcion != 4);

if (tinta==true){
	tinta_texto = "Tiene tinta";
}
	else{
	tinta_texto = "No tiene tinta";
	}


lapicera_t lapicera_1 = {color, tinta, cantidad};

cout << lapicera_1.color << ' ' << lapicera_1.tinta << ' ' << tinta_texto << ' ' << lapicera_1.cantidad << ' ' << endl;

return 0;
}
