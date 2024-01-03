vector<int> nextGreaterPermutation(vector<int> &A) {
    
    int ind = -1;
    for(int i = A.size() - 2 ; i >= 0 ; i--)
    {
        if(A[i] < A[i + 1]){
            ind = i;
            break;
        }
    }
    if(ind == (-1)){
        reverse(A.begin(), A.end());
        return A;
    }

    for(int i = ind + 1; i < A.size(); i++){
        for(int j = ind + 1; j < A.size() - 1; j++){
            if(A[j] > A[j + 1]){
                swap(A[j], A[j + 1]);
            }
        }
    }

    for (int i = ind; i < A.size(); i++) {
        if (A[i] > A[ind]) {
            swap(A[i], A[ind]);
            break;
        }
    }
    return A;
}