#include "figuras.h"

#include <iostream>

using namespace std;


int main () {

    Cuadrado s(5);
    cout << s.getArea() << endl; // 25
    Rectangulo r(5,5);
    cout << r.getArea() << endl; // 25
    Triangulo t(5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}


    Figura:: Figura(){
       this -> b=0;
       this ->  h=0;
        this -> a=0.0;


    }

     Figura:: Figura(int b, int h){
       this-> b=b;
        this -> h=h;

     }

     void Figura :: setArea(float a){
     this -> a = a;

     }

     float Figura:: getArea(){
       return this-> a;

     }