/**
Given an unsorted integer array, find the first missing positive integer.

For example,
Given [1,2,0] return 3,
and [3,4,-1,1] return 2.

Your algorithm should run in O(n) time and uses constant space.
*/

class Solution { public: int firstMissingPositive(int A[], int n) {

    if(n==0) return 1;
    int tmp;

    for(int i=0;i<n;i++){
        if(A[i]>0&&A[i]<n){
            if(A[i]!=(i+1)){
                while(A[i]>0&&A[i]<n&&A[A[i]-1]!=A[i]&&A[i]!=(i+1)){
                    tmp=A[A[i]-1];
                    A[A[i]-1]=A[i];
                    A[i]=tmp;
                }
            }
        }
    }

    int i;
    for(i=0;i<n;i++){
        if(A[i]!=(i+1))
            break;
    }
    return i+1;
}

};

