#include <iostream>
#include <math.h>
using namespace std;

void input(int &q, int x[], int y[], int z[])
{
    cin >> q;
    for(int i = 0; i < q; i++)
       cin >> x[i] >> y[i] >> z[i];
}

string cat_And_Mouse(int i, int x[], int y[], int z[])
{
        if(abs(z[i] - x[i]) == abs(z[i] - y[i]))
            return "Mouse C";
        else if (abs(z[i] - x[i]) < abs(z[i] - y[i]))
            return "Cat A";
        else
            return "Cat B";
    
}
void loop_cat_and_mouse(int q, int x[], int y[], int z[])
{
    for(int  i = 0 ; i < q; i++)
        cout << cat_And_Mouse(i, x, y, z) << endl;
}
int main()
{
    int q, x[100], y[100], z[100];
    input(q, x, y, z);   
    loop_cat_and_mouse(q, x, y, z);
}