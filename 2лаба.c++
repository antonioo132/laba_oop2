
#include <iostream>
class Point{
    protected:
        int x;
        int y;
    public:
        Point(): x(0),y(0){
            printf("Point() x=%d,y=%d",x,y);
        }
        Point(int x, int y): x(x),y(y){
            printf("Point(int x,int y) x=%d,y=%d",x,y);
        }
        Point(Point &p){
            x=p.x;
            y=p.y;
            printf("Point &p");
        };
        void setpoint(int x,int y){
            this->x=x;
            this->y=y;
        }
        ~Point(){
            printf("~Point()");
        }
};




