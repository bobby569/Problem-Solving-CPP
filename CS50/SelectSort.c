void SelectSort(int A)
{
     int i, j, min, t;

     for (i =1; i<= MAXSIZE; i++) {
          min  = i;
          for (j = i+1; j<=MAXSIZE; j++)
            if (A[j] < A[min])
              min = j;
        
          Swap(&A[min],&A[i]);
     }
} 
