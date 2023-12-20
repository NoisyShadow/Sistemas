/*/
Implementar un programa en lenguaje C que simule el cruce de autos a través de un puente.
El puente solo puede ser atravesado por un auto a la vez. El objetivo es utilizar mecanismos
de concurrencia, como hilos, mutexes, semáforos y barreras, para garantizar un cruce
seguro y eficiente.
Requerimientos:
● Utilizar hilos para representar los autos que desean cruzar el puente en direcciones
opuestas.
● Utilizar semáforos para garantizar que solo un auto cruce el puente a la vez y para
coordinar la dirección de los autos.
● Imprimir mensajes que muestren la secuencia de eventos, por ejemplo el número
del auto, cuando se une a la cola del puente, cuando comienza a cruzar y cuando ha
completado el cruce, junto con el tiempo que le llevó cruzar.
● El tiempo de cruce de cada auto debe ser aleatorio entre 1 y 3 segundos.
/*/
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>


sem_t autoi, autod ;

/*/void *puente()
{
     if (&auto)
     {

     }
}/*/

void *izquierda()
{
    for (int i = 0; i < 10; i++)
    {
        sem_wait(&autoi);
        printf("El auto %d comienza a cruzar\n", i);
        printf("El auto %d cruzo sin problemas al lado derecho en un tiempo de .\n ", i);
        sem_post(&autod);
    }
}

void *derecha()
{
    for (int i = 10; i < 20; i++)
    {
        sem_wait(&autod);
        printf("El auto %d comienza a cruzar\n", i);
        printf("El auto %d cruzo sin problemas al lado izquierdo en un tiempo de .\n ", i);
        sem_post(&autoi);
    }
}

/*/void *COLA()
{


}/*/

int main()
{
    pthread_t hilo1, hilo2, hilo3, hilo4;
    sem_init (autoi, 0, 1);
    sem_init (autod, 0, 0);
   /*/ pthread_create (&hilo1, NULL, puente, NULL);
    pthread_create (&hilo2, NULL, COLA, NULL);/*/
    pthread_create (&hilo3, NULL, izquierda, NULL);
    pthread_create (&hilo4, NULL, derecha, NULL);

   /*/ pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);/*/
    pthread_join(hilo3, NULL);
    pthread_join(hilo4, NULL);

    int pthread_destroy(hilo3);
    int pthread_destroy(hilo4);
    
    return 0;
}