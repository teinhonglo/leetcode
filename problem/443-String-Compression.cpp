class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() == 1) return 1;
        int st_idx = 0, cur_count = 1, ck_size = chars.size();
        char prev_char = chars[0];
        for(int i = 1; i < ck_size; i++){
            if(prev_char == chars[i]){
                cur_count++;
            }
            if(prev_char != chars[i] || i == ck_size - 1){
                if(cur_count != 1){
                    vector<char> tmp;
					char cur_char = chars[i];
                    // check digit of count (reverse)
                    while(cur_count){
                        tmp.push_back(cur_count % 10 + '0');
                        cur_count /= 10;
                    }
                    // replace with number of count
                    for(int j = tmp.size() - 1; j >= 0 ; j--){
                        chars[++st_idx] = tmp[j];
                    }
                    // shift right to left
                    st_idx += 1;
                    int tmp_size = (st_idx < i)?ck_size-(i - st_idx):ck_size;
                    for(int j = 0; st_idx + j < ck_size && i + j < ck_size; j++){
                        chars[st_idx + j] = chars[i + j];
                    }
                    if(i == ck_size - 1){
                        // check if last value is char or interger (compression)
                        ck_size = (prev_char == cur_char)?st_idx:st_idx + 1;
                        break;
                    }
                    // shift to next char
                    ck_size = tmp_size;
                    i = st_idx;
                    prev_char = chars[i];
                    cur_count = 1;
                }else{
                    // no compression
                    // shift to next char
                    st_idx = i;
                    prev_char = chars[i];
                    cur_count = 1;
                }
            }
        }
        return ck_size;
    }
};
