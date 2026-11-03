list = ['''  +---+
  |   |
  O   |
 /|\  |
 /    |
      |
=========''' ,'''  +---+
  |   |
  O   |
 /|\  |
      |
      |
=========''', '''  +---+
  |   |
  O   |
 /|   |
      |
      |
=========''','''  +---+
  |   |
  O   |
  |   |
      |
      |
=========''','''  +---+
  |   |
  O   |
      |
      |
      |
=========''','''  +---+
  |   |
      |
      |
      |
      |
=========''']

words = [
    "banana", "orange", "monkey", "rabbit", "turtle", "donkey",
    "flower", "garden", "planet", "rocket", "school", "friend",
    "family", "mother", "father", "sister", "laptop", "camera",
    "window", "bottle", "pencil", "basket", "cheese", "coffee",
    "butter", "potato", "tomato", "carrot", "purple", "yellow",
    "silver", "golden", "circle", "square", "little", "simple",
    "bright", "strong", "smooth", "travel", "summer", "winter",
    "spring", "autumn", "sunset", "cloudy", "doctor", "police",
    "artist", "player", "driver", "writer", "market", "street",
    "castle", "bridge", "island", "forest", "desert", "pillow"
]

design = ''' _                                             
| |                                            
| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  
| '_ \ / _' | '_ \ / _' | '_ ' _ \ / _' | '_ \ 
| | | | (_| | | | | (_| | | | | | | (_| | | | |
|_| |_|\__,_|_| |_|\__, |_| |_| |_|\__,_|_| |_|
                    __/ |                      
                   |___/'''


def findall(s , char):
    indices = []
    for i in range(len(s)):
        if s[i]==char:
           indices.append(i)
    return indices

