#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit old_lim,lim,new_lim;
    getrlimit(RLIMIT_STACK,&old_lim);
    printf("stack size: %ld\n", old_lim.rlim_cur);
    getrlimit(RLIMIT_NPROC,&lim);
    printf("process limit: %ld\n", lim.rlim_cur);
    getrlimit(RLIMIT_NOFILE,&new_lim);
    printf("max file descriptors: %ld\n", new_lim.rlim_cur);
    return 0;
}
