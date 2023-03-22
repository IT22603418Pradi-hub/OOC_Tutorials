#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
	int n, r;
	std::cout << "Enter a value for n ";
	std::cin >> n;
	std::cout << "Enter a value for r ";
	std::cin >> r;
	std::cout << "nCr = ";
	std::cout << nCr(n,r);
	std::cout << std::endl;
}
long Factorial(int no){
  	int facn = 1, i; 

  	for (int i = no; i >= 1; i--) {
    	facn = facn * i;
  	}
  
  	return facn;
}
long nCr(int n, int r){
  	int ncr; 

  	ncr = Factorial(n) / (Factorial(r) * Factorial(n - r));
  
  	return ncr;
}

  nCr = facn / facr * facnr;
  
  return ncr;
}
