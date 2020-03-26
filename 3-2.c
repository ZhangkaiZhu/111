#include<stdio.h>
int main()
{
    float tank_volume;                          // ?????????????? tank_volume
    float oil_density;                          // ????????????? oil_density
    float oil_kg;                           
    float area;

    tank_volume = 0.1;                            // ??? tank_volume ??
    oil_density = 850;                            // ??? oil_density ??

    oil_kg = tank_volume*oil_density;             // ? tank_volume ? oil_density ?????? oil_kg
    area = oil_kg/0.85;                           // ? oil_kg/0.85 ?????? area
    printf("Most farming is %f mu",area);  
    return 0;
}
