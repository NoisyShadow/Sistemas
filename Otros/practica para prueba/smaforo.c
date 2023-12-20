#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t ping, pong;

void *procesoping()
{
    for(int i = 0; i<10 ;i++)
    {
        sem_wait(&ping);
        printf("ping");
        sem_post(&pong);
    }
    pthread_exit(NULL);
}

void *procesopong()
{
    for(int i = 0; i<10 ;i++)
    {
        sem_wait(&pong);
        printf("pong");
        sem_post(&ping);
    }
    pthread_exit(NULL);
}

int main ()
{
    pthread_t hiloping, hilopong;

    sem_init(&ping, 0, 1);
    sem_init(&pong, 0, 0);

    pthread_create(&hiloping, NULL, procesoping, NULL);
    pthread_create(&hilopong, NULL, procesopong, NULL);

    pthread_join(hiloping, NULL);
    pthread_join(hilopong, NULL);

    sem_destroy(&ping);
    sem_destroy(&pong);

    return 0;
}