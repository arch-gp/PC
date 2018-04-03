#include<stdio.h>

int main(){
    float temp, vel, dist;
    float lit;
    scanf("%f", &temp);
    scanf("%f", &vel);
    dist=vel*temp;
    lit=dist/12;
    printf("%.3f", lit);
    return 0;
}
