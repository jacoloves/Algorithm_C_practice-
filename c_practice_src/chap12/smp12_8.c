#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    Point pt;
    double fuel;
} Car;

double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

double distance_of2(Point pc)
{
    return sqrt(sqr(pc.x) + sqr(pc.y));
}

void put_info(Car c)
{
    printf("現在位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
    printf("残り燃料：%.2fリットル\n", c.fuel);
}

int move(Car *c, Point dest)
{
    double d = distance_of(c->pt, dest);
    if(d > c->fuel)
        return 0;
    c->pt = dest;
    c->fuel -= d;

    return  1;
}

int move2(Car *c, Point dest)
{
    double d = distance_of2(dest);
    if(d > c->fuel){
        return 0;
    }

    c->pt.x += dest.x;
    c->pt.y += dest.y;
    c->fuel -= d;

    return 1;
}

int main(void)
{
    Car mycar = {{0.0, 0.0}, 90.0};
     while(1){
         int select, choice;
         int cnt = 0;
         Point dest;
         put_info(mycar);
         printf("移動しますか【Yes・・・1/No・・・0】：");
         scanf("%d", &select);
         if(select != 1) break;
         do{
            printf("移動方法を入力して下さい（目的地入力・・・0/移動距離入力・・・1）");
            scanf("%d", &choice);
            if(choice == 0){
                printf("目的地のX座標："); scanf("%lf", &dest.x);
                printf("目的地のY座標："); scanf("%lf", &dest.y);
                if(!move(&mycar, dest)){
                    puts("\a燃料不足で移動できません。");
                    cnt = 1;
                }
                cnt = 1;
            }else if(choice == 1){
                printf("X方向の移動距離："); scanf("%lf", &dest.x);
                printf("Y方向の移動距離："); scanf("%lf", &dest.y);
                if(!move2(&mycar, dest)){
                    puts("\a燃料不足で移動できません。");
                    cnt = 1;
                }
                cnt = 1;
            }else{
                printf("0か1を入力して下さい。\n");
            }
         } while(cnt != 1);
         cnt = 0;
     }
     return 0;
}