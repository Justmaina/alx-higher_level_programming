#!/usr/bin/python3
"""module that returns true if an object is of the specified instance"""

def is_same_class(obj, a_class):
    """return true if object is the exact class a_class if not, False"""
    return (type(obj) == a_class)
