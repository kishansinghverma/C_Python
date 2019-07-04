from firebase import firebase
firebase = firebase.FirebaseApplication('https://learnfirebasedb-e3308.firebaseio.com/', None)
result = firebase.get('/students', None)
print(result)
