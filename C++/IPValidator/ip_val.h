#include <bits/stdc++.h>
#define LIM "."


bool valid_part(char* s){
    int blk = strlen(s);
    if (blk > 3){
        return false;
    }
    for (int i = 0; i < blk; i++){
        if ((s[i] >= '0' && s[i] <= '9') == false){
            return false;
        }
    }
    std::string str(s);

    if (str.find('0') == 0 && blk > 1){
        return false;
    }
    std::stringstream bit(str);
    int x;
    bit >> x;

    return (x >= 0 && x <= 255);
}

int is_valid_ip(char* ip_str){
    if (ip_str == NULL){
        return 0;
    }
    int i, num, dots = 0;
    int len = strlen(ip_str);
    int count = 0;

    for (int i = 0; i < len; i++){
        if (ip_str[i] == '.'){
            count++;
        }
    }
    if (count !=3){
        return false;
    }

    char *ptr = strtok(ip_str, LIM);
    if (ptr == NULL)
        return 0;
 
    while (ptr) {
 
        if (valid_part(ptr)){
            ptr = strtok(NULL, ".");
            if (ptr != NULL)
                ++dots;
        }else{
            return 0;
        }
    }
    if (dots != 3){
        return 0;
    }
    return 1;
}
