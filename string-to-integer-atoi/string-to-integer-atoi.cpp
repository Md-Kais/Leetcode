class Solution {
public:
    int myAtoi(string s) {
        //Read in and clear any leading white space
        string newS;
        int i;
        for(i = 0; s[i] == ' '; i++){
            newS = s.substr(i + 1);
        }
        if(newS == ""){ newS = s;}

        //Check for any "+" or "-"
        i = 0;
        bool isNegative = newS[i] == '-';
        bool isPositive = newS[i] == '+';
        if(isNegative || isPositive){ i += 1; }

        //Read in until next non-digit or the end
        vector<int> values;
        while(i < s.size()){
            if(!isdigit(newS[i])){
                break;
            }
            values.push_back(int(newS[i] - '0'));
            i++;
        }

        //Convert to a value
        int value = 0;
        int sign = isNegative ? -1 : 1;
        for(int i = 0; i < values.size(); i++){
            
            int dgiit = sign * (values[i]);

            //Check for overflow
            if(isNegative){
                if(value < (INT32_MIN - dgiit) / 10){ return INT32_MIN; }
            }
            else{
                if(value > (INT32_MAX - dgiit) / 10){ return INT32_MAX; }
            }
            value *= 10;

            value += dgiit ;
        }

        return value;
    }
};