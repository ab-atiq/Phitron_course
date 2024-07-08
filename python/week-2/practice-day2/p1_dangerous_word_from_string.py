"""  
Find the number of dangerous words (die, fire, kill, killer, missile, bomb, burst, shoot, president, burn)  in the string ‘s’ and print them. No words should be printed twice.

s = “I am feeling very dizzy tonight. But I am sure I did not fire that missile when I was drunk. Being a very professional contract killer I do not fire or plant bombs until particularly needed. Also, I do not have the courage to shoot the President let alone burst a bomb or fire a missile. Stop blaming me or my wrath will burn you into ashes. Ashes is not a brand here, my wrath is like fire, you might die kiddo. So stop pulling my legs and focus on your job. Shoot through the exit now!”
"""
str = "I am feeling very dizzy tonight. But I am sure I did not fire that missile when I was drunk. Being a very professional contract killer I do not fire or plant bombs until particularly needed. Also, I do not have the courage to shoot the President let alone burst a bomb or fire a missile. Stop blaming me or my wrath will burn you into ashes. Ashes is not a brand here, my wrath is like fire, you might die kiddo. So stop pulling my legs and focus on your job. Shoot through the exit now!"

dangerous_words = ["die", "fire", "kill", "killer", "missile", "bomb", "burst", "shoot", "president", "burn"]
str = str.lower()
str = str.replace(".", " ")
str = str.replace(",", " ")
str = str.replace("!", " ")
str = str.replace("?", " ")
str = str.replace(";", " ")
str = str.replace("\n", " ")
str_single_words = str.split() 

output_list = []
for word in str_single_words:
    if word in dangerous_words and word not in output_list:
        output_list.append(word)

print(output_list)