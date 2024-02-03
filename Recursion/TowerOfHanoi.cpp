class Solution {
public:
    long long count = 0;

    // You need to complete this function
    void TOH(int N, int from, int to, int aux) {
        if (N == 1) {
            cout << "move disk 1 from rod " << from << " to rod " << to << endl;
            count++;
            return;
        }

        TOH(N - 1, from, aux, to);
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        count++;
        TOH(N - 1, aux, to, from);
    }

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        TOH(N, from, to, aux);
        return count;
    }
};
