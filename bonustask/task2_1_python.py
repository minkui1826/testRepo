class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
class Stack:
    def __init__(self):
        self.head = None
        self.size = 0
        
    def push(self,data):
        node = Node(data)
        node.next = self.head
        self.head = node
        self.size += 1
    
    def pop(self):
        if self.size > 0:
            crnt_node = self.head.next
            self.head = crnt_node
            self.size-=1
        
    def is_empty(self):
        if self.size==0: return True
        else: return False
        
    def is_full(self):
        if self.size == 10: return True
        else: return False
        
    def peek(self):
        return self.head.data
    
stack = Stack()
print("is_empty? ",stack.is_empty())
stack.push(1)
stack.push(2)
stack.push(3)
stack.push(4)
print("is_empty? ",stack.is_empty())
stack.push(5)
stack.push(6)
stack.push(7)
print("is_full? ",stack.is_full())
stack.push(8)
stack.push(9)
stack.push(10)
print("is_full? ",stack.is_full())
stack.pop()
print("peek? ",stack.peek())
print("python_202212977_ChoiMinKyu")
