const char* checkOddPairs(int a, int b, int c) {

    if ((a % 2 != b % 2) || (b % 2 != c % 2) || (a % 2 != c % 2)) {
        return "YES";
    }
    return "NO";
}


// #include <stdio.h>

// const char* checkOddPairs(int a, int b, int c) {
//     if ((a % 2 != b % 2) || (b % 2 != c % 2) || (a % 2 != c % 2)) {
//         return "YES";
//     }
//     return "NO";
// }

// int main() {
//     int t,a,b,c;
//     scanf("%d", &t);
    
//     while (t--) {
//         scanf("%d %d %d", &a, &b, &c);
//         printf("%s\n", checkOddPairs(a, b, c));
//     }
//     return 0;
// }
