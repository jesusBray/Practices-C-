#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void juego1(){
    int n,num;
    //un bucle que repetira randomicanete numeros
    cout<<"Digite la cantidad de vese que se repetira:  ";
    cin >>n;
    //genera numeros aleatorios
    srand(time(NULL));
    for(int c=1;c<=n;c++){
        num = 1 + rand() % (7 - 1);
        cout<<num<<'\t';
    }
}

void juego2(){
    int cont=0,numRandom=1;
    srand(time(NULL));
    while(numRandom%2 !=0){
        numRandom = 1 + rand()% (7 -1);
        cout <<numRandom<<endl;
        cont++;
    }
    cout <<"Ganaste! "<<numRandom<<endl;
    cout <<"Vueltas dadas: "<<cont<<endl;
}

void juego3(){
    int cont =0,d1,d2,d3;
    bool salir = true;
    srand(time(NULL));
    while(salir){
        d1= 1+rand()%(7 -1);
        d2= 1+rand()%(7 -1);
        d3= 1+rand()%(7 -1);
        if(d1==d2 && d2==d3){
            cout<<"Ganaste trica: "<<endl;
            cout<<d1<<", "<<d2<<", "<<d3<<endl;
            cout<<"Intentos realizados: "<<cont<<endl;
            salir = false;
        }
        cont++;
    }

}

void juego4(){
    int card1,card2,card3,cont=0;
    bool salir = true;
    srand(time(NULL));
    while(salir){
        card1 = 0 + rand()%(14 -0);
        card2 = 0 + rand()%(14 -0);
        card3 = 0 + rand()%(14 -0);
        if(card1==0 && card2==0 && card3 ==0){
            cout<<"Ganaste raramente : "<<card1<<", "<<card2<<", "<<card3<<endl;
            cout<<"Intentos realizados: "<<cont<<endl;
            salir =false;
        }else{
            if((card1== card2 && card3 ==0)||(card1 == card3 && card2 ==0)||(card2== card3 && card1 ==0)){
                cout<<"Ganaste: "<<card1<<", "<<card2<<", "<<card3<<endl;
                cout<<"Intentos realizados: "<<cont<<endl;
                salir =false;
            }
            else{
                if(card1==card2 && card2== card3|| card3 == card1 && card1== card2||card2==card3&& card3== card1){
                    cout<<"Ganaste: "<<card1<<", "<<card2<<", "<<card3<<endl;
                    cout<<"Intentos realizados: "<<cont<<endl;
                    salir =false;
                }
            }
        }
        cont++;
    }
}

void juego5(){
    srand(time(NULL));

    int jugador1,jugador2,jugador3,cont,turno=1,c1=0,c2=0;
    bool exitJugador1=true,exitJugador2=true;

    while(exitJugador1 || exitJugador2){

        if(turno%2 != 0 && exitJugador1==true){
            jugador1 = 0 + rand()%(7-0);
            jugador2 = 0 + rand()%(7-0);
            jugador3 = 0 + rand()%(7-0);
            if(jugador1== jugador2 && jugador3 ==0||(jugador1 == jugador3 && jugador2 ==0)||(jugador2== jugador3 && jugador1 ==0)){

                cout<<">Jugador 1 con:  "<<jugador1<<", "<<jugador2<<", "<<jugador3<<endl;
                cout<<"Intentos realizados: "<<cont<<endl;
                c1 = c1+cont;
                exitJugador1=false;
            }
        }else{
            if(turno%2 == 0 && exitJugador2==true){

                jugador1 = 0 + rand()%(7-0);
                jugador2 = 0 + rand()%(7-0);
                jugador3 = 0 + rand()%(7-0);
                if(jugador1== jugador2 && jugador3 ==0||(jugador1 == jugador3 && jugador2 ==0)||(jugador2== jugador3 && jugador1 ==0)){

                    cout<<">Jugador 2 con:  "<<jugador1<<", "<<jugador2<<", "<<jugador3<<endl;
                    cout<<"Intentos realizados: "<<cont<<endl;
                    c2 = c2+cont;
                    exitJugador2=false;
                }
            }
        }

        turno++;
        cont++;
    }

    cout<<'\n'<<endl;
    if(c1<c2){
        cout<<"Primer lugar!  : Jugador 1 "<<endl;
        cout<<"Segundo lugar!  : Jugador 2 "<<endl;
    }else{
        cout<<"Primer lugar!  : Jugador 2 "<<endl;
        cout<<"Segundo lugar!  : Jugador 1 "<<endl;
    }

    cout<<'\n'<<"Fin del juego!"<<endl;
}

void menu(){
    int opcion;
    cout<<"Juegos Yesvill.com    -Todos los derechos reservados-"<<'\n';
    bool exit = true;
    do{
        cout<<"\nMenu de juegos \n1: visualisar numeros randomicos\n2: numeros pares\n3: encontrar 3 numeros iguales \n4: obtener 3 numeros iguales en cartas (1-17)\n5: obtener 3 numeros competiendo con la maquina\n6: salir";
        cout<<'\n'<<'\n'<<"Digite (1-5) para seleccionar un juego: ";
        cin>>opcion;
        switch(opcion){
            case 1: cout<<"Juego consite mostrar numeros randomicos del 1-6:"<<'\n'<<endl;juego1();
            break;
            case 2: cout<<"Juego consite en obtener un numero par:"<<'\n'<<endl;juego2();
            break;
            case 3: cout<<"Juego consite en obtener una trica en dados (1-6):"<<'\n'<<endl;juego3();
            break;
            case 4: cout<<"Juego consite en obtener una trica en cartas (0-14) divertido (el numero cero es comodin):"<<'\n'<<endl;juego4();
            break;
            case 5: cout<<"Juego consite en obtener una trica competiendo con la maquina (el numero cero es comodin) y se mostrara quien gano primero:"<<'\n'<<endl;juego5();
            break;
            case 6: cout<<"www.Yesvill.com"; exit=false;
            break;
            default: cout<<"error dato no valido, solo opciones (1-6)";
        }

    }while(exit);

}
int main()
{
    menu();
    return 0;
}
