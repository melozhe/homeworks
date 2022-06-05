vector<int> plusOne(vector<int>& digits) {
    reverse(digits.begin(), digits.end());
    vector<int> new_num;

    int carry = 0;
    int digit = 0;
    bool flag = true;
    for (int i = 0; i < digits.size(); ++i) {
        digit = digits[i];
        
        if (flag) {
            digit = digit + carry + 1;
            flag = false;
        } else {
                digit = digit + carry;
        }
        
        if (digit >= 10) {
            carry = 1;
            digit = digit - 10; 
        } else {
            carry = 0;
        }
        
        new_num.push_back(digit);
    }
    
    if (carry) {
        new_num.push_back(carry);
    }
    
    reverse(new_num.begin(), new_num.end());
    
    return new_num;
}