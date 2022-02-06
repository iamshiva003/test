class Queue:
    def __init__(self,item):
        size = 5
        que = [size]
        r = -1
        f = 0
        count = 0
        item = item
        print (item)
        
    def insert(self):
        item = input("Enter the number \n")
        Queue(item)
        # if self.count == self.size:
        #     print ("Queue is Full ")
        #     return
    
queue = Queue()

print("hi")
while True:
    print ("Enter your choice :")
    choice = int(input("1.Insert \n2.Delete \n3.Display \n4.Exit \n"))

    if choice == 1:
        queue.insert()
    # elif choice == 2:
    #     queue.delete()
    # elif choice == 3:
    #     queue.display()
    # elif choice == 4:
    #     exit()
    