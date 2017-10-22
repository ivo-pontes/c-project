#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

void bubbleSort(int *);
void printArray(int *);

int main()
{
	srand(time(NULL)); 
	int i;
	int *vetor;
	vetor = malloc(MAX * sizeof(int));

	for(i = 0; i < MAX; i++)
		vetor[i] = rand() % (MAX + 1);

	printArray(vetor);	

	bubbleSort(vetor);
	
	free(vetor);

	return(0);
}

void bubbleSort(int *array)
{
  int i, j, aux;   
  for( i = 0; i < MAX-1;  i++ )
    for( j= i+1; j < MAX ; j++ )  
    {
      if( array[i] > array[j] )  
      {          
        aux = array[i];
        array[i] = array[j];
        array[j] = aux;
      }
    }
}


void printArray(int *array)
{
	int i;
	for(i = 0; i < MAX; i++)
		printf("%d ",array[i]);

	printf("\n");
}
