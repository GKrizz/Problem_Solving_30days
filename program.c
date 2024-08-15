// Program 1: Income Calculation
#include <stdio.h>

int main() {
    int P, H, R;
    scanf("%d %d %d", &P, &H, &R);
    int total_income = P * H;

    printf("%s\n", (total_income == R) ? "BARELY" : (total_income > R) ? "YES" : "NO");
    
    return 0;
}

// Program 2: Super-Long Integer Divisibility by 4
#include <stdio.h>
#include <string.h>

int main() {
    char N[102];
    scanf("%s", N);
    
    int length = strlen(N);
    int last_digit = N[length - 1] - '0';
    int second_last_digit = length > 1 ? N[length - 2] - '0' : 0;
    int last_two_digits = second_last_digit * 10 + last_digit;
    
    if (last_two_digits % 4 != 0) {
        printf("Ok\n");
    } else {
        printf("AAAAAAAAAA!!!\n");
    }
    
    return 0;
}

//Sum of Even Numbers in an Array  
#include <stdio.h>

int main() {
    int n, x, sum = 0;
    scanf("%d", &n);  // Read the number of elements

    // Directly process each number
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += (x % 2 == 0) ? x : 0;  // Add to sum if the number is even
    }

    printf("%d\n", sum);  // Output the sum of even numbers

    return 0;
}

//n-th Term of Arithmetic Progression
#include <stdio.h>

int main() {
    int A, D, N;
    scanf("%d %d %d", &A, &D, &N);
    int nth_term = A + (N - 1) * D;
    printf("%d\n", nth_term);
    return 0;
}

//Can Ben Afford His Rent?
#include <stdio.h>

int main() {
    int P, H, R;
    scanf("%d %d %d", &P, &H, &R);
    int total_income = P * H;

    printf("%s\n", (total_income == R) ? "BARELY" : (total_income > R) ? "YES" : "NO");
    
    return 0;
}


