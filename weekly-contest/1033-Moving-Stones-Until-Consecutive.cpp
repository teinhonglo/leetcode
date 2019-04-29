class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        // check if a < b < c (x < y < z)
        int tmp = 0;
        while(!(a <= b && b <= c)){
            if(a > b){
                tmp = a;
                a = b;
                b = tmp;
            }
            if(b > c){
                tmp = b;
                b = c;
                c = tmp;
            }
        }
        // moving stone until consecutive
        int min = 0, max = 0;
        if(b - a > 1 && (b - a <= c - b)){
            // c->a+1, b->a+2
            min = 1 + ((b - (a + 1) - 1) > 0);
            // c(c->b+1, b+1->b-1), a(a->b-2)
            max = (c - b - 1) + 1 + ((b-1) - a-1);
        }else if(c- b > 1 && (c- b < b - a)){
            // a->b+1, c->b+2
            min = 1 + ((c - (b + 1) - 1) > 0);
            // a(a->b-1, b-1->b+1), c(c->b+2)
            max = (b - a - 1) + 1 + (c - (b+1) - 1);
        }else{
            min = ((b - a - 1) > 0) + ((c - b - 1) > 0);
            max = (b - a - 1) + (c - b - 1);
        }
        vector<int> min_max{min, max};
        return min_max;
    }
};
