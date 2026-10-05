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

## 3. Test Cases

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
# Bài toán tháp Hà Nội khử đệ quy

## 1. Diễn giải các bước thực hiện

*   Bước 1: Tạo hàm. Khai báo mảng để lưu thứ tự các cột nguồn, đích và trung gian. Khai báo mảng lưu vị trí của các đĩa.
*   Bước 2: Sử dụng quy nạp để tính số bước để có thể di chuyển n đĩa từ cọc nguồn sang cọc đích
*   Bước 3: Dùng vòng lặp for chạy từ bước 1 đến bước thứ 2^(n-1) để xét sự dịch chuyển từng đĩa.
    - Sử dụng quy nạp, xác định tại bước thứ i thì đĩa thứ mấy sẽ di chuyển. Với đĩa thứ 1, các bước mà đĩa 1 di chuyển sẽ là 1 3 5 7...(2n-1). Với đĩa thứ 2, các bước mà đĩa 2 di chuyển sẽ là 2 6 10 14... Với đĩa thứ 3, các bước mà đĩa 3 di chuyển sẽ là 4 12 20...Tức là số bước mà từng đĩa di chuyển tạo thành cấp số nhân.
*   Bước 4: Theo quy nạp ta thấy, với tổng số đĩa chẵn, thì các đĩa lẻ sẽ dịch chuyển 1 bước, còn đĩa chẵn sẽ dịch chuyển 2 bước. Với tổng số đĩa lẻ, đĩa lẻ sẽ dịch chuyển 2 bước còn đĩa chẵn sẽ dịch chuyển 1 bước. Các đĩa dịch chuyển theo quy luật vòng tròn tức là từ nguồn -> trung gian -> đích rồi quay về nguồn.
*   Bước 5: Lưu giá trị vị trí của cột và in ra.

## 2. Test cases
### Test Case 1: 4 đĩa
*   Input: `4`
*   Output:
    ```text
    So dia: 4
    Move disk 1 from A to B
    Move disk 1 from B to C
    Move disk 3 from A to B
    Move disk 1 from C to A
    Move disk 2 from C to B
    Move disk 1 from A to B
    Move disk 4 from A to C
    Move disk 1 from B to C
    Move disk 2 from B to A
    Move disk 1 from C to A
    Move disk 3 from B to C
    Move disk 1 from A to B
    Move disk 2 from A to C
    Move disk 1 from B to C
   
    ```
### Test Case 2: 5 đĩa
*   Input: `5`
*   Output:
    ```text
    So dia: 5
    Move disk 1 form A to C
    Move disk 2 form A to B
    Move disk 1 form C to B
    Move disk 3 form A to C
    Move disk 1 form B to A
    Move disk 2 form B to C
    Move disk 1 form A to C
    Move disk 4 form A to B
    Move disk 1 form C to B
    Move disk 2 form C to A
    Move disk 1 form B to A
    Move disk 3 form C to B
    Move disk 1 form A to C
    Move disk 2 form A to B
    Move disk 1 form C to B
    Move disk 5 form A to C
    Move disk 1 form B to A
    Move disk 2 form B to C
    Move disk 1 form A to C
    Move disk 3 form B to A
    Move disk 1 form C to B
    Move disk 2 form C to A
    Move disk 1 form B to A
    Move disk 4 form B to C
    Move disk 1 form A to C
    Move disk 2 form A to B
    Move disk 1 form C to B
    Move disk 3 form A to C
    Move disk 1 form B to A
    Move disk 2 form B to C
    Move disk 1 form A to C

   ```
---
