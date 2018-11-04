//扩展欧几里德算法求解a * x + b * y = gcd(a, b)的一组解...

int exgcd(int a, int b, int &x, int &y) { //x, y 必须用引用类型或者指针...
    if(!b) { x = 1, y = 0;return a;} //a * 1 + 0 * 0 = a;递归终点也是第一个不定方程的解..
    int d = exgcd(b, a % b, y, x); //求b * x + (a % b) * y = d 的解(x, y)
    y -= a / b * x;  // 利用上面的结果求出a * x + b * y = d的解.
    return d; //返回最大公因数...
}
