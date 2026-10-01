// #include <iostream>
// #include <windows.h>
// using namespace std;
// class Point{
//     protected:
//        int x,y;
//     public:
//     void show(){
//         printf("координаты x=%d,y=%d",x,y);
//     }
//     int  get_x(){
//         return x;
//     }
//     int  get_y(){
//         return y;
//     }
//     Point(): x(1),y(0){
//         printf("Point(): x=%d, y=%d\n",x,y);
//     }
//     Point(int x, int y):x(x),y(y) {
//         printf("конструктор 2: x=%d, y=%d\n",x,y);
//     }
//     Point(const Point &other):x(other.x),y(other.y){
//         printf("Конструктор 3: x=%d,y=%d\n",x,y);
//     }
//     ~Point(){
//         printf("~Point\n");
//     }
// };
// class Point3D: public Point{
//     private:
//         int z;
//     public:
//       void show(){
//         Point::show();
//         printf(" ,z=%d\n",z);
//       }
//       Point3D():Point(1,2), z(0){
//           printf("Конструктор 1 у Point3D: x=%d,y=%d,z=%d\n",x,y,z);
//       }
//       Point3D(int x,int y, int z):Point(x,y),z(z){
//             printf("Конструктор 2 у Point3D: x=%d,y=%d,z=%d\n",x,y,z);
//       }
//       ~Point3D(){
//             printf("~Point3D\n");
//       }
      
// };
// class Line{
//     private:
//        Point start;
//        Point end;
//     public:
//        Line(Point start,Point end):start(start),end(end){
//          printf("координаты нашей линии: %d, %d\n",start.get_x(),end.get_y());
//        }
      
     
       
// };
// int main(){
//     SetConsoleOutputCP(65001);
//     Point p1;
//     Point p2(5, 10);   
//     Point p_copy(p2);  
//     Point3D p4;
//     Point3D p5(4,5,6);
//     Point3D *ptr=new Point3D(7,8,9);
//     p5.show();
//     p1.show();
//     cout<<'\n';
//     ptr->show();
//     cout<<'\n';
//     Line l1(p2,p1);
//     delete ptr;
//     return 0;
// };
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
class Colorpoint: public Point{
    public:
    int color;
    private:
    Colorpoint(){
        printf("Colorpoint()");
    }
    Colorpoint(Point p, int color){
        printf("Colorpoint(Point p, int color) x=%d, y=%d, color=%d",p.x,p.y,color);
    }
}

