def find_max_weight_node(T, testcases):
    result = []
    
    for _ in range(T):
        N, edges = testcases.pop(0), testcases.pop(0)
        weights = [0] * N
        
        # Calculate weights of each node
        for i in range(N):
            if edges[i] != -1:
                weights[edges[i]] += i
        
        # Find the maximum weight and its corresponding node number
        max_weight = max(weights)
        max_node = weights.index(max_weight)
        
        result.append(max_node)
    
    return result

T=int(input())
testcases=[]
for i in range(T):
    inp = int(input())
    lst1= list(map(int, input().split()))
    testcases.append(inp)
    testcases.append(lst1)

lst=find_max_weight_node(T, testcases)  # Output: [22]
for i in lst:
    print(i , end=" ")