#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main() {
    double x1,x2,y1,y2,d;
    cout<<"programa para calcular la distancia en tre dos puntos "<<endl;
    cout <<"nombre del autor: david almanza lopez" <<endl;
    cout <<"fecha: 14/10/2024" <<endl;
    cout<<"x1:";
    cin >> x1;
    cout<<"y1:";
    cin >> y1;
    cout<<"x2:";
    cin >> x2;
    cout<<"y2:";
    cin >> y2;

    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"la distancia entre los dos puntos es: ";
    cout<<d;
    cout <<endl;
  return 0;
}
