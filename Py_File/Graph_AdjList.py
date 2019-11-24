def getGraph(edges):
    arr=[]
    for x in edges:
        arr.append(x[0])
        arr.append(x[1])

    arr=list(set(arr))
    nodes=len(arr)
    key=dict()
    arr.sort()
    for i, x in enumerate(arr):
        key[x]=i+1

    graph=[list() for _ in range(nodes+1)]

    for x in edges:
        graph[key[x[0]]].append(key[x[1]])

    return graph

#edges=[[0,4],[6,2],[2,0],[1,6],[4,2],[0,3],[3,5],[5,3],[5,7],[7,5],[7,6]]
edges=[[18,17],[16,18],[16,25],[18,21],[25,17]]
g=getGraph(edges)

print(g)