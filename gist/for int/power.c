int power(int taban, int us){
    return (us != 0) ?(taban*power(taban, us-1)):1;
}
