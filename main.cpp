//autor Juan Pablo Sanchez Gaitan


#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <cstdio>
#include <fstream>


#define maxin 20
#define memax 14
using namespace std;

void mesadejuego(int*);
void datosjugadores(int*, struct players mesa[memax]);
void barajadecartas(struct mesa cartas[52]);

struct players {
    int codigo, edad, fichas;
    string nombre;
    string manodecartas;
    char cartas[6]; // igual al distintivo
    char* tipo[6];
    char* color[2];
    double dinero =0;
};
struct mesa {
    char color;
    char distintivo;
    char tipo;
};

int main()
{
    int menu;
    int jugadores;
    struct mesa cartas[52];
    struct players mesa[memax];
    int op;
    cout << "Menu de inicio del poker" << endl;
    cout << " 1. jugar" << endl;
    cout << " 2. Instrucciones" << endl;
    cout << " 3. salir " << endl;
    cin >> menu;
    if (menu == 1) {

        system("cls");
        cout << " 1. Solitario ( Single player) " << endl;
        cout << " 2. Duos " << endl;
        cout << " 3. Contra 14 personas " << endl;
        cin >> op;
        if (op == 1) {
            jugadores = 2;
           // datosjugadores(&jugadores,mesa);
            barajadecartas(cartas);
           // mesadejuego(&jugadores);
            cout << "Preparando mesa de juego" << endl;
            cout << "espera un momento mientas los demas jugadores se preparan" << endl;

        }

    }

}
void barajadecartas(struct mesa cartas[52]) {
    FILE * mano = fopen("cartas.txt","r");
    char carta;
    int i=0;
    while(feof(mano)== 0){
           carta = fgetc(mano);
            
	}
	cout<<cartas[0].color<<endl;

}

void datosjugadores(int* jug, struct players mesa[memax]) {
    for (int i = 0; i < *jug; i++) {
        cout << "nombre del jugador " << i << endl;
        cin >> mesa[i].nombre;
        cout << "Por favor " << mesa[i].nombre << "dijita tu edad" << endl;
        cin >> mesa[i].edad;
        if (mesa[i].edad >= 18) {
            cout << "Cuanto dinero quiere apostar?" << endl;
            cin >> mesa[i].dinero;
            mesa[i].fichas = mesa[i].dinero / 10000;

            cout << "Tus fichas son: " << mesa[i].fichas << endl;
        }
        else {
            cout << "No tienes la edad minima de juego que son los 18 años lo sentimos no puedes jugar " << mesa[i].nombre << endl;
        }
    }
}/**
void mesadejuego(int* jug,struct players mesa[memax]) {
    bool ganador = false;

    do {
        for()

    } while (ganador == false);



}

**/
