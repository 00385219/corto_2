#include "iostream"
#include <iomanip> // para la funcion setprecision y fixed

using namespace std;

int main()
{
    int pais;
    double cantidad,totalIva;
    
    cout << endl << "Lista de paises:";
    cout << endl << "1- El Salvador";
    cout << endl << "2- Guatemala";
    cout << endl << "3- Honduras";
    cout << endl << "4- Espana";
    cout << endl << "\nEscoja el pais e ingrese el NUMERO de su eleccion:\n";
    cin >> pais;

    if (pais>=1 & pais<=5)
    {
        cout << endl << "\nIngrese la cantidad de dinero:\n$";
        cin >> cantidad;
        
        if (cantidad>=0)
        {                    
            if (pais==1)
            {
                cout << endl << "\nUsted escogio el pais 1- El Salvador";
                cout << endl << setprecision(2) << fixed << "El monto que ingreso es $" << cantidad;
                // se ingresa el setprecision y fixed para que no imprima en notacion cientifica 
                totalIva = cantidad*1.13;
                cout << endl << "El monto mas el IVA del 13% del El Salvador es:";
                cout << endl << setprecision(2) << fixed << "$" << totalIva << endl;
            }
            else
            {
                if (pais==2)
                {
                    cout << endl << "\nUsted escogio el pais 2- Guatemala";
                    cout << endl << setprecision(2) << fixed << "El monto que ingreso es $" << cantidad;
                    totalIva = cantidad*1.09;
                    cout << endl << "El monto mas el IVA del 9% de Guatemala es:";
                    cout << endl << setprecision(2) << fixed << "$" << totalIva << endl;
                }
                else
                {
                    if (pais==3)
                    {
                        cout << endl << "\nUsted escogio el pais 3- Honduras";
                        cout << endl << setprecision(2) << fixed << "El monto que ingreso es $" << cantidad;
                        totalIva = cantidad*1.15;
                        cout << endl << "El monto mas el IVA del 15% de Honduras es:";
                        cout << endl << setprecision(2) << fixed << "$" << totalIva << endl;
                    }
                    else
                    {
                        if (pais==4)
                        {
                            cout << endl << "\nUsted escogio el pais 4- Espana";
                            cout << endl << setprecision(2) << fixed << "El monto que ingreso es $" << cantidad;
                            totalIva = cantidad*1.20;
                            cout << endl << "El monto mas el IVA del 20% de Espana es:";
                            cout << endl << setprecision(2) << fixed << "$" << totalIva << endl;
                        }
                   
                    }
                
                }
            
            }
        
        }
        else
        {
            cout << endl << "\nDebe ingresar una cantidad correcta.";
            cout << endl << "Por favor, intente nuevamente.\n" << endl;
        }      
    }
    else
    {
        cout << endl << "\nDebe ingresar un numero del 1 al 4.";
        cout << endl << "Por favor, intente nuevamente.\n" << endl ;
    }
}