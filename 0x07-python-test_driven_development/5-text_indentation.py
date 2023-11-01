#!/usr/bin/python3
"""function that prints a text with two new lines after each of the characters
., ? and :
    TypeError if the  text is not a string
    No space at the beginning or at the end of each line"""
    def text_indentation(text):
        """splits a text into lines along "?", ".", ":" followed by two new lines"""
    if not isinstance(text, str):
        raise TypeError("text must be a string")

    punctuation_chars = ['.', '?', ':']
    new_line = True

    for char in text:
        if char in punctuation_chars:
            print(char)
            print()
            new_line = True
        elif char != ' ':
            if new_line:
                print(char, end='')
                new_line = False
            else:
                print(char, end='')
    print()
