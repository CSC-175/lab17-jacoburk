// Definition of findHigh function goes here
template <typename A , typename B , typename C>
void findHigh(A arr[], B size, int &index,C &high ) {
    high = arr[0];
    for (int i = 0; i < size; i++) {
        if (high < arr[i]) {
            index =1;
            high = arr[i];
        }
    }

}