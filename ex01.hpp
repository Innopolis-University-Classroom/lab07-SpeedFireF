template <typename WhatKind>
void multiples (WhatKind& sum, WhatKind x, int n)
{
    sum += 1;
    for(int i = 1; i <= n; i++) {
        sum += i*x;
    }
}
