#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    
    float cateto1, cateto2;
    cout<<"Dame el valor del primer cateto ";
    cin>>cateto1;
    cout<<"Dame el valor del segundo cateto ";
    cin>>cateto2;
    float hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
    cout << "El perimetro es: "<<hipotenusa+cateto1+cateto1<<endl;
    system("pause");
    return 0;
}