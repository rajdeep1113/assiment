#include <stdio.h>
int main(){

// ans 1

//     int n;
//     printf("Enter your n:");
//     scanf("%d",&n);

//     int arr[n];

//     printf("Enter arr elements:\n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("arr of nagetive elements");
//     for(int i=0; i<n; i++){
//         if(arr[i]<0){
//             printf("%d",arr[i]);
//         }
//     }
//     printf("\n");


// //   ans 2


// //   int main(){
// //     int n,m;
  
// //     printf("Enter your n:");
// //     scanf("%d",&n);
// //     printf("Enter your m:");
// //     scanf("%d",&m);

// //     int arr[n][m];

// //     printf("Enter arr elements:\n");
// //     for(int i=0; i<n; i++){
// //         for(int j=0; j<m; j++){
// //             scanf("%d",&arr[i][j]);
// //         }
// //     }
// //     int max =arr[n][m];

// //     for(int i=0; i<n; i++){
// //         for(int j=0; j<m; j++){
// //             if(arr[i][j]>max){
// //                 max=arr[i][j];
// //             }
// //         }
// //     }
// //     printf("%d",max);



// // ans 3

// // int main(){
// //     int n,m;
  
// //     printf("Enter your n:");
// //     scanf("%d",&n);
// //     printf("Enter your m:");
// //     scanf("%d",&m);

// //     int arr[n][m], transpose[n][m];

// //     printf("Enter arr elements:\n");
// //     for(int i=0; i<n; i++){
// //         for(int j=0; j<m; j++){
// //             printf("arr[%d][%d]= ",i,j);
// //             scanf("%d",&arr[i][j]);
// //         }
// //     }

// //     for(int i=0; i<n; i++){
// //         for(int j=0; j<m; j++){
// //             transpose[j][i]=arr[i][j];
// //         }
// //     }

// //     for(int i=0; i<m; i++){
// //         for(int j=0; j<n; j++){
// //             printf("%d",transpose[i][j]);
// //         }
// //         printf("\n");
// //     }


// // ans 4

// int main(){
//     int row,col;
  
//     printf("Enter your row:");
//     scanf("%d",&row);
//     printf("Enter your col:");
//     scanf("%d",&col);

//     int arr[row][col];
    

//     printf("Enter arr elements:\n");
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             printf("arr[%d][%d]= ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     int rowNumber,colNumber;

//     printf("Enter your rowNumber");  
//     scanf("%d",&rowNumber);

//     int rowsum=0;

//     printf("row is %d:",rowNumber);
//     for(int j=0; j<col; j++){
//         printf("%d",arr[rowNumber][j]);
//         rowsum+=arr[rowNumber][j];
//     }
//     printf("\n the sum of row is %d: %d\n",rowNumber, rowsum);



//     printf("Enter your colNumber:");
//     scanf("%d",&colNumber);

//     int colsum =0;

//     printf("col is %d:",colNumber);
//     for(int i=0; i<row; i++){
//         printf("%d",arr[i][colNumber]);
//         colsum+=arr[i][colNumber];
//     }
//     printf("\n the sum of col is %d: %d\n",colNumber, colsum);



    return 0;
}