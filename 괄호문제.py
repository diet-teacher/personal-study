ans = []
c = ['(())())']
for i in range(len(c)):
    poped = c.pop(i)
    ans.append(poped)
    if poped == ')':
        if ans[-1] == '(':
            ans.pop
    elif poped == ')':
        if ans[-1] == '(':
            ans.pop
            ans.pop
            print(ans)