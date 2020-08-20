#include "isogram.h"

namespace isogram {
    bool is_isogram(std::string str) {
        int letterCount [26] = {0}; //Initializes a tally for each letter
        for(int i = 0; i < (int) str.length(); i++) {
            if(str[i] != '-' && str[i] != ' ') {
                short letterIndex = tolower(str[i]) - 'a';  //char a is subtracted to match letterCount index
                if(letterCount[letterIndex] > 0) {
                    return false;
                }else {
                    letterCount[letterIndex]++;
                }
            }
        }
        return true;
    }
}  // namespace isogram
