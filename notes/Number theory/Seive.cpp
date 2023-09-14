
//regular
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=1e6;
bool marked[N];

void sieve(int n) {
    marked[0] = marked[1] = true;
    for( int i = 4; i<N; i+=2) marked[i] = true;

    for (int i = 3; i * i <= n; i+=2) {
        if (!marked[i]) { 
            for (int j = i * 2; j < n; j += i) {
                marked[j] = true; 
            }
        }
    }
}



//seive for generation 664579 prime numbers
const int N=90000001;
bool marked[N+5];
vector<int>v;

void seive(){

    marked[0]=marked[1]=true;
    v.push_back(2);
    for( int i=4; i<N; i+=2) marked[i]=true;

    for( int i=3; i<=N; i+=2){

        if(!marked[i]){
            v.push_back(i);
            
            if(i<=sqrt(N)){

                for (int j = i*i; j <= N; j+=i*2) marked[j]= true;
                
            }
        }
    }
}




// segment seive

vector<ll> segment_sieve(ll l, ll r) {
    ll lim = sqrt(r);
    vector<bool> marked(lim + 1, false);
    vector<ll> primes_r;

    for (ll i = 2; i <= lim; i++) {
        if (!marked[i]) {
            primes_r.push_back(i);
            for (ll j = i * i; j <= lim; j += i)
                marked[j] = true;
        }
    }

    vector<bool> seg_marked(r - l + 1, true);

    for (auto i : primes_r) {
        for (ll j = max(i * i, (l + i - 1) / i * i); j <= r; j += i) {
            seg_marked[j - l] = false;
        }
    }

    if (l == 1)
        seg_marked[0] = false;

    vector<ll> primes_in_segment;
    for (ll i = l; i <= r; i++) {
        if (seg_marked[i - l]) {
            primes_in_segment.push_back(i);
        }
    }

    return primes_in_segment;
}






// memory effifien

#define M2 100000000
int marked2[ M2/2/32 + 2];

#define on(x) ( marked[(x/2)/32] & ( 1<< ( (x/2) % 32)) )
#define mark(x) ( marked[(x/2)/32] != ( 1<< ( (x/2) % 32)) )

void seive2( int n){

    for (int i = 3; i*i < n; i+=2)
    {
        if( !on(i) ){

            for (int j = i*i; j <= n; j+= i+i)
            {
                mark(j);
            }
            
        }
    }
    
}

