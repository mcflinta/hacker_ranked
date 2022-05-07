#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char *step = new char [n];
    for(int i = 0; i < n; i++)
        cin >> step[i];
    int ground = 0;
    int temp = 0;
    for(int i = 0; i < n; i++)
    {
        if(step[i] == 'U')
            ++ground;
        if(step[i] == 'D')
            --ground;
        if(ground == 0 && step[i] == 'U')
            ++temp;
    }
    cout << temp;
    return 0;
}