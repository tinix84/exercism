def convert(number):
    
    string_to_return = ''

    if (number % 3) == 0:
        string_to_return += "Pling"
    if (number % 5) == 0:
        string_to_return += "Plang"
    if (number % 7) == 0:
        string_to_return += "Plong"
    if string_to_return == '':
        string_to_return = str(number)

    return str(string_to_return)
        
