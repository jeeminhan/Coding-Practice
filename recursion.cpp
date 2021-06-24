#include <iostream>
using namespace std;


long long int f(long long int n, long long int k)        {         
  long long int b;         
  b=k+2;
  cout << "B: " << b << " N: " << n << " K: " << k << endl;         
  if (n==0) b = 8;         
  else b = b + 4 * n + f(n-1,k+1);         
  return b + k;       
}

int main() {
    long long int temp = f(2,4);
    cout << "This is temp " << temp << endl;
}
