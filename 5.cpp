#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int N, M, summ, min = 0;
cout << "Введите размер матрицы: \n";
cin >> N >> M;
int** A = new int* [N];
for (int i = 0; i < N; i++)
    A[i] = new int[M];
cout << "Введите значения матрицы: \n";

for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++) {
        printf("\nA[%d][%d] = ", i, j);
        cin >> A[i][j];
    }

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < M; j++)
        cout << A[i][j] << " ";
    cout << endl;
}
cout << "Ответ:" << endl;
for (int j = 0; j < M; j++)
{
    summ = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i][j] % 2 == 0 && j % 2 == 1) summ += A[i][j];
    }

    cout << summ << endl;
    
}

}
