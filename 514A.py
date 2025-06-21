x=input()
for i in range(len(x)):
    digit=x[i]-'0'
    if i==0 and digit==9:
        continue
    if digit>4:
        x[i]='0'+(9-digit)
print(x)