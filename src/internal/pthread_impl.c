#include <pthread_impl.h>

pthread_t __pthread_self(void)
{
    uintptr_t tp = __get_tp();
    uintptr_t pt =
#ifdef TLS_ABOVE_TP
        tp - sizeof(struct __pthread) - TP_OFFSET;
#else
        tp;
#endif
    return (pthread_t)pt;
}
