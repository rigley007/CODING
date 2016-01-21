#ifndef _ADD_BINARY_STRINGS_HPP
#define _ADD_BINARY_STRINGS_HPP

#include <string>
#include <algorithm>
#include <sstream>

template <typename T>
std::string to_string(T value){
    std::ostringstream os;
    os << value;
    return os.str();
}

std::string addBinary(std::string a, std::string b){
    int place = 2;
    int na = a.length(), nb = b.length(), sum=0;
    int digit = 0, carry = 0;
    std::string str;

    for(int i=0; i<std::max(na,nb); i++){
        int da = ( (i<na) ? a.at(na-1-i) - '0' : 0) ;
        int db = ( (i<nb) ? b.at(nb-1-i) - '0' : 0) ;
        sum = da + db + carry;
        digit = sum % place;
        carry = sum / place;
        str.append(to_string(digit));
    }
    if(carry > 0) str.append(to_string(carry));

    std::reverse(str.begin(), str.end());

    return str;
}


#endif
