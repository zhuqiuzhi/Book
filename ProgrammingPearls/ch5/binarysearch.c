#include "binarysearch.h"

/*
     precondition: x[0] <= x[1] <= ... <= x[n-1]
     postcondition:
             result == -1     =>  t not prsent in x
             0 <= result < n  =>  x[result] == t
*/
int binarysearch(Datatype x[], int n, Datatype t)
{
        int l, u,  m;
        l = 0;
        u = n - 1;

        while (l <= u) {
                m = l + (u-l) / 2;          
                if (t < x[m]) 
                        u = m - 1;
                else if (t > x[m])
                        l = m + 1;
                else
                        return m;       /* find target */
        }
        return -1;      /* no find target  */
}
