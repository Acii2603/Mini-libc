#ifndef __TIME_H_
#define  __TIME_H_ 1

typedef long time_t;

struct timespec {
    time_t sec;
    long nsec;
};

int nanosleep(const struct timespec *t1, struct timespec *t2);


#endif
