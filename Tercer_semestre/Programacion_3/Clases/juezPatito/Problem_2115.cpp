#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
void criba(int n,vector<int> &listaPrimos, vector<bool> &esprimo) {
 
    
    for (int i = 2; i * i <= n; ++i) {
        if (esprimo[i]) {
            for (int j = i * i; j <= n; j += i) {
                esprimo[j] = false;
            }
        }
    }
    int acumulado = 0;
    for (int j = 1; j <= n; j++) {
        if (esprimo[j]) {
            acumulado += j;
        }
 
        listaPrimos[j] = acumulado;
        
    }
} 
int main() {
 
    const int limit = 100000;
    vector<bool> esprimo(limit + 2, true);
    esprimo[0] = esprimo[1] = false;
 
    vector<int> listaPrimos(limit + 2, 0);
 
    criba(limit + 1, listaPrimos, esprimo);
 
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; ++i) {
        int a, b;
        cin >> a >> b;
        int suma = listaPrimos[b] - listaPrimos[a - 1];
        cout << suma << endl;
    }
 
    return 0;
}
