#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<bitset>
#include<unordered_map> 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// #include "boost/algorithm/string.hpp"
#define fio ios_base::sync_with_stdio(false)
#define mod 1000000007
#define mod1 mod
#define mod2 1000000007
#define li long long int
#define ll li
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define readi(x) scanf("%d",&x)
#define  reads(x)  scanf("%s", x)
#define readl(x) scanf("%I64d",&x)
#define rep(i,n) for(i=0;i<n;i++)
#define revp(i,n) for(i=(n-1);i>=0;i--)
#define myrep1(i,a,b) for(i=a;i<=b;i++)
#define myrep2(i,a,b) for(i=b;i>=a;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define MAXN 1000000000000000005
#define MINN -1000000000000000000
#define INTMAX 1000001000
#define pii pair<ll,ll> 
#define pdd pair<double,double>
#define pic pair<int,char>
#define N 200005
#define lgn 20
#define ddouble long double
#define minus minu
#define PI 3.1415926535
#define lgn 20
 
 
// #define INTMAX 200000000 
 
// using namespace boost;
// #define si short int
 
using namespace std;
using namespace __gnu_pbds;             
typedef priority_queue<ll, vector<ll > > max_pq;
typedef priority_queue<ll, vector<ll> , greater<ll >  > min_pq;
ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}
string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}
 
// using namespace __gnu_pbds;         
// typedef priority_queue<pair<ll,char> , vector<pair<ll , char> > > max_pq;
// typedef priority_queue<pii , vector<pii > ,greater<pii > > min_pq;
typedef tree<pii , null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> OST;
// typedef priority_queue<pair < ll , pair < pii , ll > >  , vector<pair < ll , pair < pii , ll > >  > ,greater<pair < ll , pair < pii , ll > >  > > min_pq;
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << std::endl;
        //use cerr if u want to display at the bottom
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif
#define nn 2000005
struct node{
    int data;
    char c;
    node(int data_, char c_) : data(data_),c(c_) {}
};
bool comp ( pii a, pii b )
{
    if ( a.fi != b.fi )
        return a.fi > b.fi;
    else
        return a.sec > b.sec;
}
class compmap{
    public : 
    bool operator() (const ll& a, const ll & b )
    {
        return a > b;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    vector <int > vec;
    vec.push_back(1);
    cout << vec.size() <<" " << vec.capacity() << endl;
    vec.pb(1);
    cout << vec.size() <<" " << vec.capacity() << endl;
    vec.pb(1);
    cout << vec.size() <<" " << vec.capacity() << endl;
    vec.pb(1);
    cout << vec.size() <<" " << vec.capacity() << endl;
    vec.pb(1);
    cout << vec.size() <<" " << vec.capacity() << endl;
    vec.pb(1);
    cout << vec.size() <<" " << vec.capacity() << endl;
    vec.pb(1);
    vec.resize(15);
    cout << vec.size() <<" " <<vec.capacity() << endl;    
    for ( vector < int > :: iterator it = vec.begin(); it != vec.end(); it ++ )
    {
        cout << *it <<" ";
    }
    vector < node > vec2;
    vec2.emplace_back(1,'c');
    vec2.pb(node(1,'c'));
    for ( auto it : vec2 )
        cout << it.c << endl;
    vector < ll > vec3;
    for ( ll i =1; i <= 10; i ++)
        vec3.pb(i);
    cout << lower_bound(vec3.begin(),vec3.end(),2)-vec3.begin()+1;

    pair < int, int > px;
    px = {1,2};
    px = make_pair(1,2);
    cout << px.sec << endl;

    tuple<int, char, char , int > tt;
    tt = make_tuple(1,'c','c',2);
    cout << get<1>(tt);

    vector < pair < int, int > > vectorofpairs;
    for ( ll i = 1; i <= 10; i ++)
    {
        vectorofpairs.pb({i+1,i});
    }
    vectorofpairs.pb({2,3});
    sort(vectorofpairs.begin(),vectorofpairs.end(),comp);
    
    for ( auto it : vectorofpairs )
        cout << it.fi <<" " << it.sec << endl;

    set < ll > s;
    for ( ll i = 1; i <= 10; i ++)
    {
        s.insert(i);
        s.insert(i);
    }
    multiset < ll > ms;
    for ( ll i = 1; i <= 10; i ++)
    {
        ms.insert(i);
        ms.insert(i);
    }
    cout << s.size() <<" " << ms.size() << endl;

    for ( auto it : s )
        cout << it << endl;
    for ( set < ll > :: iterator it = s.begin(); it  != s.end(); it ++)
        cout << *it << endl;
    cout << ms.count(1) << endl;
    s.erase(1);
    cout << s.size() << endl;
    ms.erase(ms.find(1));

    cout << ms.size() << endl;

    map < ll , ll, compmap > mark;
    mark.insert({1,2});
    mark.insert({2,3});
    for  ( auto it : mark )
        cout << it.fi <<" " << it.sec << endl; 
    // cout << mark[1] << endl;;

    map < ll, vector < ll > > mark2;
    for ( ll i = 1; i <= 10; i ++)
    {
        mark2[1].pb(i);
    }
    cout << mark2[1][0] << endl;
    for ( auto it : mark2[1] )
        cout << it <<" ";


    set < ll , compmap > s3;
    for ( ll i = 1; i <= 10; i ++)
        s3.insert(i);
    for ( auto it : s3 )
        cout << it << endl;

    map < ll, ll > my_map;
    if ( my_map.find(11) != my_map.end() )
    {
        //
    }
    my_map[1] = 2;
    int vl ;
    if ( my_map.find(0) != my_map.end())
        vl = my_map[0];


}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   