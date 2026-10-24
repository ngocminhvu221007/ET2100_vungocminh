# Tìm bộ 4 số có tổng bằng Target

- Cho một mảng các số nguyên (chưa sắp xếp) và một giá trị `target`. Tìm tất cả các bộ 4 số trong mảng sao cho tổng của chúng đúng bằng `target`.

---

## Mô tả Giải thuật (Vét cạn)
- Bước 1:  Dùng 4 biến chạy `i`, `j`, `k`, `h` lồng nhau.
- Bước 2: Thiết lập điều kiện `i < j < k < h` giúp máy tính luôn chọn ra 4 phần tử ở 4 vị trí khác nhau trong mảng, tránh bị trùng lặp vị trí.
- Bước 3: Ở vòng lặp thứ 4, máy tính tính tổng 4 phần tử đang xét: `nums[i] + nums[j] + nums[k] + nums[l]`.
- Bước 4: Nếu tổng này bằng đúng giá trị `target` cần tìm, in bộ 4 số đó ra màn hình.

---

## Test Case
Input
  ```
n = 8
Target =20
{ 2, 7, 4, 0, 9, 5, 1, 3 }`
  ```
Output
  ```
  (2, 4, 9, 5)
  (7, 4, 0, 9)
  (7, 9, 1, 3)
