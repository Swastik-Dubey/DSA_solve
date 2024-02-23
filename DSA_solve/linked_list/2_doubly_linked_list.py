class Node:
    def __init__(self, data=None,next=None,prev=None):
        self.data = data
        self.next = next
        self.prev = prev


class DoublyLinkedList:
    def __init__(self):
        self.head = None
    
    
    def insert_at_begin(self,data):
        if self.head is None:
            node=Node(data,self.head,None)
            self.head=node
        else:
            node=Node(data,self.head,None)
            self.head.prev=node
            self.head=node
    def print(self):
        if self.head is  None:
            print("Lined List is empty")    
        
        itr=self.head
        llstr=''
        while itr:
            llstr+=str(itr.data)+ '<---->'
            itr=itr.next   
            
        print(llstr)    
    def insert_at_end(self,data):
        if self.head is None:
            self.head=Node(data,None,None)
            return
        itr=self.head
   
        while itr.next:
            itr=itr.next  
    
        itr.next=Node(data,None,itr) 
    
    def get_length(self):
        count=0
        itr=self.head
        while itr:
            itr=itr.next
            count+=1
        return count    
    def insert_at(self,index,data):
        if index<0 or index>=self.get_length(): 
            return Exception("Invalid index")
        
        if index==0:
            self.insert_at_begin(data)
            return
        
        count=0
        itr=self.head
        while itr:
            if count==index-1:
                new_node=Node(data,itr.next,itr)
                itr.next=new_node
                break
            
            itr=itr.next
            count+=1
    
    def remove_at(self,index):
        if index<0 or index>=self.get_length(): 
            return Exception("Invalid index")
        
        if index==0:
            self.head=self.head.next
            return
        
        count=0
        itr=self.head
        while itr:
            if count==index-1:
                itr.next=itr.next.next
                break
            
            itr=itr.next
            count+=1
    def print_back(self):
        if self.head is  None:
            print("Lined List is empty")   
            return 
        
        
        itr=self.head
        
        while itr.next:
            itr=itr.next 
        llstr=''
        while itr:
            llstr+=str(itr.data)+"<-->"
            itr=itr.prev
                 
            
        print(llstr)
        
    def insert_values(self, data_list):
        self.head = None
        for data in data_list:
            self.insert_at_end(data)    
if __name__ == '__main__':
    dll=DoublyLinkedList()
    dll.insert_at_begin(5)
    dll.insert_at_begin(89)
    dll.insert_at_begin(79)
    dll.insert_at_end(33)
    dll.insert_at(2,44)
    dll.remove_at(2)
    dll.print()
    dll.print_back()
                        