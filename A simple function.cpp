void f(const int a = 5){ 		//funcion que no retorna nada
	std::cout << a*2 << "\n";   // la salida es el doble del numero entero
}

int a = 123;    // se asigna a otra variable a el numero 123
int main(){     // funcion principal
	f(1);       // se llama a la funcion f y daria como salida el doble de 1
	f(a);       // se llama a la funcion f y daria como salida el doble de a = 123, que seria 246
	int b = 3;  // se asigna a una variable b el valor 3
	f(b);       // se llama a la funcion f y daria como resultado 6
	int a = 4;  // se asigna a a el numero 4
	f(a);       // se llama a la funcion f y daria como resultado 8
	f();        // es la funcion f principal en donde el resultado es 10 porque a es 5
}

/*
-   ¿Que salida produce el codigo?
	2
	246
	6
	8
	10

*/
