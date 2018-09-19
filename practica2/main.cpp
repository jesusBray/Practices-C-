#include <iostream>

using namespace std;

string operacion1(double x,double y) {
    if(x > 0 && y > 0){
        return "Usted esta en el cuadrante #1";
    }else{
        if(x >= 0 && y > 0){
            return "Usted esta en el cuadrante (Y +)";
        }else{
            if(x > 0 && y >= 0){
                return "Usted esta en el cuadrante (X +)";
            }else{
                if(x < 0 && y > 0){
                    return "Usted esta en el cuadrante #2";
                }else{
                    if(x <= 0 && y >0){
                        return "Usted esta en el cuadrante (Y +)";
                    }else{
                        if(x < 0 && y >= 0){
                            return "Usted esta en el cuadrante (X -)";
                        }else{
                            if(x < 0 && y < 0){
                                return "Usted esta en el cuadrante #3";
                            }else{
                                if(x <= 0 && y < 0){
                                    return "Usted esta en el cuadrante (Y -)";
                                }else{
                                    if(x < 0 && y <= 0){
                                        return "Usted esta en el cuadrante (X -)";
                                    }else{
                                        if(x > 0 && y < 0){
                                            return "Usted esta en el cuadrante #4";
                                        }else{
                                            if(x >= 0 && y < 0){
                                                return "Usted esta en el cuadrante (Y -)";
                                            }else{
                                                if(x > 0 && y <= 0){
                                                    return "Usted esta en el cuadrante (X +)";
                                                }else{
                                                    if(x == 0 && y == 0){
                                                        return "Usted esta en el punto (0,0)";
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
};

int main()
{
    int a,b;
    cout << "Digite un numero para x" << endl;
    cin >> a;
    cout << "Digite  numero para y" << endl;
    cin >> b;
    cout << "El resultado es: \n"<<operacion1(a,b) << endl;
    return 0;
}
