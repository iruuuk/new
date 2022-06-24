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
for (int j = 0; j < M; j++)
    A[j] = new int[M];
cout << "Введите значения матрицы: \n";

for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++) {
        printf("\nA[%d][%d] = ", i, j);
        cin >> A[i][j];
    }
    
cout << "Вот Ваша матрица:" << endl << endl;
for (int i = 0; i < N; i++)
{
    for (int j = 0; j < M; j++)
        cout << A[i][j] << " ";
    cout << endl;
}
cout << "\nИскомые суммы в столбцах:" << endl;
for (int i = 0; i < N; i++)
{
    summ = 0;
    for (int j = 0; j < M; j++)
    {
        if (A[i][j] >= 0) summ += A[i][j];
    }

    cout << "Строка №" << i + 1 << ": " << summ << endl;
}
}
