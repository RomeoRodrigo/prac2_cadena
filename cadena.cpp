#include <iostream>
/*las cadenas son un conjunto de caracteres
se pueden concatenar
medir longitud
saber si esta vacia*/

using namespace std;

int main(int argc, char *argv[]) {

	string lyu;
	lyu= "I love C++";
	//concatenando una cadena con la variable
	cout<<"La acadena es: "+ lyu<<endl;
	//medir la longitud de un CADENA
	cout<<"la longitud de la cadena es: "<<lyu.length()<<endl;
	//para saber si la cadena esta vacia si el valor de retorno es 0 esta vacia
	cout<<"¿Esta¡ vacio?" <<lyu.empty()<<endl<<endl;
	lyu.append("!");//agrega uno despues de la cadena!
	cout<< "La cadena modificada es: "<<lyu<<endl<<endl;
	string lyu_2;
	lyu_2 = "I love too";
	lyu.swap(lyu_2);//intercambio de cadenas
	cout<<"cambie la cadena modificada como: "<<lyu<<endl<<endl;
	
	int site;
	site=lyu.find('l' , 0); //encuentra la posicion donde aparece la ldesde 0 y regresa
	cout<<"la posicion donde aparece l en la cadena es: "<<site<<endl;
	site=lyu.find("oo", 0);// encuentra la posicion donde apareceoo desde 0 y regresa
	cout<<"la posicion donde aparece oo en la cadena es: "<<site<<endl<<endl;
	site=0;//recorrer y buscar todas las posiciones o
	do{
		site=lyu.find('o', site);
		if (site== -1)
			cout<<"busqueda completada, no hay otros elementos"<<endl;
		else
			cout<<"la posicion donde aparece o en la cadena es: "<<site<<endl;
		site++;
		
	} while (site !=0);
	/*
	a=4
	e=3
	i=1
	o=0
	u=5
	*/		
	
	
	return 0;
}

