#include <iostream>
using namespace std;

void PrintArray( int *arr, int size ) {
    for( int i = 0; i < size -1 ; ++i ){
        cout << arr[ i ] << ", ";
	}
    cout << arr[ size - 1 ] << endl;
}

int main() {

    int arr[ 5 ] = { 1, 2, 3, 4, 5 };
    int size = sizeof( arr ) / sizeof( arr[ 0 ]);
    PrintArray( arr, size );

    return 0;
}
