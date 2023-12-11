#include <stdio.h>
#include <unistd.h>
#include "../../ft_num_alpha.c"


int	main(void)
{
    int i = 0;	
    char ts[] = {'C', 'c', 'R', 'a', 'F', 't', ';', '-', '8'};
    int ts2[] = {3, 3, 18, 1, 6, 20, -1, -1, -1};

    while (i < 9)
    {
        usleep(200000);
        if (ft_num_alpha(ts[i]) == ts2[i])
            printf("\033[32m---------------------\n%d - Passed\n---------------------\n\033[0m", i + 1);
        else 
            printf("\033[31m---------------------\n%d - Fault\nTest: ('%c')\nExpected: %d\nbut got: %d\n---------------------\n\033[0m", i + 1, ts[i], ts2[i], ft_num_alpha(ts[i]));
        i++;
    }
}