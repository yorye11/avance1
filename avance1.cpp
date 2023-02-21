#include <iostream>

using namespace std;
int decision, matricula, opcion;
char nombre[20];
float c1, c2, c3, promedio, lab;


int main()
{
    cout << "\t \t ***MENU DE OPCIONES***" << endl; 
    cout << "1.-Alta" << endl;
    cout << "2.-Modificacion" << endl;
    cout << "3-Baja" << endl;
    cout << "4.-Lista" << endl;
    cout << "5.-Limpiar Pantalla" << endl;
    cout << "6.-Salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1: //ALTA
        cout << "ingrese matricula" << endl;
        cin >> matricula;
        cout << "ingrese nombre" << endl;
        cin >> nombre;
        cout << "ingrese las calificacion y lab" << endl;
        cin >> c1 >> c2 >> c3 >> lab;

        promedio = (c1 + c2 + c3) / 3;
        cout << "su promedio es" << endl;
        cout << promedio << endl;
        cout << "desea volver al menu?" << endl;
        cout << "1 si  2 no" << endl;
        cin >> decision;
        if (decision == 1)
        {
           
            return main();
        }
        break;
    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    case 5:
        system("cls"); 
        return main();
        break;
    case 6:
        exit(1); 
        break;

    }
}

