using namespace std;

long long solution(int w,int h) {
    long long answer = 1;
    long long wl = (long)w;
    long long hl = (long)h;

    long long a=wl, b=hl;
    if (wl > hl) {
        a=hl;
        b=wl;
    }
    long long gcd=1;
    while (gcd >0) {
        gcd = b%a;
        b = a;
        a = gcd;
    }
    answer=wl*hl-(wl+hl-b);
    return answer;
}
