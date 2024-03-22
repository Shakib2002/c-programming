 #include <stdio.h>

int count_before_one(int arr[], int size) 
{
    int Count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == 1) 
        {
            break;
        }
        Count++;
    }
    return Count;
}

int main() 
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &A[i]);
    }

    int Count = count_before_one(A, N);
    printf("%d\n", Count);

    return 0;
}
