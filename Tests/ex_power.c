#include <stdio.h>
#include <unistd.h>
#include "../../ft_power.c"

int	main(void)
{
    int i = 0;	
    int ts[][7] = {{2, 10, 13, -52, -5, 350, -25}, 
                    {2, 4, 6, 5, 0, -5, -1}};
    int ans[] = {4, 10000, 4826809, -380204032, 1, -1, -1};

    while (i < 7)
    {
        usleep(200000);
        if (ft_power(ts[0][i], ts[1][i]) == ans[i])
            printf("\033[32m---------------------\n%d - Passed\n---------------------\n\033[0m", i + 1);
        else 
            printf("\033[31m---------------------\n%d - Fault\nTest: (%d, %d)\nExpected: %d\nbut got: %d\n---------------------\n\033[0m", i + 1, ts[0][i], ts[1][i], ans[i], ft_power(ts[0][i], ts[1][i]));
        i++;
    }
}