"""  
Write a program to find anagrams in a given list of words. Two words are called anagrams if one word can be formed by rearranging letters of another. For example ‘eat’, ‘ate’ and ‘tea’ are anagrams.
>>> anagrams(['eat', 'ate', 'done', 'tea', 'soup', 'node']) 
[['eat', 'ate', 'tea], ['done', 'node'], ['soup']]
"""


from itertools import permutations


def anagrams(x):
    d = {}
    while len(x) > 0:
        x1 = x.pop()
        d[x1] = d.get(x1, [])
        d[x1].append(x1)
        i = 0
        while i < len(x):
            z1 = x[i]
            perm = [''.join(p) for p in permutations(x1)]
            if z1 in perm:
                x.remove(z1)
                d[x1].append(z1)
            else:
                i = i+1
    return d.values()

print(anagrams(['eat', 'ate', 'done', 'tea', 'soup', 'node']))

# print(anagrams(['tae', 'souep', 'eat', 'ihba', 'node',
#       'peuos', 'ate', 'abhi', 'bhia', 'done', 'tea', 'soupe']))
