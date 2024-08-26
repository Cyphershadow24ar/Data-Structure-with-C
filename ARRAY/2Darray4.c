#include <stdio.h>
int N, M, P;
void input(int arr[N][M][P])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < P; k++)
            {
                printf("ENTER THE GRADE FOR CLASS %d STUDENT %d SUBJECT %d: ", i + 1, j + 1, k + 1);
                scanf("%d", &arr[i][j][k]);
            }
            printf("\n");
        }
    }
}
void update(int arr[M][N][P], int x, int y, int z)
{
    int g;
    printf("ENTER THE UPDATED GRADE: ");
    scanf("%d", &g);
    arr[x - 1][y - 1][z - 1] = g;
}
int main()
{
    printf("ENTER NO. OF CLASSES: ");
    scanf("%d", &N);
    printf("ENTER NO. OF STUDENT IN EACH CLASS: ");
    scanf("%d", &M);
    printf("ENTER NO. OF SUBJECT: ");
    scanf("%d", &P);
    int arr[N][M][P];
    input(arr);
    printf("\n\n");

    int x, y, z;
    printf("TO UPDATE THE GRADE OF THE STUDENT.\n");
    printf("ENTER THE CLASS NO. OF THE STUDENT: ");
    scanf("%d", &x);
    printf("ENTER THE STUDENT NO. OF THE STUDENT: ");
    scanf("%d", &y);
    printf("ENTER THE SUBJECT NO. OF THE STUDENT: ");
    scanf("%d", &z);
    update(arr, x, y, z);
}