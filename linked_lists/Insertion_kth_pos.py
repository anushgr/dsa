# cook your dish here
class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_after_k(self, value, k):
        new_node = Node(value)
        current = self.head

        if current is None:
            self.head = new_node
            return
        
        for _ in range(k-1):
            current = current.next
        new_node.next = current.next
    
        current.next = new_node



    def print_values(self):
        current = self.head
        while current:
            print(current.value, end=" ")
            current = current.next
        print()

if __name__ == "__main__":
    n = int(input())
    x, k = map(int, input().split())
    linked_list = LinkedList()
    vals = list(map(int, input().split()))
    for i in range(len(vals)):
        a = vals[i]
        linked_list.insert_after_k(a, i)
    linked_list.insert_after_k(x, k)
    linked_list.print_values()
