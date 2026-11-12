vocabulary = {
    "Abundant": "प्रचुर मात्रा में",
    "Benevolent": "दयालु",
    "Courage": "साहस",
    "Diligent": "मेहनती",
    "Eloquent": "वाक्पटु",
    "Fragile": "नाज़ुक",
    "Gratitude": "कृतज्ञता",
    "Humble": "विनम्र",
    "Inevitable": "अपरिहार्य",
    "Magnificent": "शानदार",
    "Optimistic": "आशावादी",
    "Persistent": "दृढ़",
    "Resilient": "लचीला / कठिनाइयों से उबरने वाला",
    "Serene": "शांत",
    "Wisdom": "बुद्धिमत्ता"
}

# Accessing a meaning
print(vocabulary["Abundant"])

# Checking whether a word exists
print("Courage" in vocabulary)

# Printing all words and meanings
for word, meaning in vocabulary.items():
    print(word, ":", meaning)

#Python is Not limited to fixed data types in key value pairs
mp = {
    1 : "A number" ,
    "hello":"A greet",
    True : "A boolean value",
    'c' : "a character(but str in Python) value",
    'cd' : 34
}
print(mp[True])