#include <iostream>
using namespace std;


class Figura{


public:
int b, h;
    float a;

    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};

class Cuadrado: public Figura{


};

class Rectangulo: public Figura{


};

class Triangulo: public Figura{


};