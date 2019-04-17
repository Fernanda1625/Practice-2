#include <iostream>

int sum (const int x, const int y,  const int z){
	return x + y + z;
}

int main(){
	std::cout<< sum(1,2,3); // Al ser tres valores, la funcion sum debe tener tres valores, y solo tenia dos
	return 0;
}
