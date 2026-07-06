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

    for (int i = 0; i < n; i++)
    {
        if(votes[i] >= 1 && votes[i] <= m)
        {
            count[i]=0;
            count[votes[i]-1]++;
        }
    }
    
    for (int i = 0; i < m; i++) {
        printf("Candidate %d received %d votes\n", i + 1, count[i]);
    }

    int maxVotes = count[0];
    for (int i = 1; i < m; i++) 
    {
        if (count[i] > maxVotes) 
        {
            maxVotes = count[i];
        }
    }

    int tieCount = 0;
    for (int i = 0; i < m; i++) {
        if (count[i] == maxVotes) {
            tieCount++;
        }
    }

    if (tieCount > 1) {
        printf("Result: Tie between ");
        for (int i = 0; i < m; i++) {
            if (count[i] == maxVotes) {
                printf("Candidate %d ", i + 1);
            }
        }
        printf("\n");
    } else {
        for (int i = 0; i < m; i++) {
            if (count[i] == maxVotes) {
                printf("Result: Candidate %d wins\n", i + 1);
                break;
            }
        }
    }

    return 0;
}