/*/
Desarrollar un código que emule una carrera entre tres corredores (hilos) con los nombres
de A, B y C. La carrera consiste en dos fases, cada una marcada por un checkpoint (punto de
control). Los corredores deben seguir las siguientes reglas:
Requerimientos:
● Cada corredor debe imprimir un mensaje indicando que está listo para comenzar la
carrera.
● En cada fase de la carrera, los corredores deben llegar al checkpoint
correspondiente antes de avanzar a la siguiente fase.
● Después de llegar al checkpoint, los corredores deben esperar a que todos los
corredores alcancen ese checkpoint antes de avanzar a la siguiente fase.
● Solo un corredor a la vez puede cruzar a la siguiente fase. Se debe utilizar un mutex
para garantizar la exclusión mutua en esta sección crítica.
● Después de cruzar el segundo checkpoint, el corredor ha completado la carrera y
debe imprimir un mensaje indicando que ha terminado.
/*/
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

pthread_mutex_t mutex;

void *autoA()
{
    pthread_mutex_lock(mutex);
    printf("el corredor A esta listo para salir.\n");
    pthread_mutex_unlock(mutex);
}
void *autoB()
{
    pthread_mutex_lock(mutex);
    printf("el corredor B esta listo para salir.\n");
    pthread_mutex_unlock(mutex);
}
void *autoC()
{
    pthread_mutex_lock(mutex);
    printf("el corredor C esta listo para salir.\n");
    pthread_mutex_unlock(mutex);
}
void *carrera()
{

}

void *checkpoint()
{

    if(autoA){

    }

}

int main()
{
    pthread_t hilo1, hilo2, hilo3, hilo4, hilo5;
    pthread_mutex_init (mutex);
    pthread_create (&hilo1, NULL, carrera, NULL);
    pthread_create (&hilo2, NULL, checkpoint, NULL);
    pthread_create (&hilo3, NULL, autoA, NULL);
    pthread_create (&hilo4, NULL, autoB, NULL);
    pthread_create (&hilo5, NULL, autoC, NULL);

    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);
    pthread_join(hilo3, NULL);
    pthread_join(hilo4, NULL);

}