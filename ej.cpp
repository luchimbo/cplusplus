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
	
	lapicera_t lapicera_1 = {"azul", false, 3};
	cout << lapicera_1.color << ' ' << lapicera_1.tinta << ' ' << lapicera_1.cantidad << ' ' << endl;
	return 0;
}
