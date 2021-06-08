string reformatDate(string date) {
        string ans = "";
        for(int i = date.size()-4; i < date.size(); i++){
            ans += date[i];
        }
        ans += '-';
        string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        int m = date.size()-8;
        for(int i = 0; i < 12; i++){
            if (months[i][0] == date[m] && months[i][1] == date[m+1] && months[i][2] == date[m+2]){
                if (i < 9){
                    ans += '0';
                    ans += char(i+49);
                }
                else{
                    ans += char(49);
                    ans += char((i+1)%10+48);
                }
            }
        }
        ans += '-';
        if (date[1] < 48 || date[1] > 57){
            ans += '0';
            ans += date[0];
        }else {
        ans += date[0];
        ans += date[1];}
        return ans;
    }