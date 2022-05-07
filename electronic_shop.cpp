#include <iostream>
using namespace std;

void input(int &n, int &m, int &b, int keyboard[], int drive[])
{
    cin >> b;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> keyboard[i];
    for(int i = 0; i < m; i++)
        cin >> drive[i];

}
int compare(int n, int m, int b, int keyboard[], int drive[])
{
    int max = -1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if((max < (keyboard[i] + drive[j])) && (b >= (keyboard[i] + drive[j])))
                max = keyboard[i] + drive[j];
        }
    }
    return max;
}
int main()
{
    int b, n, m;
    int keyboard[1000];
    int drive[1000];
    input(n, m, b, keyboard, drive);
    cout << compare(n, m, b, keyboard, drive);
    return 0;
}