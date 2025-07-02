#include <iostream>
using namespace std;

void print_n_to_m(int n, int m){
    if(n > m) return;
    cout << n << endl;
    print_n_to_m(n+1, m);
}

int main(){
    int n;
    int m;
    cin >> n >> m;
     print_n_to_m(n, m);
}