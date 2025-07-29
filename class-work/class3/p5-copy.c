// 5
#include <stdio.h>
void main() {
    int day, mon, year, nday, nnon, nyear;
    printf("insert day ,month and year\n");
    scanf("%d%d%d", &day, &mon, &year);
    
    // Check valid
    if(! valid){
        print not valid;
        return;
    }
    

    switch(day){
        case 31:
         // Next month;
         if (mon=12){
            ..
         } else {
            mon+
         }
        case 30: 
         if(short_mon)
        case 29:
            if(mon == 2){
                // NEXT MON
            }
            break;
        case 28:
            if(mon == 2){
                if(MEUBERET){
                    DAY+
                } ELSE {
                    MON+
                }
            }
        default:
            day++;
    }
    
    switch (mon) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if (day == 31) {
                mon++, day = 1;
            } else {
                day++;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day == 30) {
                mon++, day = 1;
            } else
                day++;
        case 2:
            if (day == 28)
                if (year % 4 == 0) {
                    day++;
                } else {
                    mon++, day = 1;
                }
            if (day == 29) {
                mon++, day = 1;
            }
            break;
        case 12:
            if (day == 31) {
                year++, mon = 1, day = 1;
            }
        default:

            
    }
    printf("next day is %d.%d.%d", day, mon, year);
}