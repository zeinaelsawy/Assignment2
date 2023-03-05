#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Header1.h"

using namespace std;

int main() 
{
    //declaration
    srand(time(nullptr));
    const int x = 200;
    const int y = 20;
    const int X = 2 * x;
    const int Y = 2 * y;
    float M[X];
    float N[X];
    float P[Y];
    
    for (int i = 0; i < X; ++i) 
    {
        M[i] = rand() % 19 + 71;
        N[i] = rand() % 19 + 21;
    }
    for (int j = 0; j < Y; j += 2) 
    {
        P[j] = rand() % 94 + 6;
        P[j + 1] = rand() % 94 + 6;
    }
    Point cent1;
    cent1.Center(M, x);
    float Mx = cent1.getX();
    float My = cent1.getY();
    cout << "Center of cluster A: (" << Mx << ", " << My << ")\n";
    Point cent2;
    cent2.Center(N, x);
    float Nx = cent2.getX();
    float Ny = cent2.getY();
    cout << "Center of cluster B: (" << Nx << ", " << Ny << ")\n";
    Point point;
    point.Assign(Mx, My, Nx, Ny, P, Y);
    return 0;
}
