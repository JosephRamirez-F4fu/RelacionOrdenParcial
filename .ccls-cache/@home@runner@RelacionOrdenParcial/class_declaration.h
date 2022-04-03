#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <string>
#include<limits>

using namespace std;

class numero {
	public:
		numero(int _n);
		~numero();
		void Divisores_numero();
		vector<int> get_Divisores_numero();
	private:
			int *n;
			vector<int> Divisores;
			
};
class Conjunto_Ordenado {
	public:
			Conjunto_Ordenado(numero *_objnumero);
			~Conjunto_Ordenado();
			void Imprimir_Relacion_Subconjunto_Divisores();
			void ingresar_sub_conjunto_Div();
			void Realizar_Relacion();
			vector<int> get_sub_conjunt_Div();
			vector<vector<int>> get_Relacion();
	private:
			numero *obj_numero;
			vector<int>sub_conjunt_Div;
			vector<vector<int>> Relacion;
			
};
class Diagrama_Hasse {
			public:
				Diagrama_Hasse(Conjunto_Ordenado *_obj_CO);
				~Diagrama_Hasse();
			void Dibujar_Diagrama_Hase();
			private:
				Conjunto_Ordenado *obj_CO;
};
/*------Funciones Recurrentes----------*/
/*-----------------------------------------------*/
bool n_in_vector(vector<int>v,int n);
vector<int> ordenar_min_max(vector<int>v);

