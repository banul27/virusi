#include <iostream>
using namespace std;

int v[100001], cop[100001];
int main()
{
    int n, m, x, y, a[100001], i, j, p, contor, aux;
    cin >> n >> m;
    for(i=0; i<n; i++)
        cin >> v[i];
    for(p=0; p<m; p++){
        cin >> x >> y;
        contor=1;
        if(x==y)
            cop[p]=1;
        else{
            if(x>y)
                swap(x, y);
            for(i=x; i<=y; i++)
                a[i]=v[i];
            for(i=x; i<=y; i++)
                for(j=i+1; j<=y; j++)
                    if(a[i]>a[j]){
                        aux=a[i];
                        a[i]=a[j];
                        a[j]=aux;
                    }
            for(i=x; i<y; i++)
                if(2*a[i]<a[i+1]){
                    contor=0;
                    i=y;
            }
            if(contor==1)
                cop[p]=1;
            else
                cop[p]=0;
        }
    }
    for(i=0; i<m; i++)
        if(cop[i]==1)
            cout << "DA" << endl;
        else
            cout << "NU" << endl;
    return 0;
}
