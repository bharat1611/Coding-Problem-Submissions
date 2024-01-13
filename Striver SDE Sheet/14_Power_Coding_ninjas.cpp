// double myPow(double x, int n) {
    
//     double ans = 1;
//     for(int i = 0 ; i < abs(n); i++){
//         ans = ans * x;
//     }
//     if(x < 0 or n < 0)
//         return 1/ans;
//     return ans;
// }

double myPow(double x, int n) {
    return pow(x,n);
}