#include <iostream>

using namespace std;

 int unMetodo(int categoria,double nota){
    int precioPreparatoria= 180,precioProfecional= 250,total= 0;
    if(nota >= 9.5 && categoria == 1){
        cout<<"Tienes un descuento de: 25% \nAdemas cursara 55 unidades"<<endl;
        cout<<"Total precio con descuento: "<<precioPreparatoria*11;
        total= (precioPreparatoria*11)*100/75;
        return total;
    }else{
        if(nota >= 9 && categoria == 1){
        cout<<"Tienes un descuento de: 10% \nAdemas cursara 50 unidades"<<endl;
        cout<<"Total precio con descuento: "<<precioPreparatoria*10;
        total= (precioPreparatoria*10)*100/90;
        return total;
        }else{
            if(nota > 7 && nota < 9 && categoria == 1){
                cout<<"Tienes un descuento de: 0% \nAdemas cursara 50 unidades"<<endl;
                total= (precioPreparatoria*10);
                return total;
            }else{
                cout<<"Error dato no valido! ";
            }
        }
    }

};

int otrometodo(int categoria, double nota, int numMateriasReprobadas){
    int precioPreparatoria= 180,precioProfecional= 250,total= 0;
    if(nota <= 7 && categoria == 1 && (numMateriasReprobadas <= 3 || numMateriasReprobadas >= 0)){
        cout<<"Tienes un descuento de: 0% \nAdemas cursara 45 unidades"<<endl;
        total= (precioPreparatoria*9);
        return total;
    }else{
        if(nota <= 7 && categoria == 1 && numMateriasReprobadas =>4 {
            cout<<"Tienes un descuento de: 0% \nAdemas cursara 40 unidades"<<endl;
            total= (precioPreparatoria*8);
            return total;
        }
    }
};

int metodoProfecional(int categoria,double nota){
    int precioPreparatoria= 180,precioProfecional= 250,total= 0;
    if( nota >= 9.5 && categoria ==2 ){
        cout<<"Tienes un descuento de: 20% \nAdemas cursara 55 unidades"<<endl;
        cout<<"Total precio con descuento: "<<precioPreparatoria*11;
        total= (precioProfecional*11)*100/80;
        return total;
    }else{
        if( nota < 9.5 && categoria ==2 ){
            cout<<"Tienes un descuento de: 0% \nAdemas cursara 55 unidades"<<endl;
            cout<<"Total precio con descuento: "<<precioProfecional*11;
            total= (precioProfecional*11)*100/80;
            return total;
        }
    }
}

int main()
{
    int categoria;
    double nota;
    cout << "Digite 1 si esta en preparatorio: \nDigite 2 si es de profecional: " << endl;
    cin >>categoria;
    cout <<"Digite su nota"<<endl;
    cin >>nota;
    cout << "\nTotal a pagar: $ "<<unMetodo(categoria,nota) << endl;
    return 0;
}
