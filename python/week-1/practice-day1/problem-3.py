""" 
In the famous Rock Paper Scissor game - Rock wins against scissors, paper wins against rock, and scissors wins against paper.
Write a python program that takes two user inputs and returns who wins the game.
Sample Input:
> Player 1: rock
> Player 2: paper
Sample Output:
> Player 2 is the winner
"""
player_1 = input("> Player 1: ")
player_2 = input("> Player 2: ")
if (player_1 == "rock" and player_2 == "scissor"):
    print("> Player 1 is the winner.")
elif (player_1 == "scissor" and player_2 == "rock"):
    print("> Player 2 is the winner.")
elif (player_1 == "rock" and player_2 == "paper"):
    print("> Player 2 is the winner.")
elif (player_1 == "paper" and player_2 == "rock"):
    print("> Player 1 is the winner.")
elif (player_1 == "paper" and player_2 == "scissor"):
    print("> Player 2 is the winner.")
elif (player_1 == "scissor" and player_2 == "paper"):
    print("> Player 1 is the winner.")
else:
    print("Please, give right player name.")
