class MedianFinder {
public:
    
    vector<int> arr;
    int size;

    MedianFinder() {
        size = 0;
    }
    
    void addNum(int num) {
        if (size == 0) {
            arr.push_back(num);
        }
        else {
            if (num <= arr[0]) {
                arr.insert(arr.begin(), num);
            }
            else if (num >= arr[size - 1]) {
                arr.push_back(num);
            }
            else {
                int s = 0;
                int e = size - 2;
    
                while (s <= e) {
                    int m = s + (e - s) / 2;
    
                    if (arr[m] <= num && num < arr[m + 1]) {
                        arr.insert(arr.begin() + m + 1, num);
                        break;
                    }
                    else if (num < arr[m]) {
                        e = m - 1;
                    }
                    else {
                        s = m + 1;
                    }
                }
            }
        }
    
        size++;
    }
    
    double findMedian() {
        if(size%2 == 1){
            return (arr[size/2]);
        }
        else{
            return ((double)(arr[size/2]+arr[(size/2)-1])/2);
        }
    }
};