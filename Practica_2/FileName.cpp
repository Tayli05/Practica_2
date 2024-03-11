/*Dada las coordenadas opuestas en diagonal de un grupo de objetos
identifique el nombre mas adecuado para representar dicha agrupacion
si se desea contornar las mismas considerando que las esquinas deben
tener un angulo de 90 grados. considere que los objetos siempre estaran
en el primer cuadrante. La primera coordenada siempre es superior  a la 2da
y esta siempre a la izquierda de la segunda .Permita demostrar que se puede
calcular el area de esos objetos. Defina al menos 2 objetos.
*/
#include <iostream>
#include <string>

using namespace std;

// cambie de struct a class para que los atributos sean privados y no puedan ser modificados
// utilice un constructor para inicializar los valores en 0
// tambien porque pedia un comportamiento en una clase y solo tenemos 1 :D
class Objeto {
private:
    string angulo;
    int IzqX;
    int IzqY;
    int DerX;
    int DerY;

public:
    // el constructor inicializa los valores de los atributos "aun no tienen un valor"
    Objeto(const string& a, int x1, int y1, int x2, int y2)
        : angulo(a), IzqX(x1), IzqY(y1), DerX(x2), DerY(y2) {}

    // Constructor que inicializa todo a cero
    // lo que esta en parentesis es una lista de inicializacion y pueden cambiar el nombre
    // solo lo puse por que si UwU
    Objeto() : angulo("Angel :D"), IzqX(0), IzqY(0), DerX(0), DerY(0) {}

    int Area() const {
        int largo = DerX - IzqX;
        int ancho = IzqY - DerY;
        return largo * ancho;
    }
    // imprimir llegaria a ser el comportamiento de la clase
    void imprimir() const {
        cout << "Objeto: " << angulo << endl;
        cout << "Coordenadas: Izquierda X=" << IzqX << endl << "Izquierda Y=" << IzqY << endl
            << "Derecha X=" << DerX << endl << "Derecha Y=" << DerY << endl;
        cout << "Area: " << Area() << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {

    Objeto objeto1("Objeto1", 0, 3, 4, 0);
    Objeto objeto2("Objeto2", 2, 5, 6, 1);

    objeto1.imprimir();
    objeto2.imprimir();

    return 0;
}