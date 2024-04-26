from itertools import accumulate

def equal_stacks(h1, h2, h3):
    h1.reverse()
    h2.reverse()
    h3.reverse()
    h1 = list(accumulate(h1))
    h2 = list(accumulate(h2))
    h3 = list(accumulate(h3))
    while h1 and h2 and h3 and not (h1[-1] == h2[-1] == h3[-1]):
        if h1[-1] >= h2[-1] and h1[-1] >= h3[-1]:
            h1.pop()
        elif h2[-1] >= h1[-1] and h2[-1] >= h3[-1]:
            h2.pop()
        else:
            h3.pop()
    return 0 if not h1 or not h2 or not h3 else h1[-1]

if __name__ == "__main__":
    n1, n2, n3 = map(int, input().split())
    h1 = list(map(int, input().split()))
    h2 = list(map(int, input().split()))
    h3 = list(map(int, input().split()))

    result = equal_stacks(h1, h2, h3)
    print("Maximum possible common height:", result)