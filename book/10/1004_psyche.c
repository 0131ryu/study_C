#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rain[60] = {0}, k, jul, met;

    for (met = 0; met < 60; met++)
        rain[met] = met % 27;
    for (k = 0; k < 200; k++)
    {
        system("cls");
        for (met = 0; met < 60; met++)
        {
            //[1번 방법] - start
            /*
            if (met % 2)
                {
                    if (rain[met] < 26)
                        rain[met]++;
                    else
                        rain[met] = 0;
                }
                else
                {
                    if (rain[met] > 0)
                        rain[met]--;
                    else
                        rain[met] = 26;
                }
            }
            */
            //[1번 방법] - end

            //[2번 방법] - start
            for (met = 0; met < 60; met++)
            {
                rain[met] += (met % 2 * 2 - 1);
                if (rain[met] > 26)
                    rain[met] = 0;
                else if (rain[met] < 0)
                    rain[met] = 26;
            }
            //[2번 방법] - end

            for (jul = 0; jul < 26; jul++)
            {
                for (met = 0; met < 60; met++)
                {
                    if (rain[met] == jul)
                        printf("<>");
                    else
                        printf("  ");
                }
                printf("\n");
            }
        }
        return 0;
    }
}