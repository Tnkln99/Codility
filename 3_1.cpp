int solution3_1(int X, int Y, int D) {
    if(X == Y){
        return 0;
    }
    int distance = Y - X;
    if (distance%D == 0)
        return distance / D;
    else
        return distance / D + 1;

}
