# Trộn hai mảng đã sắp xếp (In-place Merge Two Sorted Arrays)

- Trộn hai mảng số nguyên `X` (kích thước `m`) và `Y` (kích thước `n`) đã được sắp xếp tăng dần từ trước. Sau khi trộn, mảng `X` sẽ chứa `m` phần tử nhỏ nhất và `Y` chứa `n` phần tử lớn hơn, tất cả đều duy trì thứ tự tăng dần.

Chương trình giải quyết bài toán không dùng mảng phụ - in-place.
---

## Mô tả giải thuật
1. Duyệt qua từng phần tử `X[i]` của mảng `X`.
2. So sánh `X[i]` với phần tử nhỏ nhất của mảng `Y` hiện tại (luôn nằm ở `Y[0]`).
3. Nếu `X[i] > Y[0]`:
   * Đổi chỗ `X[i]` và `Y[0]`. Lúc này, phần tử tại `X[i]` đã đúng vị trí.
   * Lưu giá trị mới của `Y[0]` vào biến `first`.
   * Dùng vòng lặp dịch chuyển các phần tử trong `Y` (từ trái sang phải) nhỏ hơn `first` sang trái một vị trí.
   * Chèn `first` vào khoảng trống vừa tạo ra để khôi phục tính sắp xếp tăng dần cho `Y`.
---
## Test cases
Input
```
3 4
2 6 8
0 3 7 9
```
Output
```
0 2 3 
6 7 8 9
```
