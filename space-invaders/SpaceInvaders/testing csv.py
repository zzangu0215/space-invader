import pandas as pd

file = pd.read_csv('.\\data\\score.csv', skiprows=[-1], na_values = ['no info', '.'])
  
copylist = []
for i in file['Scores']:
    copylist.append(i)
print(copylist)

high_list = []
for i in range(0,3):
    temp = 0
    for score in copylist:
        if score > temp:
            temp = score
    
    copylist.remove(temp)
    high_list.append(temp)

print(high_list)
top1 = int(high_list[0])
top2 = int(high_list[1])
top3 = int(high_list[2])

msg = f"Top 3 Score: {top1},{top2},{top3}"
print(msg)
print(copylist)