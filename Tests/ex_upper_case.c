#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "../../ft_upper_case.c"

int	main(void)
{
    int i = 0;
    char ts[][17] = {"Hello World!", "YouBella", "\tGreat", "1234", "I,m 18 years old", "", "01+GOOD-10"};
    char tsc[][17] = {"Hello World!", "YouBella", "\tGreat", "1234", "I,m 18 years old", "", "01+GOOD-10"};
    char ts2[][17] = {"HELLO WORLD!", "YOUBELLA", "\tGREAT", "1234", "I,M 18 YEARS OLD", "", "01+GOOD-10"};

    while (i < 7)
    {
        usleep(200000);
        if (strcmp(ft_upper_case(ts[i]), ts2[i]) == 0)
            printf("\033[32m---------------------\n%d - Passed\n---------------------\n\033[0m", i + 1);
        else 
            printf("\033[31m---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: \"%s\"\nbut got: \"%s\"\n---------------------\n\033[0m", i + 1, tsc[i], ts2[i], ft_upper_case(ts[i]));
        i++;
    }
}