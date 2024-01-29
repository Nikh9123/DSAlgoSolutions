// CPP program to Decimal to binary conversion 
// using bitwise operator 
// Size of an integer is assumed to be 32 bits 
#include <iostream> 
using namespace std; 

// Function that convert Decimal to binary 
void decToBinary(int n) 
{ 
	// Size of an integer is assumed to be 32 bits 
	for (int i = 31; i >= 0; i--) { 
		int k = n >> i; 
		if (k & 1) 
			cout << "1"; 
		else
			cout << "0"; 
	} 
} 

// driver code 
int main() 
{ 
	int n = 2; 
	decToBinary(n); 
}
