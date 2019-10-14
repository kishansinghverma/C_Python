import pandas as pd
import nltk
import gensim
from nltk.stem import WordNetLemmatizer
from nltk.stem.porter import *
import numpy as np

print("Import Complete...")

data = pd.read_csv('abcnews-date-text.csv', error_bad_lines=False);
data_text = data[['headline_text']]
data_text['index'] = data_text.index
documents = data_text

np.random.seed(2018)
nltk.download('wordnet')

stemmer = PorterStemmer()

def lemmatize_stemming(text):
    return stemmer.stem(WordNetLemmatizer().lemmatize(text, pos='v'))
def preprocess(text):
    print("Start processing text")
    result = []
    for token in gensim.utils.simple_preprocess(text):
        if token not in gensim.parsing.preprocessing.STOPWORDS and len(token) > 3:
            result.append(lemmatize_stemming(token))
    return result

doc_sample = documents[documents['index'] == 4310].values[0][0]
print('original document: ')
words = []
for word in doc_sample.split(' '):
    words.append(word)
print(words)
print('\n\nTokenized and lemmatized document: ')
print(preprocess(doc_sample))
print("Done")