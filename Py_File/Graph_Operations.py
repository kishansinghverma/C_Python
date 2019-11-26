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
    q.put(start)

    while(not q.empty()):
        n=q.get()
        bfs.append(n)

        for x in graph[n]:
            if(not visited[x]):
                q.put(x)
                visited[x]=True

    return bfs

def doDFS(graph, start):
    s=[]
    visited=[False]*len(graph)
    dfs=[]
    s.append(start)

    while(len(s)>0):
        n=s.pop()
        if(not visited[n]):
            dfs.append(n)
            visited[n]=True

        for v in reversed(graph[n]):
            if(not visited[v]):
                s.append(v)

    return dfs

def getLevel(graph, mapper, start):
    visited=[False]*len(graph)
    q=queue.Queue()
    q.put(start)
    level=[0]*len(graph)

    while(not q.empty()):
        n=q.get()
        for x in graph[n]:
            if(not visited[x]):
                level[x]=level[n]+1
                q.put(x)

        visited[n]=True;

    print("\nLevels of nodes are:")
    for i, x in enumerate(level[1:]):
        print(mapper[i+1],":",x)

def getMappedSearch(bfs, mapper):
    print("\nMapped Search Of Given Graph Is:\n(", end="")
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

edges=[[0,2],[1,6],[2,4],[2,5],[3,5],[4,7],[5,1],[5,3],[5,6],[6,5],[6,7],[7,5]]
graph, mapper = getGraph(edges)

getMappedGraph(graph, mapper)

bfs=doBFS(graph, 1)

getMappedSearch(bfs, mapper)

dfs=doDFS(graph, 1)

getMappedSearch(dfs, mapper)

getLevel(graph, mapper, 1)