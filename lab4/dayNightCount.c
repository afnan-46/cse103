#include<stdio.h>

int main() {
     int sun_s_hour, sun_s_minutes; 
int sun_r_hour, sun_r_minutes;

 
printf("Enter sun set time: ");
scanf("%d %d", &sun_s_hour, &sun_s_minutes);

printf("Enter sun rise time: ");
scanf("%d %d", &sun_r_hour, &sun_r_minutes);

int sunSet_time = sun_s_hour * 60 + sun_s_minutes;
int sunRise_time = sun_r_hour * 60 + sun_r_minutes;

if (sunRise_time < sunSet_time) {
    printf("The night is longer.\n");
} else {
    printf("The day is longer.\n");
}

return 0;
}