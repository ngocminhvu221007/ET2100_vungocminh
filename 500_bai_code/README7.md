# Bài toán: Tìm Tích Lớn Nhất Của Tập Con (Maximum Product Subset)

- Cho một mảng số nguyên, hãy tìm một tập hợp con (chọn ra một số phần tử bất kỳ) sao cho tích của chúng là lớn nhất.

---

## Mô tả giải thuật 

### 1. Hàm đệ quy `path`
* `index`: Vị trí phần tử đang đứng xét duyệt trong mảng.
* `current_product`: Tích của các số đã chọn.
* `current_seq` & `current_len`: Chứa các số đã nhặt và số lượng của số.
* `empty`: tính toán tích khởi đầu.

### 2. Phân nhánh

* **Lựa chọn 1:**
  - Lưu số đang xét (`arr[index]`) vào `current_seq`.
  - Nếu mảng đang rỗng (`empty == 1`), tích mới sẽ lấy đúng bằng phần tử vừa nhặt.
  - Nếu mảng đã có số (`empty == 0`), nhân dồn vào tích cũ.
  - Gọi đệ quy bước sang phần tử tiếp theo (`index + 1`)

* **Lựa chọn 2:**
  - Giữ nguyên dãy.
  - Tích số giữ nguyên, tức là bỏ qua phần tử đang xét
  - Gọi đệ quy bước thẳng sang phần tử tiếp theo (`index + 1`).
 
Từ 2 lựa chọn trên sẽ xét từng con đường của dãy số, một con đường nhân dồn, một con đường bỏ qua để tìm ra con đường cho ra tích lớn nhất

---

## Test Case

**Input:** `arr[] = { -6, 4, -5, 8, -10, 0, 8 }`
**Output:** 
```
15360
{ -6, 4, 8, -10, 8 }
```
