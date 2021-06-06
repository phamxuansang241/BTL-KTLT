#include<iostream>
#include "function.h"

using namespace std;

void input(int &n, double **A, double *b) {
    cin >> n;

    //*A = new double[n+1];
    b = new double [n+1];

//    for(int i = 0;i < n;i++)
//        A[i] = new double[n+1];
//
//    for(int i = 0;i < n;i++)
//        for(int j = 0;j < n;j++)
//            cin >> A[i][j];

    for(int i = 0;i < n;i++)
        cin >> b[i];
}
