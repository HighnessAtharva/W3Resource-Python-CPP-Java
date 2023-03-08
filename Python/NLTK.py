# Python NLTK Corpus

# In linguistics, a corpus(plural corpora) or text corpus is a large and structured set of texts. In corpus linguistics, they are used to do statistical analysis and hypothesis testing, checking occurrences or validating linguistic rules within a specific language territory.
# Each corpus reader class is specialized to handle a specific corpus format. In addition, the nltk.corpus package automatically creates a set of corpus reader instances that can be used to access the corpora in the NLTK data package.

from nltk.tokenize import SExprTokenizer
from nltk.tokenize import sent_tokenize, word_tokenize
from nltk.tokenize import WordPunctTokenizer
from nltk.tokenize import word_tokenize
import random
from nltk.corpus import names
import nltk.data
from nltk.tokenize import TweetTokenizer
from nltk.corpus import wordnet
import nltk
from nltk.corpus import stopwords
import nltk.corpus
# 1. Write a Python NLTK program to list down all the corpus names.
dir(nltk.corpus)
print("\nAvailable corpus names:")
print(dir(nltk.corpus))

# 2. Write a Python NLTK program to get a list of common stop words in various languages in Python.
print(stopwords.fileids())

# 3. Write a Python NLTK program to check the list of stopwords in various languages.
# From Wikipedia:
# In computing, stop words are words which are filtered out before or after processing of natural language data(text). Though "stop words" usually refers to the most common words in a language, there is no single universal list of stop words used by all natural language processing tools, and indeed not all tools even use such a list. Some tools specifically avoid removing these stop words to support phrase search.
# Any group of words can be chosen as the stop words for a given purpose. For some search engines, these are some of the most common, short function words, such as the, is, at, which, and on. In this case, stop words can cause problems when searching for phrases that include them, particularly in names such as "The Who", "The The", or "Take That". Other search engines remove some of the most common words-including lexical words, such as "want"-from a query in order to improve performance.
result = set(stopwords.words('english'))
print("List of stopwords in English:")
print(result)
print("\nList of stopwords in Arabic:")
result = set(stopwords.words('arabic'))
print(result)
print("\nList of stopwords in Azerbaijani:")
result = set(stopwords.words('azerbaijani'))
print(result)
print("\nList of stopwords in Danish:")
result = set(stopwords.words('danish'))
print(result)
print("\nList of stopwords in Dutch:")
result = set(stopwords.words('dutch'))
print(result)
print("\nList of stopwords in Finnish:")
result = set(stopwords.words('finnish'))
print(result)
print("\nList of stopwords in French:")
result = set(stopwords.words('french'))
print(result)
print("\nList of stopwords in German:")
result = set(stopwords.words('german'))
print(result)
print("\nList of stopwords in Greek:")
result = set(stopwords.words('greek'))
print(result)
print("\nList of stopwords in Hungarian:")
result = set(stopwords.words('hungarian'))
print(result)
print("\nList of stopwords in Indonesian:")
result = set(stopwords.words('indonesian'))
print(result)
print("\nList of stopwords in Italian:")
result = set(stopwords.words('italian'))
print(result)
print("\nList of stopwords in Kazakh:")
result = set(stopwords.words('kazakh'))
print(result)
print("\nList of stopwords in Nepali:")
result = set(stopwords.words('nepali'))
print(result)
print("\nList of stopwords in Norwegian:")
result = set(stopwords.words('norwegian'))
print(result)
print("\nList of stopwords in Portuguese:")
result = set(stopwords.words('portuguese'))
print(result)
print("\nList of stopwords in Romanian:")
result = set(stopwords.words('romanian'))
print(result)
print("\nList of stopwords in Russian:")
result = set(stopwords.words('russian'))
print(result)
print("\nList of stopwords in Spanish:")
result = set(stopwords.words('spanish'))
print(result)
print("\nList of stopwords in Swedish:")
result = set(stopwords.words('swedish'))
print(result)
print("\nList of stopwords in Turkish:")
result = set(stopwords.words('turkish'))
print(result)


# 4. Write a Python NLTK program to remove stop words from a given text.
stoplist = stopwords.words('english')
text = '''
In computing, stop words are words which are filtered out before or after 
processing of natural language data (text). Though "stop words" usually 
refers to the most common words in a language, there is no single universal 
list of stop words used by all natural language processing tools, and 
indeed not all tools even use such a list. Some tools specifically avoid 
removing these stop words to support phrase search.
'''
print("\nOriginal string:")
print(text)
clean_word_list = [word for word in text.split() if word not in stoplist]
print("\nAfter removing stop words from the said text:")
print(clean_word_list)


# 5. Write a Python NLTK program to omit some given stop words from the stopwords list.
result = set(stopwords.words('english'))
print("List of stopwords in English:")
print(result)
print("\nOmit - 'again', 'once' and 'from':")
stop_words = set(stopwords.words('english')) - {'again', 'once', 'from'}
print("\nList of fresh stopwords in English:")
print(stop_words)


# 6. Write a Python NLTK program to find the definition and examples of a given word using WordNet.
# From Wikipedia,
# WordNet is a lexical database for the English language. It groups English words into sets of synonyms called synsets, provides short definitions and usage examples, and records a number of relations among these synonym sets or their members. WordNet can thus be seen as a combination of dictionary and thesaurus. While it is accessible to human users via a web browser, its primary use is in automatic text analysis and artificial intelligence applications. The database and software tools have been released under a BSD style license and are freely available for download from the WordNet website. Both the lexicographic data(lexicographer files) and the compiler(called grind) for producing the distributed database are available.
syns = wordnet.synsets("fight")
print("Defination of the said word:")
print(syns[0].definition())
print("\nExamples of the word in use::")
print(syns[0].examples())


# 7. Write a Python NLTK program to find the sets of synonyms and antonyms of a given word.
# From Winkled,
# WordNet is a lexical database for the English language. It groups English words into sets of synonyms called synsets, provides short definitions and usage examples, and records a number of relations among these synonym sets or their members.
synonyms = []
antonyms = []

for syn in wordnet.synsets("end"):
    for l in syn.lemmas():
        synonyms.append(l.name())
        if l.antonyms():
            antonyms.append(l.antonyms()[0].name())
print("\nSet of synonyms of the said word:")
print(set(synonyms))
print("\nSet of antonyms of the said word:")
print(set(antonyms))


# 8. Write a Python NLTK program to get the overview of the tagset, details of a specific tag in the tagset and details on several related tagsets, using regular expression.
print("Overview of the tagset:")
print(nltk.help.brown_tagset())
print("\nDetails of a specific tag :")
print(nltk.help.brown_tagset(r'NNS'))
print("\nDetails on several related tagsets, using regular expression:")
nltk.help.brown_tagset(r'WP*')


# 9. Write a Python NLTK program to compare the similarity of two given nouns.
print("\nComparing ship anb boat:")
n1 = wordnet.synset('ship.n.01')
n2 = wordnet.synset('boat.n.01')
print("\nComparing bus anb boat:")
print(n1.wup_similarity(n2))
n1 = wordnet.synset('bus.n.01')
n2 = wordnet.synset('boat.n.01')
print(n1.wup_similarity(n2))
print("\nComparing red anb greed:")
n1 = wordnet.synset('red.n.01')
n2 = wordnet.synset('green.n.01')
print(n1.wup_similarity(n2))

# 10. Write a Python NLTK program to compare the similarity of two given verbs.
print("\nComparing go anb return:")
v1 = wordnet.synset('go.v.01')
v2 = wordnet.synset('return.v.01')
print(v1.wup_similarity(v2))

print("\nComparing buy anb sell:")
v1 = wordnet.synset('buy.v.01')
v2 = wordnet.synset('sell.v.01')
print(v1.wup_similarity(v2))

print("\nComparing begin anb start:")
v1 = wordnet.synset('begin.v.01')
v2 = wordnet.synset('start.v.01')
print(v1.wup_similarity(v2))

# 11. Write a Python NLTK program to find the number of male and female names in the names corpus. Print the first 10 male and female names.
# Note: The names corpus contains a total of around 2943 male(male.txt) and 5001 female(female.txt) names. It's compiled by Kantrowitz, Ross.
from nltk.corpus import names
print("\nNumber of male names:")
print (len(names.words('male.txt')))
print("\nNumber of female names:")
print (len(names.words('female.txt')))
male_names = names.words('male.txt')
female_names = names.words('female.txt')
print("\nFirst 10 male names:")
print(male_names[:15])
print("\nFirst 10 female names:")
print(female_names[:15])


# 12. Write a Python NLTK program to print the first 15 random combine labeled male and labeled female names from names corpus.
male_names = names.words('male.txt')
female_names = names.words('female.txt')
labeled_male_names = [(str(name), 'male') for name in male_names]
labeled_female_names = [(str(name), 'female') for name in female_names]

# combine labeled male and labeled female names
labeled_all_names = labeled_male_names + labeled_female_names
# shuffle the labeled names array
random.shuffle(labeled_all_names)
print("First 15 random labeled combined names:")
print(labeled_all_names[:15])


# 13. Write a Python NLTK program to extract the last letter of all the labeled names and create a new array with the last letter of each name and the associated label.
from nltk.corpus import names
import random
male_names = names.words('male.txt')
female_names = names.words('female.txt')
labeled_male_names = [(str(name), 'male') for name in male_names]
labeled_female_names = [(str(name), 'female') for name in female_names]
# combine labeled male and labeled female names
all_labeled_names = labeled_male_names + labeled_female_names
feature_set = [(name[-1], gender) for (name, gender) in all_labeled_names]
print("\nFirst 15 labeled names:")
print((all_labeled_names[:15]))
print("\nLast letter of all the labeled names with the associated label:")
print((feature_set[:15]))


# Python NLTK Tokenize
# What is Tokenize?
# Tokenization is the process of demarcating and possibly classifying sections of a string of input characters. The resulting tokens are then passed on to some other form of processing. The process can be considered a sub-task of parsing input.

# 1. Write a Python NLTK program to split the text sentence/paragraph into a list of words.
text = '''
Joe waited for the train. The train was late. 
Mary and Samantha took the bus. 
I looked for Mary and Samantha at the bus station.
'''
print("\nOriginal string:")
print(text)
from nltk.tokenize import sent_tokenize
token_text = sent_tokenize(text)
print("\nSentence-tokenized copy in a list:")
print(token_text)
print("\nRead the list:")
for s in token_text:
    print(s)

# 2. Write a Python NLTK program to tokenize sentences in languages other than English.
text = '''
NLTK ist Open Source Software. Der Quellcode wird unter den Bedingungen der Apache License Version 2.0 vertrieben.  
Die Dokumentation wird unter den Bedingungen der Creative Commons-Lizenz Namensnennung - Nicht kommerziell - Keine 
abgeleiteten Werke 3.0 in den Vereinigten Staaten verteilt.'''
print("\nOriginal string:")
print(text)
from nltk.tokenize import sent_tokenize
token_text = sent_tokenize(text, language='german')
print("\nSentence-tokenized copy in a list:")
print(token_text)
print("\nRead the list:")
for s in token_text:
    print(s)


# 3. Write a Python NLTK program to create a list of words from a given string.
text = "Joe waited for the train. The train was late. Mary and Samantha took the bus. I looked for Mary and Samantha at the bus station."
print("\nOriginal string:")
print(text)
print("\nList of words:")
print(word_tokenize(text))


# 4. Write a Python NLTK program to split all punctuation into separate tokens.
text = "Reset your password if you just can't remember your old one."
print("\nOriginal string:")
print(text)
result = WordPunctTokenizer().tokenize(text)
print("\nSplit all punctuation into separate tokens:")
print(result)


# 5. Write a Python NLTK program to tokenize words, sentence wise.
text = "Joe waited for the train. The train was late. Mary and Samantha took the bus. I looked for Mary and Samantha at the bus station."
print("\nOriginal string:")
print(text)
print("\nTokenize words sentence wise:")
result = [word_tokenize(t) for t in sent_tokenize(text)]
print("\nRead the list:")
for s in result:
    print(s)


# 6. Write a Python NLTK program to tokenize a twitter text.
tknzr = TweetTokenizer(strip_handles=True, reduce_len=True)
tweet_text = "NoSQL introduction - w3resource http://bit.ly/1ngHC5F  #nosql #database #webdev"
print("\nOriginal Tweet:")
print(tweet_text)
result = tknzr.tokenize(tweet_text)
print("\nTokenize a twitter text:")
print(result)


# 7. Write a Python NLTK program to remove Twitter username handles from a given twitter text.
tknzr = TweetTokenizer(strip_handles=True)
tweet_text = "@abcd @pqrs NoSQL introduction - w3resource http://bit.ly/1ngHC5F  #nosql #database #webdev"
print("\nOriginal Tweet:")
print(tweet_text)
result = tknzr.tokenize(tweet_text)
print("\nTokenize a twitter text:")
print(result)


# 8. Write a Python NLTK program that will read a given text through each line and look for sentences. Print each sentence and divide two sentences with "==============".
text = '''
Mr. Smith waited for the train. The train was late.
Mary and Samantha took the bus. I looked for Mary and
Samantha at the bus station.
'''
print("\nOriginal Tweet:")
print(text)
sent_detector = nltk.data.load('tokenizers/punkt/english.pickle')
print('\n==============\n'.join(sent_detector.tokenize(text.strip())))


# 9. Write a Python NLTK program to find parenthesized expressions in a given string and divides the string into a sequence of substrings.
text = '(a b (c d)) e f (g)'
print("\nOriginal Tweet:")
print(text)
print(SExprTokenizer().tokenize(text))
text = '(a b) (c d) e (f g)'
print("\nOriginal Tweet:")
print(text)
print(SExprTokenizer().tokenize(text))
text = '[(a b (c d)) e f (g)]'
print("\nOriginal Tweet:")
print(text)
print(SExprTokenizer().tokenize(text))
print(text)
print(SExprTokenizer().tokenize(text))
text = '{a b {c d}} e f {g}'
print("\nOriginal Tweet:")
print(text)
print(SExprTokenizer().tokenize(text))
