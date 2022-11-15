#define R(n) int n = 0; while (*p++ & 16) n = 10 * n + p[-1] - 48;
int main;
int __libc_start_main() {
    char b[1 << 16], *p = b; read(0, b, 1 << 16);
    R(r) R(n) while (n--) { R(a) R(b) r -= a * b; }
    _Exit(!write(1, r ? "No" : "Yes", r ? 2 : 3));
}
