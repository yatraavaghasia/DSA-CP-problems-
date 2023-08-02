#define d 256
#define mod 1000000

class Solution {
public:
    int rabinKarp(string text, string pattern) {
        int n = text.length();
        int m = pattern.length();
        long long int pHash = 0, tHash = 0;
        int h = 1;
        
        for (int i = 0; i < m - 1; i++) {
            h = (h * d) % mod;
        }
        
        for (int i = 0; i < m; i++) {
            pHash = ((pHash * d) + pattern[i]) % mod;
            tHash = ((tHash * d) + text[i]) % mod;
        }
        
        for (int i = 0; i <= n - m; i++) {
            if (pHash == tHash) {
                int j;
                for (j = 0; j < m; j++) {
                    if (text[i + j] != pattern[j]) {
                        break;
                    }
                }
                if (j == m) {
                    return i;
                }
            }
            
            if (i < n - m) {
                tHash = ((tHash - text[i] * h) * d + text[i + m]) % mod;
                if (tHash < 0) {
                    tHash += mod;
                }
            }
        }
        
        return -1;
    }
    
    int repeatedStringMatch(string a, string b) {
        if (a == b) return 1;
        
        string source = a;
        int count = 1;
        while (source.length() < b.length()) {
            source += a;
            count++;
        }
        
        if (source == b) return count;
        if (rabinKarp(source, b) != -1) return count;
        if (rabinKarp(source + a, b) != -1) return count + 1;
        
        return -1;
    }
};
