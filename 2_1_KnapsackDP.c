#include <stdio.h>
#include <stdlib.h>

// int KnapsackDP(int weight[],int value[],int n,int C) {
//     int m[n+1][C+1];
//     for (int i=0;i<=n;i++){
//         //
//         m[i][0]=0;
//     }
//     for(int i=0;i<=C;i++){
//         //
//         m[0][i] = 0;
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=C;j++){
//             //
//             m[i][j] = m[i-1][j];
//             if(weight[i-1]<=j){
//               if(m[i][j]<m[i-1][j-weight[i-1]]+value[i-1]){
//                 m[i][j] = m[i-1][j-weight[i-1]]+value[i-1];
//               }   
//             }
//         }
//     } 
//     return m[n][C];
// }
int KnapsackDP(int weight[],int value[],int n,int C) {
    int dp[C+1];
    for(int i=0;i<=C;i++){
        dp[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = C; j >= 1; j--) {
            if (weight[i] <= j) {
                if(dp[j]<dp[j - weight[i]] + value[i]) {
                    dp[j] = dp[j - weight[i]] + value[i];
                }
            }

        }
    }
    return dp[C];
}