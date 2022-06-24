#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
    srand((int)time(0));
    int N, M, imin=0, jmin=0, imax=0, jmax=0;
    cout << "N="; cin >> N;
    cout << "M="; cin >> M;
    
      double **a = new double*[N]; 
    for (int i = 0; i < N; i++)
      a[i]=new double[M];
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            a[i][j]=rand()%9 + 1;
            if (a[i][j]<a[imin][jmin]) {imin=i;jmin=j;}
            if (a[i][j]>a[imax][jmax]) {imax=i;jmax=j;}
        cout << a[i][j] << " ";
        }
    cout << "\n";
    }
    
    cout << "min=" << a[imin][jmin] << "  coordinates (" << imin+1 <<  ";" << jmin+1 << ")\n"; 
    cout << "max=" << a[imax][jmax] << "  coordinates (" << imax+1 <<  ";" << jmax+1 << ")\n"; 
    
    swap(a[imin][jmin],a[imax][jmax]);
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)        
            cout << a[i][j] << " ";        
    cout << "\n";
    }    
 
    for (int i = 0; i < N; i++)
    delete[]a[i];
    delete[]a;
system("pause");
return 0;
}
