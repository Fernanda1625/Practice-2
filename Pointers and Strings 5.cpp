#include <iostream>
using namespace std;

int main() {

    char *oddOrEven = "Never odd or even";
    char *nthCharPtr = &oddOrEven[ 5 ];
    nthCharPtr = oddOrEven + 3;
    cout << *nthCharPtr<<endl; 				// e
    char **pointerPtr = &nthCharPtr;
    cout << pointerPtr<<endl; 				// e
    cout << **pointerPtr<<endl;     	    // direccion de memoria
    nthCharPtr++;
    cout << nthCharPtr - oddOrEven<<endl;   // 4

    return 0;
}
