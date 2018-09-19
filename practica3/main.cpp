#include <iostream>

using namespace std;

void totalPasivo(int activo){
    int equipoComputo= 5000,gastosMoviliarios= 2000,compraInsumos,insentivosPersonal,totalAhorro;
    if(activo < 0){
        totalAhorro = activo+10000;
        cout << "Se hizo un prestamos de: " << 10000 << endl;
        totalAhorro = totalAhorro - equipoComputo;
        cout << "Se compro equipo de computo: " << equipoComputo << endl;
        totalAhorro = totalAhorro - gastosMoviliarios;
        cout << "Gastos moviliarios: " << gastosMoviliarios << endl;
        totalAhorro = totalAhorro / 2;
        cout << "Total en compra de insumos: " << totalAhorro << endl;
        cout << "Total en otorgar insentivos al personal: " << totalAhorro << endl;
    }else{
        if(activo >= 20000){
            cout << "Su activo es: " << activo << endl;
            cout << "Se compro equipo de computo: " << equipoComputo << endl;
            totalAhorro = activo - equipoComputo;
            cout << "Gastos moviliarios: " << gastosMoviliarios << endl;
            totalAhorro = totalAhorro - gastosMoviliarios;
            totalAhorro = totalAhorro / 2;
            cout << "Total en compra de insumos: " << totalAhorro << endl;
            cout << "Total en otorgar insentivos al personal: " << totalAhorro << endl;
            }else{
                if(activo > 0 || activo < 20000){
                totalAhorro = activo+20000;
                cout << "Se hizo un prestamos de: " << 20000 << endl;
                totalAhorro = totalAhorro - equipoComputo;
                cout << "Se compro equipo de computo: " << equipoComputo << endl;
                totalAhorro = totalAhorro - gastosMoviliarios;
                cout << "Gastos moviliarios: " << gastosMoviliarios << endl;
                totalAhorro = totalAhorro / 2;
                cout << "Total en compra de insumos: " << totalAhorro << endl;
                cout << "Total en otorgar insentivos al personal: " << totalAhorro << endl;
            }
        }
    }

}

int main()
{
    int datoEntrante;
    cout << "Digite un monto, $ " << endl;
    cin >>datoEntrante;
    totalPasivo(datoEntrante);
    return 0;
}
