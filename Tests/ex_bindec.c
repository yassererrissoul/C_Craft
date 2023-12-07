#include <stdio.h>
#include <unistd.h>
#include "../../ft_bindec.c"

int	main(void)
{
    int i = 0;	
    char ts[][13] = {"01010101", "00110100", "01110110", "10010110", "01ubella", "10201500", "101101100"};
    int ts2[] = {85, 52, 118, 150, -1, -1, -1};

    while (i < 7)
    {
        usleep(200000);
        if (ft_bindec(ts[i]) == ts2[i])
            printf("\033[32m---------------------\n%d - Passed\n---------------------\n\033[0m", i + 1);
        else 
            printf("\033[31m---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: %d\nbut got: %d\n---------------------\n\033[0m", i + 1, ts[i], ts2[i], ft_bindec(ts[i]));
        i++;
    }
}