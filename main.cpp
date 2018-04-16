#include <cstdlib>
#include <iostream>
#include <fstream>
// 12-1 antroji dalis
using namespace std;

int main(int argc, char *argv[])
{
    const int MAX=50;
    int m, n;
    int dm[MAX][MAX];
    ifstream f("matrica.txt");
    if (f.fail()) cout << "Nerandam failo" << endl;
    f >> n >> m;
    for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
    f >> dm[i][j];
    cout << "Duotas masyvas:\n";
        for (int i=0; i<n; i++)
        {
    for (int j=0; j<m; j++)
cout << dm[i][j] << "\t";
cout << endl;
}
int nk=0; // nuliniu stulpeliu kiekis
    for (int j=0; j<m; j++)
    {
        bool yra=true; // tarkime ten visi nuliai
        for (int i=0; i<n; i++)
            if (dm[i][j]!=0)yra=false;
        cout << j << " stulpelyje";
        if (yra)
        {
            cout << " visi nuliai." << endl;
            nk++;
        }

        else cout << " ne visi nuliai." << endl;
        }
        if (nk==0) cout << "Nuliniu stulpeliu nera." << endl;
        else cout << "Nuliniu stulpeliu yra." << endl;
     f.close();
    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
