#include <iostream>

using namespace std;

int main()
{
    int mat[4], *p, x;

    printf("%d\n", p = mat + 1);
/*    p = mat++;*/ printf("ERRO\n");
/*    p = ++mat;*/ printf("ERRO\n");
    printf("%d\n", x = (*mat)++);
}
