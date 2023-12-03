#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)

void addMatrices(int m, int n, int mat1[][n], int o, int p, int mat2[][p], int result[][p]) {
    REP(i, 0, m){
        REP(j, 0, p){
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
        
            
}

int main() {
    int m, n, o, p;
    cin >> m >> n;
    cin >> o >> p;
    
    int mat[m][n];
    int mat2[o][p];

    REP(i, 0, m) REP(j, 0, n) cin >> mat[i][j];
    REP(i, 0, o) REP(j, 0, p) cin >> mat2[i][j];
    
    if (n != o) {
        cout << "Matrices cannot be multiplied!";
        return 0;
    }
    
    // Matrix Multiplication
    int ans[m][p];
    memset(ans, 0, sizeof(ans)); 
    
    REP(i, 0, m) REP(j, 0, p) REP(k, 0, n) ans[i][j] += mat[i][k] * mat2[k][j];
    
    //Matrix Multiplication result
    cout << "Matrix Multiplication Result:" << endl;
    REP(i, 0, m) {
        REP(j, 0, p) cout << ans[i][j] << " ";
        cout << endl;
    }
    
    //Matrix Addition
    if (m != o || n != p) {
        cout << "Matrices cannot be added!";
        return 0;
    
    
    int sum[m][n];
    addMatrices(m, n, mat, o, p, mat2, sum);
    
    //Matrix Addition result
    cout << "Matrix Addition Result:" << endl;
    REP(i, 0, m) {
        REP(j, 0, n) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    }
    return 0;
}