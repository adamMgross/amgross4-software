__author__ = 'adammichaelgross'
class bounded_queue(object):
    # constructor
    # @param num: the capacity of the queue
    def __init__(self, num):
        if type(num) is not int:
            raise Exception('Type given is not of type int.')
        self.capacity = num
        self.size = 0
        self.queue = []

    # adds @param num to the queue after bounds checking
    # raises exception if queue is already full
    def enqueue(self, num):
        if type(num) is not int:
            raise Exception('Type given is not of type int.')
        if (self.size == self.capacity):
            raise Exception('Queue is full')
        self.queue.append(num)
        self.size += 1

    # removes first element from the queue
    # raises exception if there are no elements in queue (queue is empty)
    def dequeue(self):
        if (self.size == 0):
            raise Exception('Queue is empty')
        self.queue.pop(0)
        self.size -= 1
