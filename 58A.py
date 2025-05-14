# Codeforces Username: Polymath__
# Email: Udaykiriti9@gmail.com
# Problem link: https://codeforces.com/problemset/problem/58/A
# github link: https://github.com/udaykiriti

"""
Problem: Chat room
Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody.
Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that
it results in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if
he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello.

You are required to determine whether Vasya managed to say hello by the given word s.

Input:
The first and the only line contains the word s, which Vasya typed. This word only consists of lowercase English letters and its length
is no more than 100 letters.

Output:
If Vasya managed to say hello, print "YES", otherwise print "NO".

Example:
Input:
ahhellllloou
Output:
YES

Input:
hlelo
Output:
NO
"""

def main():
    # Read the input string
    s = input()
    target = "hello"
    index = 0

    # Iterate through the characters of the input string
    for char in s:
        # Check if the current character matches the target character
        if char == target[index]:
            index += 1
        # If all characters of "hello" are found, break the loop
        if index == len(target):
            break

    # If the entire "hello" is found, print "YES", otherwise print "NO"
    print("YES" if index == len(target) else "NO")

if __name__ == "__main__":
    main()