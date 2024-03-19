#include <iostream>
using namespace std;


class Figura{
private:
int b, h;
    float a;

public:

    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};

class Cuadrado: public Figura{
public: 
Cuadrado():Figura(){}; 
Cuadrado(int b):Figura(b, b){
   this->setArea(b*b);
};


};

class Rectangulo: public Figura{
public: 
Rectangulo():Figura(){};
Rectangulo(int b, int h):Figura(b,h){
    this->setArea(b*h);
};


};

class Triangulo: public Figura{
public: 
Triangulo():Figura(){};
Triangulo(int b, int h):Figura(b,h){
this->setArea(b*h/2);
};

};



