class Solution {
   public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp = temp + s[i];
            }
        }
        words.push_back(temp);

        if (words.size() != pattern.size()) return false;

        map<string, char> wordToChar;
        map<char, string> charToWord;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string word = words[i];

            if (wordToChar.find(word) != wordToChar.end()) {
                if (wordToChar[word] != c) return false;
            } else {
                wordToChar[word] = c;
            }

            if (charToWord.find(c) != charToWord.end()) {
                if (charToWord[c] != word) return false;
            } else {
                charToWord[c] = word;
            }
        }
        return true;
    }
};