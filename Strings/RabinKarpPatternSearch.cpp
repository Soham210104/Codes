#define d 256 

//Function to check if the pattern is present in string or not.
bool search(string pat, string txt, int q) 
{ 
    int M = pat.size();
    int N = txt.size();
    int i, j;
    int p = 0; 
    int t = 0; 
    int h = 1;

    for (i = 0; i < M-1; i++)
        h = (h * d) % q;

    for (i = 0; i < M; i++) {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    for (i = 0; i <= N - M; i++) {
        if (p == t) {
            bool flag = true;
            for (j = 0; j < M; j++) {
                if (txt[i+j] != pat[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                return true;
        }

        if (i < N - M) {
            t = (d*(t - txt[i]*h) + txt[i+M]) % q;

            if (t < 0)
                t = (t + q);
        }
    }
    return false;
}