#include <iostream>
using namespace std;
#define UN 0
#define N 9
#define s 3
bool Find(int g[N][N],int &r,int &c)
{
    for (r=0;r<N;r++)
        for (c=0;c<N;c++)
            if (g[r][c]==UN)
                return true;
    return false;
}
bool UsedInRow(int g[N][N],int r,int n)
{
    for (int c=0;c<N;c++)
        if (g[r][c]==n)
            return true;
    return false;
}
bool UsedInCol(int g[N][N],int c,int n)
{
    for (int r=0;r<N;r++)
        if (g[r][c]==n)
            return true;
    return false;
}
bool UsedInBox(int g[N][N],int bR,int bC,int n)
{
    for (int r=0;r<s;r++)
        for (int c=0;c<s;c++)
            if (g[r+bR][c+bC]==n)
                return true;
    return false;
}
bool isSafe(int g[N][N],int r,int c,int n)
{
    return !UsedInRow(g,r,n)&&!UsedInCol(g,c,n)&&!UsedInBox(g,r-r%s,c-c%s,n)&&g[r][c]==UN;
}

bool Solve(int g[N][N])
{
    int r,c;
    if (!Find(g,r,c))
    return true;
    for (int n=1;n<=N;n++)
    {
        if (isSafe(g,r,c,n))
        {g[r][c]=n;
         if (Solve(g))
                return true;

            g[r][c]=UN;
        }
    }
    return false;}


int main()
{
 int g[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    if (Solve(g)==true){
       for (int r=0;r<N;r++)
    {
    for (int c=0;c<N;c++)
            cout << g[r][c]<< " ";
        cout<<endl;
    }}


    return 0;
}
