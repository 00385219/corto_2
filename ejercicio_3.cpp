#include "iostream"
#include <math.h>

using namespace std;

int main()
{
    int color;
    
    cout << endl << "Lista de colores:";
    cout << endl << "1- Rojo";
    cout << endl << "2- Azul";
    cout << endl << "3- Negro";
    cout << endl << "4- Verde";
    cout << endl << "5- Rosa";
    cout << endl << "\nEscoja un color e ingrese el NUMERO de su eleccion:\n";
    cin >> color;

    if (color>=1 & color<=5)
    {
        if (color==1)
        {
            cout << endl << "\nUsted escogio el color 1- Rojo";
            cout << endl << "Usted gano $100 dolares\n";
        }
        else
        {
            if (color==2)
            {
                cout << endl << "\nUsted escogio el color 2- Azul";
                cout << endl << "Usted gano $25 dolares\n";
            }
            else
            {
                if (color==3)
                {
                    cout << endl << "\nUsted escogio el color 3- Negro";
                    cout << endl << "Usted gano $10 dolares\n";
                }
                else
                {
                    if (color==4)
                    {
                        cout << endl << "\nUsted escogio el color 4- Verde";
                        cout << endl << "Usted gano $50 dolares\n";
                    }
                    else
                    {
                        if (color==5)
                        {
                            cout << endl << "\nUsted escogio el color 5- Rosa";
                            cout << endl << "Usted gano $75 dolares\n";
                        }
                      
                    }
                    
                }
                
            }
            
        }
        
    }
    else
    {
        cout << endl << "\nDebe ingresar un numero del 1 al 5";
        cout << endl << "Por favor, intente nuevamente\n";
    }
    

}