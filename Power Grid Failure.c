#include <stdio.h>

int main() {
    int dataPack, n, usage, i = 0, exhaustedDay = -1, overuse = 0;
    scanf("%d %d", &dataPack, &n);
    while (i < n) {
        scanf("%d", &usage);
        if (exhaustedDay == -1) {
            dataPack -= usage;
            if (dataPack <= 0) {
                exhaustedDay = i + 1;
                overuse = (dataPack < 0) ? -dataPack : 0;
            }
        }
        i++;
    }
    if (exhaustedDay != -1){
     printf("Exhausted Day: %d\nOverused Data: %d\n", exhaustedDay, overuse);
    }
    else{

     printf("Exhausted Day: Not Exhausted\nOverused Data: 0\n");
    }
    return 0;
}
