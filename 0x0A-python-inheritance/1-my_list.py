#!/usr/bin/python3
""" My List Module"""

class MyLIst(list):
    """ Class that inherits from list """
    def print_sorted(self):
        """Prints a sorted list"""
        print(sorted(self.copy()))
