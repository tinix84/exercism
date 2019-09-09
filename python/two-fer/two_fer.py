# -*- coding: utf-8 -*-
"""
Created on Tue Sep  3 15:27:03 2019

@author: tinivella
"""
def two_fer(name=None):
    " First exercise from exercism.io "
    if name is None:
        string_to_say = ("One for you, one for me.")
    else:
        string_to_say = ("One for %s, one for me." % name)
    return string_to_say

def two_fer_dRpSY(name="you"):
    #return "One for " + name + ", one for me."
    #return "One for %s, one for me." % name
    #return "One for {}, one for me.".format(name)
    return f"One for {name}, one for me."
