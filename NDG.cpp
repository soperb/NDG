/*
-pt i = 2 la n executa
    -determina tata = [i/2]
    -atata timp v[tata] > v[i] si tata >= 1
        -interschimb v[tata] si v[i]
        -fiu = tata
        -tata = [fiu/2]
*/
#include<iostream>
using namespace std;
int  n;
int tata,fiu;

int main()
{



for(int i=2;i>=n;i++)
{
    tata=i/2;
    while(v[tata]>v[i]&&tata>=1)
    {
        int aux;
        aux=v[tata];
        v[tata]=v[i]
        v[i]=aux
        //v[tata]=v[i];

    }
}
}
