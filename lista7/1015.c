#include <stdio.h>
#include <math.h>

double calc_dis(double x1, double y1, double x2, double y2);

int main(){

    double p1x, p1y, p2x, p2y, dis;
    scanf("%lf %lf\n%lf %lf", &p1x, &p1y, &p2x, &p2y);

    dis = calc_dis(p1x, p1y, p2x, p2y);

    printf("%.4lf\n", dis);
}

double calc_dis(double x1, double y1, double x2, double y2){
    double dis, xto2, yto2;
    xto2 = pow((x1-x2),2); yto2 = pow((y1-y2),2);

    dis = sqrt(xto2 + yto2);

    return dis;
}