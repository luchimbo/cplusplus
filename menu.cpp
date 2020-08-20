#include "menu.hpp"

int mostrar_menu(){
	int opcion_rec = DEF_OPC;
	cout << "Modificar 1-Color 2-Tinta 3- Nro de Lapiceras" << endl; 
	cout << "Mostrar 4- Color 5-Tinta 6-Nro de Lapiceras 7-Salir" << endl;
	cin >> opcion_rec;
	return opcion_rec;
}

bool opc_modificar_tinta(){
	bool tinta_recib = DEF_TINTA;
	cout<<"Tiene tinta? Si-1 No-0"<<endl;
	cin>> tinta_recib;
	return tinta_recib;
}

string opc_modificar_color(){
	string color_recib = DEF_COLOR;
	cout<<"Ingrese nuevo color:"<<endl;
	cin>> color_recib;
	return color_recib;
}

int opc_modificar_cant_lap(){
	int cant_lap_recib = DEF_CANTIDAD;
	cout<<"Que numero de lapiceras tiene?"<<endl;
	cin>> cant_lap_recib;
	return cant_lap_recib;
}

void opc_mostrar_color(lapicera_t lapicera){
	cout << "El color es: " << lapicera.color << endl;
}

void opc_mostrar_tinta(lapicera_t lapicera){
	cout << "Tiene tinta? Si-1 No-0 ___ " << lapicera.tinta << endl;
}

void opc_mostrar_cant_lap(lapicera_t lapicera){
	cout << "El numero de lapiceras es: " << lapicera.cantidad << endl;
}

lapicera_t ejecutar_opcion(int opcion_eleg, lapicera_t lapicera){
	switch(opcion_eleg){
			case OPC_MOD_TINTA:
				lapicera.tinta = opc_modificar_tinta();
				break;
			case OPC_MOD_COLOR:
				lapicera.color = opc_modificar_color();	
				break;
			case OPC_MOD_NRO_LAP:
				lapicera.cantidad = opc_modificar_cant_lap();
				break;
			case OPC_MOST_TINTA:
				opc_mostrar_tinta(lapicera);
				break;
			case OPC_MOST_COLOR:
				opc_mostrar_color(lapicera);
				break;
			case OPC_MOST_NRO_LAP: 
				opc_mostrar_cant_lap(lapicera);
				break;
			case OPC_SALIR:
				cout<<"Salir"<<endl;
				break;
			default:
				cout<<"Error. Intente de nuevo"<<endl;
	} 
	return lapicera;
}


void iniciar_programa(){
	int opcion = DEF_OPC;
	lapicera_t bic;
	do{
		opcion = mostrar_menu();
		bic = ejecutar_opcion(opcion, bic);
	}while(opcion != OPC_SALIR);
}