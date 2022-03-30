#include "class_declaration.h"
/*----class numero-----*/
/*-----------------------------------------------*/
numero::numero(int _n)
{
  n = _n;
}
numero::~numero(){}
void numero::Divisores_numero()
{
for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			Divisores.push_back(i);
		}
	}
}
vector<int> numero::get_Divisores_numero(){return Divisores;}

/*----class Conjunto_Ordenado-----*/
/*-----------------------------------------------*/
Conjunto_Ordenado::Conjunto_Ordenado(numero *_objnumero){obj_numero=_objnumero;}
Conjunto_Ordenado::~Conjunto_Ordenado(){}
void Conjunto_Ordenado::Imprimir_Relacion_Subconjunto_Divisores(){
	/*Aqui ocn el subcunto de div se de ve imprmir la relacion tal que muestre
	Ejemplo:
	A={1,2,3,6}}
	Sub_A={1,2,6}
	R={(1,1),(1,2),(1,6),(6,6)} La idea es imprimir la relacion como se muetra en esta linea
	
	elemento,relacion_divide

	(1,1) (1,2) (1,6)
	(2,2) (2,6)
	(6,6)

	Esta es la relacion sumado con el sub_conjunto_div
	teniendo en la realacion 
	relacion[0] = {1,2,6}
	relacion[1]={2,6}
	relacion[2]={6}
	sub_conjunto_div={1,2,6}

*/
}
void Conjunto_Ordenado::ingresar_sub_conjunto_Div(){
	int ingresar;
	while(true){
		cout<<"ingrese los valores dentro del Conjunto de Divosisores:";
		cout<<"Para terminar de ingresar ingrese 0";
		cin>>ingresar;
		try{
			/*cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			*/
			if(cin.fail())
				throw "error de valor de dato";
			if(ingresar<0)
				throw "ingrese valores enteros positivos";
		}catch(string x){
			cout<<x;
		}
		if(!(cin.fail()))
		{
			if(n_in_vector(obj_numero->get_Divisores_numero(),ingresar))
				if(n_in_vector(sub_conjunt_Div,ingresar)==false)
						sub_conjunt_Div.push_back(ingresar);
			if(ingresar==0)
				break;
		}
	}
}
vector<int> Conjunto_Ordenado::get_sub_conjunt_Div(){
	return sub_conjunt_Div;}
vector<vector<int>> Conjunto_Ordenado::get_Relacion(){
	return Relacion;}
/*----class Diagrama_Hasse-----*/
/*-----------------------------------------------*/
Diagrama_Hasse::Diagrama_Hasse(Conjunto_Ordenado *_obj_CO){}
Diagrama_Hasse::~Diagrama_Hasse(){}
void Diagrama_Hasse::Dibujar_Diagrama_Hase(){}
/*------Funciones Recurrentes----------*/
/*-----------------------------------------------*/

bool n_in_vector(vector<int>v,int n){
	for (int i =0;i<v.size();i++){
		if(n==v[i])
			return true;
	}
	return false;
}

void ordenar_min_max(vector<int>*v){
	for(int i=0;i<=v.size()-1;i++)
		for(int j=i+1;j<=v.size();j++)
			{
				if(v[i]>v[j]){
					int aux = v[i];
					v[i]=v[j];
					v[j]=aux;
				}
			}
}