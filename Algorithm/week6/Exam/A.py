t = int(input()) # number of test cases

for case in range(1, t+1):
    n = int(input()) # number of monsters
    coins = list(map(int, input().split())) # coins of each monster

    dp = [0] * (n+1) # initialize dp array

    # base cases
    dp[1] = coins[0]

    # calculate dp[i] for i=2 to n
    for i in range(2, n+1):
        dp[i] = max(dp[i-2] + coins[i-1], dp[i-1])

    # print result for current test case
    print("Case {}: {}".format(case, dp[n]))
