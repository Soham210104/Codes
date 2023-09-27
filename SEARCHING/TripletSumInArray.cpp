class Solution{
public:
    bool isPair(int a[], int n, int x, int si)
    {
        int i = si, j = n - 1;
        while (i < j)
        {
            if (a[i] + a[j] == x)
            {
                return true;
            }
            else if (a[i] + a[j] < x)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }

    bool find3Numbers(int a[], int n, int x)
    {
        sort(a,a+n);
        for (int i = 0; i < n - 2; i++)
        {
            if (isPair(a, n, x - a[i], i + 1))
            {
                return true;
            }
        }
        return false;
    }
};
