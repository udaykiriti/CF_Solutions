# Codeforces Username: Polymath__
# Email: Udaykiriti9@gmail.com
# Problem link: https://codeforces.com/problemset/problem/116/A
# github link: https://github.com/udaykiriti

"""
Problem: Tram
A tram has `n` stops, and at each stop, some passengers exit the tram, and some enter.
You need to calculate the minimum tram capacity required so that no passenger is left behind at any stop.

Input:
The first line contains a single integer `n` (2 ≤ n ≤ 1000) — the number of stops.
The next `n` lines contain two integers `a` and `b` (0 ≤ a, b ≤ 1000) — the number of passengers that exit and enter the tram at each stop.

Output:
Print a single integer — the minimum tram capacity required so that no passenger is left behind.

Example:
Input:
4
0 3
2 5
4 2
4 0
Output:
6
"""

def main():
    # Read the number of stops
    n = int(input())
    
    # Initialize variables
    current_capacity = 0
    max_capacity = 0
    
    # Process each stop
    for _ in range(n):
        a, b = map(int, input().split())
        current_capacity -= a  # Passengers exiting
        current_capacity += b  # Passengers entering
        max_capacity = max(max_capacity, current_capacity)  # Update max capacity
    
    # Print the result
    print(max_capacity)

main()