 
#include "lib.h"

float max (float pt[], int n)
{ int i=0;
    while (i<n)
    {
        if (pt[0]>pt[i])
        {
            i++;
        }
        else
        {
            pt[0]=pt[i];
         i++;
        }
    }
    return pt[0];
}
