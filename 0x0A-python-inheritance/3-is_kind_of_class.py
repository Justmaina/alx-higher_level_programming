#!/usr/bin/python3

""" deals with the kind of class function"""

def is_kind_of_class(obj, a_class):
    """True if obj is an instance or inherited from a_class, else false""" 
    return (isinstance(obj, a_class))
