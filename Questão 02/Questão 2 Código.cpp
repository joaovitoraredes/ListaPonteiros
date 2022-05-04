#include <iostream>

using namespace std;

int main()
{
    int i=5, *p;
    p = &i;
    printf("%x \n%d \n%d \n%d \n%d", p,*p+2,**&p,3**p,**&p+4);
}
