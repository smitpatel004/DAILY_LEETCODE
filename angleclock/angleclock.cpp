class Solution {
public:
    double angleClock(int hour, int minutes) {
        double n = 6*minutes;
        double ans = (30*hour) + (0.5 * minutes);
        return abs(min(360-abs(ans-n),abs(ans-n)));
    }
};
