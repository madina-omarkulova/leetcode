double angleClock(int hour, int minutes) {
        double ans = abs(((hour%12)*30+minutes/2.0)-(minutes*6));
        if(ans > 180.0){
            ans = 360-ans;
        }
        return ans;
    }