import queue

def getGraph(edges):
    arr=[]
    for x in edges:
        arr.append(x[0])
        arr.append(x[1])

    arr=list(set(arr))
    nodes=len(arr)
    key=dict()
    mapper=dict()
    arr.sort()
    for i, x in enumerate(arr):
        key[x]=i+1
        mapper[i+1]=x

    graph=[list() for _ in range(nodes+1)]
    for x in edges:
        graph[key[x[0]]].append(key[x[1]])

    return graph,  mapper

def doBFS(graph, start):
    bfs=[]
    visited=[False]*len(graph)
    q=queue.Queue()
    bfs.append(start)
    for x in graph[start]:
        q.put(x)
        bfs.append(x)

    visited[start]=True
    while(not q.empty()):
        n=q.get()
        for x in graph[n]:
            if(not visited[x]):
                q.put(x)
                bfs.append(x)
        visited[n]=True
    return bfs

def getMappedSearch(bfs, mapper):
    print("\nBFS Of Given Graph Is:\n(", end="")
    for x in bfs[:-1]:
        print(mapper[x], end=", ")
    print(str(mapper[bfs[-1]])+")")

def getMappedGraph(graph, mapper):
    print("\nAdj. List View Of Given Graph Is:")
    for i, x in enumerate(graph):
        if(len(x)>0):
            print(mapper[i], "->", end=" (")
            for y in x[:-1]:
                print(mapper[y], end=", ")
            print(str(mapper[x[-1]])+")")

edges=[[1,0],[1,3],[3,1],[0,3],[1,2],[0,4],[6,2],[5,6],[7,6],[6,4]]
graph, mapper = getGraph(edges)

getMappedGraph(graph, mapper)

bfs=doBFS(graph, 1)

getMappedSearch(bfs, mapper)