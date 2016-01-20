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
    int na = a.length(), nb = b.length(), da=0, db=0, sum=0;
    int digit = 0, carry = 0;
    std::string str="";

    for(int i=0; i<std::max(na,nb); i++){
        da = int( (i<na) ? a.at(na-1-i) : 0 );
        db = int( (i<nb) ? b.at(na-1-i) : 0 );
        sum = da + db + carry;
        digit = sum % place;
        carry = sum / place;
        str.append(to_string(digit));
    }
    if(carry > 0) str.append(to_string(carry));

    return str;
    //return reverse(str.begin(), str.end());
}


#endif
