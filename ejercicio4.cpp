#include <iostream>
#include <stdlib.h>
//#include <conio.h>

using namespace std;

int main()
{
    double nota[]={2,4,6,8,1,7,9,6,10,3 };
    double suma=0, promedio;
for (int i = 0; i < 10; i++)
{
  suma= suma+nota[i]  /* code */;
}
promedio = suma/10;
cout <<"El promedio de la suma es "<<promedio<<endl;
return 0;
}
