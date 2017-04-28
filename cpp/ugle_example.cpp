#include<iostream>

using namespace std;

/* Function to get the nth ugly number*/
unsigned getNthUglyNo(unsigned n)
{
    unsigned ugly[n]; // To store ugly numbers
    unsigned i2 = 0, i3 = 0, i5 = 0;
    unsigned next_multiple_of_2 = 2;
    unsigned next_multiple_of_3 = 3;
    unsigned next_multiple_of_5 = 5;
    unsigned next_ugly_no = 1;
 
    ugly[0] = 1;
    for (int i=1; i<n; i++)
    {
       cout << "i " << i << endl;
       cout << "i235 " << i2<<i3<<i5<<endl;
       cout << "next ugly " << next_ugly_no<<endl;
       cout << "next_mult" << next_multiple_of_2 << next_multiple_of_3 << next_multiple_of_5 <<endl; 
       next_ugly_no = min(next_multiple_of_2,
                           min(next_multiple_of_3,
                               next_multiple_of_5));
       ugly[i] = next_ugly_no;
       cout << "ugly[" <<i<<"] " << ugly[i] << endl;
       if (next_ugly_no == next_multiple_of_2)
       {
           i2 = i2+1;
           next_multiple_of_2 = ugly[i2]*2;
       }
       if (next_ugly_no == next_multiple_of_3)
       {
           i3 = i3+1;
           next_multiple_of_3 = ugly[i3]*3;
       }
       if (next_ugly_no == next_multiple_of_5)
       {
           i5 = i5+1;
           next_multiple_of_5 = ugly[i5]*5;
       }
    } /*End of for loop (i=1; i<n; i++) */
    return next_ugly_no;
}
 
/* Driver program to test above functions */
int main()
{
    int i,n = 15;
    //for(i=0;i<=n;i++) {
        //cout << getNthUglyNo(i)<<endl;
        cout << getNthUglyNo(n)<<endl;
    //}
    return 0;
}
