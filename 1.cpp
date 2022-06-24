#include <iostream>
#include <cmath>
using namespace std;
float fun(int** mas, int n, int m) {
    int min_n = 0, min_m = 0, max_n = 0, max_m = 0;
    for (int ni = 0; ni < n; ni++) {
        for (int mj = 0; mj < m; mj++){
            if (mas[ni][mj] <= mas[min_n][min_m]){
                min_n = ni;
                min_m = mj;
            }
            if (mas[ni][mj] >= mas[min_n][min_m]){
                max_n = ni;
                max_m = mj;
        }
    }
  }
    return sqrt(pow((min_n - max_n), 2) + pow((min_n - max_m), 2));       
}
int main() {
    int n; int m;
    cout << "input";
    cin >> n >> m;
    int **mas = new int*[n];
    for (int i = 0; i < n; i++)
        mas[i] = new int[n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> mas[i][j];
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << mas[i][j];
            }
        }
        cout << fun(mas, n, m);
}
