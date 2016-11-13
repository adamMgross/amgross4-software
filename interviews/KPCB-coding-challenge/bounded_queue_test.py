
__author__ = 'adammichaelgross'

from bounded_queue import bounded_queue

# tests Constructor
# returns 0 if failed, 1 if passed
def test_ctor():
    print 'Constructor Test:'
    empty_queue = bounded_queue(0)

    try:
        wrong_queue = bounded_queue('string')
        print '                         This message should not be seen. There is a problem with your constructor exception handling.'
        print '                         Failed'
        return 0
    except Exception:
        print '                         Exception caught.'

    try:
        empty_queue.enqueue(4)
        print '                         This message should not be seen. There is a problem with your enqueue exception handling.'
        print '                         Failed'
        return 0
    except Exception:
        print '                         Exception caught.'

    try:
        empty_queue.dequeue()
        print '                         This message should not be seen. There is a problem with your dequeue exception handling.'
        print '                         Failed'
        return 0
    except Exception:
        print '                         Exception caught.'

    print '                         Passed'
    return 1

# tests enqueue
# returns 0 if failed, 1 if passed
def test_enqueue():
    print 'Enqueue Test:'

    test_queue = bounded_queue(3)
    test_queue.enqueue(1)
    test_queue.enqueue(2)
    test_queue.enqueue(3)
    if test_queue.queue[1] != 2:
        print '                         Enqueue appended values incorrectly.'
        print '                         Failed'
        return 0

    try:
        test_queue.enqueue('string')
    except Exception:
        print '                         Exception caught.'
    print '                         Passed'
    return 1

# tests dequeue
# returns 0 if failed, 1 if passed
def test_dequeue():
    print 'Dequeue Test:'
    test_queue = bounded_queue(3)
    test_queue.enqueue(1)
    test_queue.enqueue(2)
    test_queue.enqueue(3)
    test_queue.dequeue()
    if test_queue.queue[1] != 3:
        print '                         Dequeue removed value or shifted values incorrectly.'
        print '                         Failed'
        return 0
    print '                         Passed'
    return 1

# runs all 3 tests and presents results
def main():
    print '-----------------------------------------------'
    print '\nTesting bounded_queue...\n'
    total = 0
    passes = 0

    passes += test_ctor()
    total += 1
    passes += test_enqueue()
    total += 1
    passes += test_dequeue()
    total += 1

    print '\n        Test done.\n'
    print '        Passes: ' + str(passes)
    print '        Fails: ' + str(total-passes) + '\n'
    print '-----------------------------------------------'
main()
