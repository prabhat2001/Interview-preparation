class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {

        int n = trips.size();
        vector<int> diff(1001, 0);

        for(auto& trip: trips){
            int passengers = trip[0];
            int from = trip[1];
            int to = trip[2];

            // maintain count of passengers adding up and dropping off at a given time
            diff[from] += passengers;
            cout << to;
            diff[to] -= passengers;
        }

        int totalPassengers = 0;
        for(int i = 0; i < diff.size(); ++i){
            totalPassengers += diff[i];

            if(totalPassengers > capacity) return false;
        }

        return true;
    }
};
