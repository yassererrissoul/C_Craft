#include <stdio.h>
#include <unistd.h>
#include "../../ft_atoi.c"

int	main(void)
{
    int i = 0;	
    char ts[][13] = {"Hello World!", "13Youbella50", "120", "-1598", "0", "", "   -++-+-1325abcd", "   +254C"};
    int ts2[] = {0, 13, 120, -1598, 0, 0, 0, 254};

    while (i < 8)
    {
        usleep(200000);
        if (ft_atoi(ts[i]) == ts2[i])
            printf("\033[32m---------------------\n%d - Passed\n---------------------\n\033[0m", i + 1);
        else 
            printf("\033[31m---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: %d\nbut got: %d\n---------------------\n\033[0m", i + 1, ts[i], ts2[i], ft_atoi(ts[i]));
        i++;
    }
}