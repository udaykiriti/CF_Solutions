#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    
    long long evn = n / 2;
    long long oddn = (n % 2 == 0) ? (n / 2) : (n / 2 + 1);  
    long long sumevn = evn * (evn + 1);
    long long sumoddn = oddn * oddn;
    long long sum = sumevn - sumoddn;
    printf("%lld\n", sum);
    
    return 0;
}
