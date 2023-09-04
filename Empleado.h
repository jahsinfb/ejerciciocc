#include <string>
using namespace std;

class Empleado
{
	public:
		Empleado(string, int);
		void setNombre(string);
		void SetEdad(int);
		void getDatos();
		
	private:
		string nombre;
		int edad;
};
