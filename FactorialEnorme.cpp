#include <iostream>

using namespace std;
 //LUIS DAVID CASAS HERNANDEZ
int main()
{

    int n,fac=1,dig=0;

    cin>>n;

    if(n<1 || n>2000000){
        return 0;
    }
    for(int i=1; i<=n; i++){
        fac=fac*i;
    }

    while (fac > 0) {
        dig++;
        fac /= 10;
    }

    cout<<dig;

    return 0;
}
