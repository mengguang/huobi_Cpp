//
// Created by mengguang on 2020/2/3.
//

#include "Huobi/Decimal.h"

namespace Huobi {
    std::ostream & operator<<(std::ostream &out, const Decimal& obj) {
        out << obj.toString();
        return out;
    }

    std::istream & operator>>(std::istream &in, Decimal& obj) {
        std::string str;
        in >> str;
        obj = Decimal(str.c_str());
        return in;
    }
}