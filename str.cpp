#include<stdio.h>
#include<string.h>

main()
{
    char str [100];
    int i = 0;

    while ((i == 0) || (i > 99) )
    {    
        printf ("vvod\n");
        gets (str);
        i  = strlen (str);
    }

    printf ("vtoroy  element stroki %c", str [1]);
    printf ("\n\n");

    
    printf ("posledniy simvol.: %c", str [i - 1]);
    printf ("\n\n");

    int a, b;
    
    while (((a < 1) || (a > i)) || (b < 1) || (b > i))
    {
        printf ("total: %i\n", i);
        printf ("vvod elementa stroki dlya zameny\n");
        scanf ("%i",&a);
        scanf ("%i",&b);
    }

    char c = str [a - 1];
    str [a - 1] = str [b - 1];
    str [b - 1] = c;
    printf ("vvivod posle perestanovki: \n");
    puts (str);

    int d = 0;
    while ((d < 1) || (d > i))
    {
        printf ("nomer stroki dlya ydaleniya : ");
        scanf ("%i", &d);
    }

    for (int j = d - 1; j < i; j++)
    {
        str [j] = str [j + 1];
    }
    printf ("vvivod: \n");
    puts (str);
}
