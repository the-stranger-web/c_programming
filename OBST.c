#include<stdio.h>
#include<stdlib.h>

float p[20], q[20], weight[20][20], cost[20][20];
int root[20][20], n;

int construct_obst(){
    int i, j, k, l, min;
    for(i = 0; i < n; i++){

        // Initialization, meaning when i and j are equal
        weight[i][i] = q[i];
        cost[i][i] = 0.0;
        root[i][i] = 0;

        // for j = i+1 meaning when the difference between i & j is 1
        weight[i][i+1] = q[i] + p[i+1] + q[i+1];
        cost[i][i+1] = weight[i][i+1];
        root[i][i+1] = i+1;
    }

    // for last cell of matrices
    weight[n][n] = q[n];
    cost[n][n] = 0.0;
    root[n][n] = 0;

    // Now, when the difference between i & j is more than 1.
    for(j = 2; j <= n; j++){
        for(i = 0; i <= n-j; i++){
            weight[i][i+j] = weight[i][i+j-1] + p[i+j] + q[i+j];
            cost[i][i+j] = 9999;

            // for each value of k, where "i < k <= i+j"
            for(k = i+1; k <= i+j; k++){
                if(cost[i][i+j] > cost[i][k-1] + cost[k][i+j]){
                    cost[i][i+j] = cost[i][k-1] + cost[k][i+j];
                    root[i][i+j] = k;
                }
            }
            cost[i][i+j] += weight[i][i+j];
        }
    }

    printf("\nOptimal BST is: \n");
    printf("\n weight[0][%d] = %.2f ", n, weight[0][n]);
    printf("\n cost[0][%d] = %.2f ", n, cost[0][n]);
    printf("\n root[0][%d] = %d ", n, root[0][n]);

    return 0;
}

void print_obst(int L, int R){
    if(L >= R)
        return;

    if(root[L][root[L][R]-1] != 0)
        printf("\n\nLeft Child of %d is %d.", root[L][R], root[L][root[L][R]-1]);
    
    if(root[root[L][R]][R] != 0)
        printf("\n\nRight Child of %d is %d.", root[L][R], root[root[L][R]][R]);

    print_obst(L, root[L][R]-1);
    print_obst(root[L][R], R);

    return;
}


int main(){

    int i;

    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);

    printf("\nEnter the probabilities of successful search: \n");
    for(i = 1 ; i <= n ; i++){
        printf("p[%d] = ", i);
        scanf("%f", &p[i]);
    }

    printf("\nEnter the probabilities of unsuccessful search: \n");
    for(i = 0 ; i <= n ; i++){
        printf("q[%d] = ", i);
        scanf("%f", &q[i]);
    }

    construct_obst();
    print_obst(0, n);
}