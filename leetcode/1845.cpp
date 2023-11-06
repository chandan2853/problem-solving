class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>> seat;
    int num;
    SeatManager(int n) {
        num=1;
        //seat.resize(n);
        //std::fill(seat.begin(), seat.end(), 0);
    }
    
    int reserve() {
        int no;
        if(seat.empty()){
            return num++;
        }
        else{
            no= seat.top();
            seat.pop();
        }
        return no;
    }
    
    void unreserve(int seatNumber) {
        seat.push(seatNumber);
    }
};
