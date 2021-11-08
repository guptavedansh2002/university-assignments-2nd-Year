thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

#print(thisdict["brand"])

"""print(len(thisdict))"""

"""print(type(thisdict))"""

"""x = thisdict["brand"]
print(x)
y = thisdict.get("brand")
print(y)"""

"""thisdict["colour"] = "Blue Grey"
print(thisdict)"""

"""x = thisdict.values()
print(x)"""

"""x = thisdict.items()
print(type(x))"""

"""if "model" in thisdict:
    print(True)
else:
    print(False)"""

"""thisdict["year"] = "2002"
x = thisdict.values()
print(x)
"""
"""n = input()
thisdict.update({"year":n})
print(thisdict)"""

child1 = {
  "name" : "Emil",
  "year" : 2004
}
child2 = {
  "name" : "Tobias",
  "year" : 2007
}
child3 = {
  "name" : "Linus",
  "year" : 2011
}

myfamily = {
  "child1" : child1,
  "child2" : child2,
  "child3" : child3
}
print(myfamily)