using i64 = long long;

i64 modpow(i64 a, i64 n, i64 mod) {
  i64 res = 1;
  while (n > 0) {
    if (n % 2 != 0)
      res = res * a % mod;
    a = a * a % mod;
    n /= 2;
  }
  return res;
}
