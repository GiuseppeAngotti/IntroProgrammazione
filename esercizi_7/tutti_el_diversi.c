#include <stdio.h>

int diversi(int *a, int n)
{
    int flag = 0;
    int i = 0;
    int j;
    //!variabile (not variabile) messo in una condizione se la variabile è settata a 0  esegue il codice (0 in C è falso, la negazione di falso è vero), mentre se è settata a >=1 non lo fa (>0 in c è vero, negazione di vero è falso) 
    while (i < n && !flag)
    {
        j = i+1;
        while (j < n && !flag)
        {
            if (a[i] == a[j])
                flag = 1;
            j++;
        }
        i++;
    }
    return flag;
}

int main()
{
    int array[5]={0,-24,5,-4,-14};

    if(diversi(array,5)==0)
        printf("Tutto l'array contiene elementi diversi\n");
    else
        printf("C'è almeno un elemento uguale a un altro\n");
    
    return(0);
}