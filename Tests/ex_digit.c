#include <stdio.h>
#include <unistd.h>
#include "../../ft_digit.c"

int	main(void)
{
    int i = 0;	
    int ts[] = {1234, 5, 0, 12358475, -256, -13};
    int ts2[] = {4, 1, 1, 8, 3, 2};
    
    while (i < 6)
    {
        usleep(200000);
        if (ft_digit(ts[i]) == ts2[i])
            printf("\033[32m---------------------\n%d - Passed\n---------------------\n\033[0m", i + 1);
        else 
            printf("\033[31m---------------------\n%d - Fault\nTest: (%d)\nExpected: %d\nbut got: %d\n---------------------\n\033[0m", i + 1, ts[i], ts2[i], ft_digit(ts[i]));
        i++;
    }
}