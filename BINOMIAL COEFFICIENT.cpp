#include <bits/stdc++.h>>
using namespace std;
int binomialCoefficients(int n, int k) {
   int C[k+1];
   memset(C, 0, sizeof(C));
   C[0] = 1;
   for (int i = 1; i <= n; i++) {
      for (int j = min(i, k); j > 0; j--)
         C[j] = C[j] + C[j-1];
   }
   return C[k];
}
int main() {
   int n,k;
   cout << "Enter the elements: ";
   cin >> n;
   cout << "Enter the elements: ";
   cin >> k;
   cout<<"The value of C("<<n<<", "<<k<<") is "<<binomialCoefficients(n,k);
   return 0;
}
