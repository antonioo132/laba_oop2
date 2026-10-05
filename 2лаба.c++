
#include <iostream>
class Point{
    protected:
        int x;
        int y;
    public:
        Point(): x(0),y(0){
            printf("Point()\n");
        }
        Point(int x, int y){
            this->x=x;
            this->y=y;
            printf("Point(int x,int y)\n");
        }
        Point(const Point &p){
            x=p.x;
            y=p.y;
            printf("Point &p\n");
        };
        void setpoint(int x,int y){
            this->x=x;
            this->y=y;
        }
        ~Point(){
            printf("~Point() x=%d,y=%d\n",x,y);
        }
};
class Colorpoint: public Point{
    private:
    int color;
    public:
    Colorpoint(){
        printf("Colorpoint()\n");
    }
    Colorpoint(int x, int y, int color):Point(x, y){
      
        this->color=color;
        printf("Colorpoint(Point p, int color)\n");
    }
    Colorpoint(const Colorpoint &p):Point(p){
        x=p.x;
        y=p.y;
        color=p.color;
        printf("Colorpoint(Colorpoint &p)\n");
    };
    void change_color(int new_color){
        color=new_color;
    }
    ~Colorpoint(){
        printf("~Colorpoint x=%d,y=%d,color=%d\n",x,y,color);
    }

};
class Section{
    private:
       Point *p1;
       Point *p2;
    public:
       Section(){
          p1=new Point;
          p2=new Point;
          printf("Section()\n");
       }
       Section(const Section &p){
        p1=new Point(*(p.p1));
        p2=new Point(*(p.p2));
         printf("Section(const Section &p)\n");
       }
       Section(int x1,int y1,int x2, int y2){
        p1= new Point(x1,y1);
        p2=new Point(x2,y2);
        printf("Section(int x1,int y1,int x2, int y2)\n");
       }
       ~Section(){
          delete p1;
          delete p2;
          printf("~Section\n");
       }
};
  
int main(){

    Section *p1= new Section;
    Section *p2=new Section(*p1);
    delete p1;
    delete p2;
    return 0;

}

