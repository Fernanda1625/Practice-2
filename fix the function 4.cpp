#include <iostream>
#include <cstdlib>

int difference (const int x, const int y){
	int diff = abs (x -y);
	return diff; // una funcion de tipo entero debe retornar un entero
}

int main(){
	std::cout<<difference(24 , 1238);
	return 0;
}
