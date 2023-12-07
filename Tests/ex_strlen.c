#include <stdio.h>
#include <unistd.h>
#include "../../ft_strlen.c"

int	main(void)
{
    int i = 0;	
    char ts[][13] = {"Hello World!", "Youbella", "\tGreat", "1234", "0", ""};
    int ts2[] = {12, 8, 6, 4, 1, 0};

    while (i < 6)
    {
        usleep(200000);
        if (ft_strlen(ts[i]) == ts2[i])
            printf("\033[32m---------------------\n%d - Passed\n---------------------\n\033[0m", i + 1);
        else 
            printf("\033[31m---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: %d\nbut got: %d\n---------------------\n\033[0m", i + 1, ts[i], ts2[i], ft_strlen(ts[i]));
        i++;
    }
}