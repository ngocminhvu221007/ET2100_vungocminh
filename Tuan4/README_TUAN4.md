# Bài toán tháp Hà Nội sử dụng đệ quy

## 1. Mô tả bài toán
Bài toán gồm có 3 cọc: A (Cọc nguồn), B (Cọc trung gian), và C (Cọc đích) cùng với `n` đĩa có kích thước khác nhau. 
Mục tiêu là di chuyển toàn bộ đĩa từ cọc A sang cọc C theo 3 quy tắc:
1. Mỗi lần chỉ được di chuyển một đĩa.
2. Một đĩa chỉ có thể được đặt lên trên một đĩa lớn hơn hoặc đặt vào cọc trống.
3. Không được đặt đĩa lớn lên trên đĩa nhỏ hơn.
---

## 2. Diễn giải các bước thực hiện

*   Bước 1: Nếu chỉ có `n = 1` đĩa, ta chỉ cần di chuyển trực tiếp đĩa 1 từ cọc nguồn A sang cọc đích C.
*   Bước 2: Nếu `n > 1`, ta xem khối gồm `n-1` đĩa phía trên là một cụm. Gọi đệ quy `ToH(n-1, A, C, B)` để di chuyển `n-1` đĩa này từ cọc A sang cọc trung gian B. *   Bước 3: Di chuyển đĩa lớn nhất còn lại (đĩa thứ `n`) trực tiếp từ cọc A sang cọc đích C.
*   Bước 4: Gọi đệ quy `ToH(n-1, B, A, C)` để tiếp tục di chuyển `n-1` đĩa đang ở cọc trung gian B về cọc đích C.

## 3. Các Test Cases

### Test Case 1: Trường hợp cơ sở 1 đĩa
*   Input: `1`
*   Output:
    ```text
    Number of disks: 1
    Move disk 1 from A to C
    ```
    ### Test Case 2: 3 đĩa
*   Input: `3`
*   Output:
    ```text
    Number of disks: 3
    Move disk 1 from A to C
    Move disk 2 from A to B
    Move disk 1 from C to B
    Move disk 3 from A to C
    Move disk 1 from B to A
    Move disk 2 from B to C
    Move disk 1 from A to C
    ```

---
