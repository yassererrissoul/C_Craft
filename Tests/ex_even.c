#include <stdio.h>
#include <unistd.h>
#include "../../CCraft/ft_even.c"

int	main(void)
{
    int i = 0;	
    int ts[] = {0, 5, 4, -25, -256, -13};
    int ts2[] = {1, 0, 1, 0, 1, 0};
    
    while (i < 6)
    {
        usleep(200000);
        if (ft_even(ts[i]) == ts2[i])
            printf("\033[32m---------------------\n%d - Passed\n---------------------\n\033[0m", i + 1);
        else 
            printf("\033[31m---------------------\n%d - Fault\nTest: (%d)\nExpected: %d\nbut got: %d\n---------------------\n\033[0m", i + 1, ts[i], ts2[i], ft_even(ts[i]));
        i++;
    }
}