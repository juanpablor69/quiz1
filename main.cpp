#include <iostream>

using namespace std;

int main()
{
    int n,a=2,con=0, ultim, p;
    float prim;
    cout << "Ingrese un valor para la variable n->";
    cin >> n;
    for (int i=1; i<a; ++i) { //averiguaremos cuantos digitos tiene n
        a=n/10;
        con=con+1;
    }
    if (con==4) {
        prim=int(n/1000);
        ultim=int(n%10);
        p = 4+32;
    }

    cout << "La suma de cada uno de los digitos elevados a si mismos del numero " << n << " es " << p <<endl;
    return 0;
}
