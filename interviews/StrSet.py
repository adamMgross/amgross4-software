from sets import Set

# Takes a string named str, and a string named set.
# Returns the index of the first appearance of any
# char from set in str or None if not found.
def char_in_set(str, set):
    char_set = Set(set)
    for i, char in enumerate(str):
        if char in char_set:
            return i

    return None
