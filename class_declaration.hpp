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
		void ingresar_sub_conjunto_Div(int _n);
	private:
			int *n;
			vector<int> Divisores;
			vector<int> sub_conjunt_Div;
};
class Conjunto_Ordenado {
	public:
			Par_Ordenado(numero *_objnumero);
			~Par_Ordenado();
			void Imprimir_Relacion_Subconjunto_Divisores();
	private:
			numero *obj_numero
			
};
class Diagrama_Hasse {
			public:
				Diagrama_Hasse();
				~Diagrama_Hasse();
			void Dibujar_Diagrama_Hase();
			private:
				Conjunto_Ordenado *obj_CO;
};


