t = int(input())
for _ in range(t):
    text = input().split()
    reversed_text = ' '.join(word[::-1] for word in text)
    print(reversed_text)


"""" 
reversed_text = ' '.join(word[::-1] for word in text)
```

### Step-by-Step Simulation:

1. **Initial Input and Splitting:**
   - Suppose the input is `"This is a test"`.
   - `text = input().split()` splits the string into a list of words: `text = ['This', 'is', 'a', 'test']`.

2. **Reversing Each Word:**
   - The list comprehension `word[::-1] for word in text` iterates over each word in the `text` list and reverses it:
     - `word = 'This'` → `word[::-1] = 'sihT'`
     - `word = 'is'` → `word[::-1] = 'si'`
     - `word = 'a'` → `word[::-1] = 'a'`
     - `word = 'test'` → `word[::-1] = 'tset'`
   - The result of this list comprehension is `['sihT', 'si', 'a', 'tset']`.

3. **Joining Reversed Words:**
   - `' '.join(...)` takes the list `['sihT', 'si', 'a', 'tset']` and joins the elements into a single string, with a space `' '` separating each word.
   - The result is `"sihT si a tset"`.

4. **Final Result:**
   - The variable `reversed_text` now holds the string `"sihT si a tset"`, which is the reversed version of the input sentence word by word.

### Summary:
- The `reversed_text` line reverses each word in the sentence individually and then combines them back into a single string, maintaining the original word order but with each word reversed.

This is how the `reversed_text` line processes the input to produce the desired output."""