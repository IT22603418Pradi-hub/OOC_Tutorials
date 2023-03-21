#include <iostream>

long Factorial(int n);
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
long Factorial(int n){
  int facn = 1, i; 

  for (int i = n; i >= 1; i--) {
    facn = facn * i;
  }
  
  return facn;
}
long nCr(int n, int r){
  int facr = 1, j, facnr = 1, k; 

  for (int j = r; j >= 1; j--) {
    facr = facr * j;
  }

  for (int k = (n - r); k >= 1; k--) {
    facnr = facnr * k;
  }

  nCr = facn / facr * facnr;
  
  return ncr;
}