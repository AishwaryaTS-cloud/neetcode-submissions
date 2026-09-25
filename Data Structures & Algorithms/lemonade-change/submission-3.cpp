class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        int twen = 0;

        for(int bill : bills){
            if(bill == 5)
                five++;
            else if(bill == 10){
                if(five >= 1){
                    five--;
                    ten++;
                }
                else
                    return false;
            }
            else{
                if(ten >= 1 && five >= 1){
                    ten--;
                    five--;
                    twen++;
                }
                else if(five >= 3){
                    five -= 3;
                    twen++;
                }
                else
                    return false;
            }
        }
        return true;
    }
};