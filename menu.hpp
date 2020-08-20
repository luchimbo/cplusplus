#ifndef __MENU_HPP__
#define __MENU_HPP__

#include <iostream>
using namespace std;

const string DEF_COLOR = "def color";
const bool DEF_TINTA = true;
const int DEF_CANTIDAD = -1;
const int OPC_MOD_COLOR = 1;
const int OPC_MOD_TINTA = 2;
const int OPC_MOD_NRO_LAP = 3;
const int OPC_MOST_COLOR = 4;
const int OPC_MOST_TINTA = 5;
const int OPC_MOST_NRO_LAP = 6;
const int OPC_SALIR = 7;
const int DEF_OPC = -1;
const string DEF_TEXTO = "def texto";

typedef struct lapicera{
	string color = DEF_COLOR;
	bool tinta = DEF_TINTA;
	int cantidad = DEF_CANTIDAD;
}lapicera_t;

/*Pre:-.
 *Post: Muestra el menu, recibe la opcion ingresada y devuelve el valor de "opcion_rec"
*/
int mostrar_menu();

/*Pre:-.
 *Post: recibe si tiene tinta en "tinta_recib" y lo retorna
*/
bool opc_modificar_tinta();
/*Pre:-.
 *Post: recibe un nuevo color en "color_recib" y lo retorna
*/
string opc_modificar_color();
/*Pre:-.
 *Post: recibe un nuevo numero de lapiceras en "cant_lap_recib" y lo retorna
*/
int opc_modificar_cant_lap();
/*Pre:-.
 *Post: Muestra el color de "lapicera"
*/
void opc_mostrar_color(lapicera_t lapicera);
/*Pre:-.
 *Post: Muestra si tiene tinta de "lapicera"
*/
void opc_mostrar_tinta(lapicera_t lapicera);
/*Pre:-.
 *Post: Muestra la cantidad de lapiceras de "lapicera"
*/
void opc_mostrar_cant_lap(lapicera_t lapicera);
/* Pre: "opcion_eleg" actualizado
 * Post: realiza la "opcion_eleg" y retorna "lapicera"
*/
lapicera_t ejecutar_opcion(int opcion_eleg, lapicera_t lapicera);
/*pre:-.
 *post: inicia el programa y termina con la opcion "OPC_SALIR"
*/
void iniciar_programa();


#endif /*__MENU_HPP__*/