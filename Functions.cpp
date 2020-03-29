#include <iostream>
#include <cstdio>
using namespace std; 

  int max_of_four(int a, int b, int c, int d)
 { int temp ;
     if ( (a > b) && (a > c) && (a > d) )
     temp = a ;  
     else if ( (b > a) && (b > c) && (b > d) )
     temp =  b ; 
     else if ( (c > a) && (c > b) && (c > d) )
     temp =  c ; 
     else if ( (d > a) && (d > b) && (d >c) )
     temp =  d ;
 return temp ;
  }
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

