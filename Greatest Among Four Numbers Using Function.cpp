/*Greatest-Among-Four-Number-Using-Function
Input Format: Input will contain four integers a,b,c and d.
Output Format: Return the greatest of the four integers.
*/

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b , int c, int d)   //Taking Four Integers
{
int data[] ={a,b,c,d};
int max = data[0];
for(int i=1;i<=4;i++){  //Using FOR Loop
    if (max<data[i])
    max=data[i];
}
return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}    