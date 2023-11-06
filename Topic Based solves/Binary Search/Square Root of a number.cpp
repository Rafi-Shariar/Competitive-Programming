//www.codingninjas.com/studio/problems/square-root-integral_893351
int floorSqrt(int n)
{
    // Write your code here.
    long long int ans = 1;

    if( n == 0) return 0;

    long long int low = 1, high = n;

    while(low <= high){

        long long int mid = low + (high - low) / 2;

        if( (mid * mid) <= n ){
            ans = mid;
            low = mid + 1;
        }
        else{

            high = mid - 1;
        }
    }

    return ans;
}
