from collections import Counter

def is_pangram(sentence:str):
    
    pangram_sentence = False
    
    cnt = Counter(sentence.lower())

    char_list = [c for c in list(cnt.keys()) if c.isalpha()]
    if len(char_list) == 26:
        pangram_sentence = True
        
    return pangram_sentence
