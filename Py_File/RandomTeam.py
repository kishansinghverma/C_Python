import random
players=['Harry','Hermione','Neville','Ginny','Luna']
team=['Alligators','Gorillas','Eagles','Pythons','Wasps','Panthers']

team1=random.choice(team)
team.remove(team1)
team2=random.choice(team)

exec(team1 + " = []")
exec(team2 + " = []")

while(len(players)>0):
    selected_player=random.choice(players)
    exec(team1 +".append(selected_player)")
    players.remove(selected_player)

    if(len(players)>0):
        selected_player=random.choice(players)
        exec(team2 +".append(selected_player)")
        players.remove(selected_player)

exec("print(team1,"+team1+")")
exec("print(team2,"+team2+")")
