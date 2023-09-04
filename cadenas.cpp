#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	char palabra[]="Jahsin";
	char palabra2[]={'J','a','h','s','i','n'};	
	char nombre[100];
	
	//cout<<palabra;
	
	cout << "\n "<<palabra2<<endl;
	
	cout << "Ingrese ek nombre\n";
	cin.getline(nombre,100,'\n');
	cout << nombre;
	return 0;
}