#include <iostream>
using namespace std;

int main()
{
    float v1[3], v2[3], v3[3];
    double pe, i, j, k;
    int ix;
    
    cout << "Introduce los valores del primer vector" << endl;
    for (ix = 0; ix < 3; ix++);
    {
        cin >> v1[ix];
    }
    cout << "Introduce los valores del segundo vector" << endl;
    for (ix = 0; ix < 3; ix++);
    {
        cin >> v2[ix];
    }
    cout << "Introduce los valores del tercer vector" << endl;
    for (ix = 0; ix < 3; ix++);
    {
        cin >> v3[ix];
    }    
    
    i=(v2[1]*v3[2])-(v3[1]*v2[2]);
    j=(v2[0]*v3[2])-(v3[0]*v2[2]);
    k=(v2[0]*v3[1])-(v3[0]*v2[1]);  
	pe=(v1[0]*i)-(v1[1]*j)+(v1[2]*k);
        
    cout<<"El producto escalar es: "<< pe << endl;

    return 0;
 }
