#include <iostream>
#include <sting>
#include <ctime>
#include <vector>
#include <string>

using namespace std;

Class numero {
	public:
		numero(int _n);
		~numero();
		void Divisores_numero();
		vecor<int> get_Divisores_numero();
	private:
			int *n;
			vector<int> Divisores;
			
};
class Conjunto_Ordenado {
	public:
			Par_Ordenado(numero *_objnumero);
			~Par_Ordenado();
			void Imprimir_Relacion_Subconjunto_Divisores();
			void ingresar_sub_conjunto_Div(int _n);
			vector<int> get_sub_conjunt_Div();
			vector<vector<int>> get_Relacion();
	private:
			numero *obj_numero
			vector<int> sub_conjunt_Div;
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


