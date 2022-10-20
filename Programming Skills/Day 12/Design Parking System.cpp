class ParkingSystem {
public:
    int currbig , currmedium , currsmall ;
    ParkingSystem(int big, int medium, int small) {
        currbig = big ;
        currmedium = medium ;
        currsmall = small ;
    }
    
    bool addCar(int carType) {
        switch(carType){
            case 1:
                if(currbig > 0){
                    currbig--;
                    return true;
                }
                break;
            case 2:
                if(currmedium > 0){
                    currmedium--;
                    return true;
                }
                break;
            case 3:
                if(currsmall > 0){
                    currsmall--;
                    return true;
                }
                break;
            default:
                return false;    
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */