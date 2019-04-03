#include<stdio.h>


int waitN[20];
int waitS[20];
int xn,xs;

struct lock{
    int lck;
};

struct bridge{

    int north_waiting;
    int north_crossing;
    int north_consecutive;

    int south_waiting;
    int south_crossing;
    int south_consecutive;

    struct lock lk;
}Osbridge;

void bridge_init(struct bridge os)
{
    os.north_waiting = 0;
    os.north_crossing = 0;
    os.north_consecutive = 0;
    os.south_consecutive = 0;
    os.south_crossing = 0;
    os.south_waiting = 0;

    lock_init(os.lk);
}





