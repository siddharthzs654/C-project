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



//lock acquire
void lock_acquire_north()
{
    Osbridge.lk.lck = 2;
}
void lock_acquire_south()
{
    Osbridge.lk.lck = 1;
}


// empyty wait
void emptywaitN(){

    int z;
    for(z = 0; z < xn; z++)
    {
        printf("Process North %d gets executed :: ",waitN[z]);
    }
    puts("");
    xn = 0;

}

void emptywaitS(){

    int z;
    for(z = 0; z < xs; z++)
    {
        printf("Process south %d gets executed :: ",waitS[z]);
    }
    puts("");
    xs = 0;

}




