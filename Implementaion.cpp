#include "class_declaration.h"
/*----class numero-----*/
/*-----------------------------------------------*/
numero::numero(int _n){}
numero::~numero(){}
void numero::Divisores_numero(){}
vecor<int> numero::get_Divisores_numero(){}
/*----class Conjunto_Ordenado-----*/
/*-----------------------------------------------*/
Conjunto_Ordenado::Par_Ordenado(numero *_objnumero){}
Conjunto_Ordenado::~Par_Ordenado(){}
void Conjunto_Ordenado::Imprimir_Relacion_Subconjunto_Divisores(){}
void Conjunto_Ordenado::ingresar_sub_conjunto_Div(int _n){}
vector<int> Conjunto_Ordenado::get_sub_conjunt_Div(){}
vector<vector<int>> Conjunto_Ordenado::get_Relacion(){}
/*----class Diagrama_Hasse-----*/
/*-----------------------------------------------*/
Diagrama_Hasse::Diagrama_Hasse(Conjunto_Ordenado *_obj_CO){}
Diagrama_Hasse::~Diagrama_Hasse(){}
void Diagrama_Hasse::Dibujar_Diagrama_Hase(){}