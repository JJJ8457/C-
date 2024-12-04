#ifndef _REPORT_H
#define _REPORT_H
#include <stdio.h>
#include <time.h>

int week2(int year, int month, int day){
    time_t current;
    time_t myday;
    int different;
    struct tm* timeinfo;
    
    current = time(NULL);
    timeinfo= localtime(&current);
    
    timeinfo->tm_year = year - 1900;
    timeinfo->tm_mon = month -1;
    timeinfo->tm_mday = day;
    
    myday = mktime(timeinfo);
    
    different = difftime(myday, current);
    different = different/(60*60*24);
    
    printf("%d, %d, %d -> 오늘로 부터 %d일 후(-전) 입니다.\n", year, month, day, different);
    
    
    return 0;
}

#endif