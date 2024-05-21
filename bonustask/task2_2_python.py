class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
class Queue:
    def __init__(self):
        self.front = None
        self.rear = None
        self.size = 0
        
    def push(self,data):
        node = Node(data)
        if self.front==None and self.rear==None:
            
        
    
    def pop(self):
        
        
    def is_empty(self):
        if self.size==0: return True
        else: return False
        
    def is_full(self):
        if self.size == 10: return True
        else: return False
        
    def peek(self):
        return self.front.data
    
q = Queue()
print("is_empty? ",q.is_empty())
q.push(1)
q.push(2)
q.push(3)
q.push(4)
print("is_empty? ",q.is_empty())
q.push(5)
q.push(6)
q.push(7)
print("is_full? ",q.is_full())
q.push(8)
q.push(9)
q.push(10)
print("is_full? ",q.is_full())
q.pop()
print("peek? ",q.peek())
print("python_202212977_ChoiMinKyu")
