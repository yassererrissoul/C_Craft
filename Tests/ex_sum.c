#include <stdio.h>
#include <unistd.h>
#include "../../CCraft/ft_sum.c"

int	main(void)
{
    int i = 0;	
    int ts[][5] = {{2, 10, 13, -52, 0}, 
                    {2, 1, 37, -5, -2}};
    int ts2[] = {4, 11, 50, -57, -2};

    while (i < 5)
    {
        usleep(200000);
        if (ft_sum(ts[0][i], ts[1][i]) == ts2[i])
            printf("\033[32m---------------------\n%d - Passed\n---------------------\n\033[0m", i + 1);
        else 
            printf("\033[31m---------------------\n%d - Fault\nTest: (%d, %d)\nExpected: %d\nbut got: %d\n---------------------\n\033[0m", i + 1, ts[0][i], ts[1][i], ts2[i], ft_sum(ts[0][i], ts[1][i]));
        i++;
    }
}