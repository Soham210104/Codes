class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    
    string rotateAnticlockwise(string s, int d) {
    int n = s.length();
    string rotated = s;

   
    for (int i = 0; i < n - d; i++) {
        rotated[i] = s[i + d];
    }
    for (int i = n - d; i < n; i++) {
        rotated[i] = s[i - (n - d)];
    }
    
    return rotated;
}

string rotateClockwise(string s, int d) {
    int n = s.length();
    string rotated = s;

    for (int i = 0; i < d; i++) {
        rotated[i] = s[n - d + i];
    }
    for (int i = d; i < n; i++) {
        rotated[i] = s[i - d];
    }

    return rotated;
}

bool isRotated(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }

    // Rotate anticlockwise by 2 places
    string anticlockwiseRotated = rotateAnticlockwise(a, 2);

    // Rotate clockwise by 2 places
    string clockwiseRotated = rotateClockwise(a, 2);

    // Check if b matches either of the rotated strings
    return (b == anticlockwiseRotated) || (b == clockwiseRotated);
}

};