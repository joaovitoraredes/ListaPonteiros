#include <iostream>

using namespace std;

int main()
{
    int i, j, *p, *q;

/*      printf("%d\n", p = i);*/ printf("Atribuicao Ilegal\n");
        printf("%d\n", q = &j);
        printf("%d\n", p = &*&i);
/*      printf("%d\n", i = (*&)j);*/ printf("Atribuicao Ilegal\n");
        printf("%d\n", i = *&j);
        printf("%d\n", i = *&*&j);
/*      printf("%d\n", q = *p);*/ printf("Atribuicao Ilegal\n");
        printf("%d\n", i = (*p)++ + *q);

}
