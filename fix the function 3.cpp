#include <iostream>

void doubleNumber(int& num) { num = num *2;} // paso por referencia, le pasamos la direccion de memoria de nuestra variable

int main(){
	int num = 35;
	doubleNumber(num);
	std:: cout<<num;
	return 0;
}
