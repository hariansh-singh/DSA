import nltk
from nltk import ngrams
from collections import defaultdict, Counter

class NGramModel:
    def __init__(self, n):      
        self.n = n
        self.ngram_counts = defaultdict(Counter)
        self.context_counts = defaultdict(int)

    def train(self, corpus):
        for sentence in corpus:
            tokens = nltk.word_tokenize(sentence.lower())
            for ngram in ngrams(tokens, self.n, pad_left=True, pad_right=True, left_pad_symbol='<s>', right_pad_symbol='</s>'):
                context = tuple(ngram[:-1])
                word = ngram[-1]
                self.ngram_counts[context][word] += 1
                self.context_counts[context] += 1

    def probability(self, context, word):
        if self.context_counts[context] == 0:
            return 0
        return self.ngram_counts[context][word] / self.context_counts[context]

    def generate(self, context, max_words=20):
        generated_text = list(context)
        for _ in range(max_words):
            context = tuple(generated_text[-self.n+1:])
            if context not in self.context_counts:
                break
            probabilities = [(word, self.probability(context, word)) for word in self.ngram_counts[context]]
            word = max(probabilities, key=lambda x: x[1])[0]
            if word == '</s>':
                break
            generated_text.append(word)
        return ' '.join(generated_text)

corpus = [
    "This is a Hariansh Singh.",
    "This is another Hariansh Singh.",
    "Yet another Hariansh Singh."
]

model = NGramModel(n=2)

model.train(corpus)

context = ("this", "is")
generated_text = model.generate(context)
print(" ")
print("Generated Text:")
print(generated_text)
print(" ")