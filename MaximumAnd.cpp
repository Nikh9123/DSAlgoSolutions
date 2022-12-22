 
class Solution
{
    public:
int maxAND (int arr[], int N)
    {
        int ele=0;
        for(int i=31;i>=0;i--)
        {
            int k=(1<<i);
            k+=ele;
            int c=0;
            for(int i=0;i<N;i++)
            if((arr[i]&k)==k)
            c++;
            if(c>=2)
            ele=k;
        }
        return ele;
    }

};


// ////////////////////////⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️⚠️
 
class Solution
{
    public:
    // Function for finding maximum AND value.
    int checkBit(int pattern, int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if ((pattern & arr[i]) == pattern)
            count++;
    return count;
}
 
// Function for finding maximum and value pair
int maxAND (int arr[], int n)
{
    int res = 0, count;
 
    // iterate over total of 30bits from msb to lsb
    for (int bit = 31; bit >= 0; bit--)
    {
        // find the count of element having set  msb
        count = checkBit(res | (1 << bit),arr,n);
 
        // if count >= 2 set particular bit in result
        if ( count >= 2 )        
            res |= (1 << bit);        
    }
 
    return res;
}

};