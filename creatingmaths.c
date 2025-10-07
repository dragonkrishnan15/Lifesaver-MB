# include <stdio.h>

int main(){
    const float pie =3.14;
    float r;
    printf("ENTER THE RADIUS");
    scanf("%f",&r);
    printf("THE AREA OF THE CIRCLE IS %f\n",pie*r*r);
    printf("THE PERMITER OF THE CIRCLE IS %f",pie*r*2);
    return 0;
}