def alter(cal):
    cal[0]="Hello"

def main():
    cal=[0,'January','Fabruary','March','April','May','June','July','August','September','October','November','December']
    print("Initial values:")
    print(id(cal))
    for x in cal:
        print(x)
    alter(cal)
    print()
    print(id(cal))
    for x in cal:
        print(x)
    
        

main()

