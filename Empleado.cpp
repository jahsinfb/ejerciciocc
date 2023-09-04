#include<string>
#include"Empleado.h"
#include <iostream>

using namespace std;

Empleado::Empleado(string n, int e)
{
	setNombre(n);
	SetEdad(e);
}


void Empleado::setNombre(string nom)
{
	nombre=nom;
}
void Empleado::SetEdad(int age)
{
	edad=age;	
}

void Empleado::getDatos()
{
	cout<<"El nombre del empleado es "<<nombre <<" Y su edad: es" <<edad<<endl;
}
