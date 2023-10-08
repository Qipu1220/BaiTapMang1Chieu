/*
 * Phan tich do phuc tap cua thuat toan Interchange sort phien ban cai dat 2:
 Biến i chạy từ 0 đến n-2.
 Khi i = 0
    Biến j chạy từ n-1 đến 1.
    Có n-1 lần chạy
Khi i = 1
    Biến j chạy từ n-1 đến 2.
    Có n-2 lần chạy
Khi i = 2
    Biến j chạy từ n-1 đến 3.
    Có n-3 lần chạy
…
Khi i = k
    Biến j chạy từ n-1 đến k+1.
    Có (n-1-k) lần chạy
…
Khi i = n-2
    Biến j chạy từ n-1 đến n-1.
    Có 1 lần chạy

 Tổng số lần chạy là:
= (n-1)+(n-2)+⋯+(n-1-k)+⋯+3+2+1
= (n-1)*n/2
=(n^2-n)/2
=(1/2)n^2
=n^2
 - Vay do phuc tap cua thuat toan Interchange sort phien ban cai dat 2 la: O(n^2).
 ----------------------------------------------------------------------------------
 * Phan tich do phuc tap cua thuat toan Interchange sort phien ban cai dat 3:
 Biến i chạy từ n-1 đến 1.
 Khi i = n-1
    Biến j chạy từ 0 đến n-2.
    Có n-1 lần chạy
Khi i = n-2
    Biến j chạy từ 0 đến n-3.
    Có n-2 lần chạy
Khi i = n-3
    Biến j chạy từ 0 đến n-4.
    Có n-3 lần chạy
…
Khi i = n-k
    Biến j chạy từ 0 đến n-1-k.
    Có (n-1-k) lần chạy
…
Khi i = 1
    Biến j chạy từ 0 đến 0.
    Có 1 lần chạy

 Tổng số lần chạy là:
= (n-1)+(n-2)+⋯+(n-1-k)+⋯+3+2+1
= (n-1)*n/2
=(n^2-n)/2
=(1/2)n^2
=n^2
 - Vay do phuc tap cua thuat toan Interchange sort phien ban cai dat 3 la: O(n^2).
  ----------------------------------------------------------------------------------
 * Phan tich do phuc tap cua thuat toan Interchange sort phien ban cai dat 4:
 Biến i chạy từ n-1 đến 1.
 Khi i = n-1
    Biến j chạy từ n-2 đến 0.
    Có n-1 lần chạy
Khi i = n-2
    Biến j chạy từ n-3 đến 0.
    Có n-2 lần chạy
Khi i = n-3
    Biến j chạy từ n-4 đến 0.
    Có n-3 lần chạy
…
Khi i = n-k
    Biến j chạy từ n-1-k đến 0.
    Có (n-1-k) lần chạy
…
Khi i = 1
    Biến j chạy từ 0 đến 0.
    Có 1 lần chạy

 Tổng số lần chạy là:
= (n-1)+(n-2)+⋯+(n-1-k)+⋯+3+2+1
= (n-1)*n/2
=(n^2-n)/2
=(1/2)n^2
=n^2
 - Vay do phuc tap cua thuat toan Interchange sort phien ban cai dat 4 la: O(n^2).
  ----------------------------------------------------------------------------------
 * Phan tich do phuc tap cua thuat toan Interchange sort phien ban cai dat 5:
 Biến i chạy từ 0 đến n-2.
 Khi i = 0
    Biến j chạy từ n-1 đến 1.
    Có n-1 lần chạy
Khi i = 1
    Biến j chạy từ n-1 đến 2.
    Có n-2 lần chạy
Khi i = 2
    Biến j chạy từ n-1 đến 3.
    Có n-3 lần chạy
…
Khi i = k
    Biến j chạy từ n-1 đến k+1.
    Có (n-1-k) lần chạy
…
Khi i = n-2
    Biến j chạy từ n-1 đến n-1.
    Có 1 lần chạy

 Tổng số lần chạy là:
= (n-1)+(n-2)+⋯+(n-1-k)+⋯+3+2+1
= (n-1)*n/2
=(n^2-n)/2
=(1/2)n^2
=n^2
 - Vay do phuc tap cua thuat toan Interchange sort phien ban cai dat 5 la: O(n^2).
*/