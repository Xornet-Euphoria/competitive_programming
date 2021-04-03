def create_factorial_list(n):
    ret = [1]
    for i in range(1, n+1):
        ret.append(ret[i-1]*i)

    return ret


def comb(n, k):
    l = create_factorial_list(n)
    return l[n] // (l[k]*l[n-k])
