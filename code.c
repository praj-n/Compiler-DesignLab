#include <stdio.h>

int _test;
_test = 20;
float __test = -10.123;

int abs(int a);

int main()
{
    char d = 'a' + 'b';
    int c = (1 + 2) - 3 * (2 / 3);

    if (1 > 2 || _test == 3 && !(__test > +1.123))
    {
        printf("Hello World");
    }
    else if (100 > 3)
    {
        if (0)
        {
            printf("%d\n", __test);
        }
        else
        {
            printf("Hello");
        }
    }

    for (int i = 0; i < 10; i++)
    {
        abs();
    }

    while (0)
    {
        printf("%d\n", abs());
    }
}

int abs(int a)
{
    printf("%d\n", a);
    return 0;
    return;
}
