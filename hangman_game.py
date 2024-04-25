import random

def hangman():
    words = ['apple', 'banana', 'cherry', 'date', 'elderberry', 'fig', 'grape']
    word = random.choice(words)
    guessed_letters = []
    tries = 6

    while tries > 0:
        guessed_word = ""
        for letter in word:
            if letter in guessed_letters:
                guessed_word += letter
            else:
                guessed_word += "_"

        print("Guessed word:", guessed_word)
        print("Tries left:", tries)

        if guessed_word == word:
            print("Congratulations! You guessed the word correctly!")
            return

        guess = input("Enter a letter: ").lower()

        if guess in guessed_letters:
            print("You already guessed that letter. Try again.")
        elif guess in word:
            guessed_letters.append(guess)
            print("Good guess!")
        else:
            tries -= 1
            print("Wrong guess!")

    print("Game over! The word was", word)

hangman()