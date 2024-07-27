def spam(divideBy):
    try:
        return 42 / divideBy
    except ZeroDivisionError:
        return 'Error: Invalid argument.'
print(spam(2))
print(spam(12))
print(spam(0))  # This will now be handled by the exception inside the function
print(spam(1))