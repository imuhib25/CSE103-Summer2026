#include<stdio.h>

int main ()
{
    int m,n;
    printf("Number of candidates: ");
    scanf("%d", &m);
    printf("Number of votes: ");
    scanf("%d", &n);
    printf("Votes: ");
    int votes[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &votes[i]);
    }
    int count[m];
    for (int i = 0; i < m; i++)
    {
        count[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        if(votes[i] >= 1 && votes[i] <= m)
        {
            count[votes[i]-1]++;
        }
    }
    
    for (int i = 0; i < m; i++) {
        printf("Candidate %d received %d votes\n", i + 1, count[i]);
    }
}