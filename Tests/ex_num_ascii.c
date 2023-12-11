#include <stdio.h>
#include <unistd.h>
#include "../../ft_num_ascii.c"


int	main(void)
{
    int i = 0;	
    char ts[] = {'a', 'C', 'Y', '+', ';', '.', '{', '8'};
    int ts2[] = {97, 67, 89, 43, 59, 46, 123, 56};

    while (i < 8)
    {
        usleep(200000);
        if (ft_num_ascii(ts[i]) == ts2[i])
            printf("\033[32m---------------------\n%d - Passed\n---------------------\n\033[0m", i + 1);
        else 
            printf("\033[31m---------------------\n%d - Fault\nTest: ('%c')\nExpected: %d\nbut got: %d\n---------------------\n\033[0m", i + 1, ts[i], ts2[i], ft_num_ascii(ts[i]));
        i++;
    }
}