# Giải mã mảng ban đầu từ tổng các cặp (Decode an array)

- Khôi phục lại mảng gốc A gồm n phần tử từ một mảng đầu vào `input` gồm m phần tử. Mảng đầu vào được tạo ra bằng cách tính tổng của tất cả các cặp phần tử phân biệt trong mảng A.

## Mô tả giải thuật
### Bước 1: Tính số lượng phần tử của mảng gốc (n)
- Mảng `input` chứa tổng của mọi cặp từ mảng A. Theo toán tổ hợp, số lượng cặp tạo ra từ n phần tử là:
m = n(n - 1)/2
- Dùng vòng lặp `while` tăng dần n bắt đầu từ 2 cho đến khi biểu thức trên bằng m để tìm ra kích thước mảng gốc.

### Bước 2: Xét TH riêng (n = 2)
- Nếu mảng `input` chỉ có 1 phần tử (m = 1 n = 2), ta chỉ có đúng 1 phương trình:
A[0] + A[1] = input[0]
- Một phương trình 2 ẩn sẽ có vô số nghiệm. Do đó, chương trình chọn một nghiệm đại diện hợp lệ bằng cách gán cố định A[0] = 1, từ đó suy ra A[1] = input[0] - 1.

### Bước 3: Xét TH tổng quát (n >= 3)
Ta rút ra 3 phương trình nền tảng:
- x = input[0] = A[0] + A[1]
- y = input[1] = A[0] + A[2]
- z = input[n-1] = A[1] + A[2]

Cộng hai phương trình đầu và trừ đi phương trình cuối, ta triệt tiêu được A[1] và A[2]:
(x + y - z) = A[0] + A[1] + A[0] + A[2] - (A[1] + A[2]) = 2A[0]
Suy ra:
A[0] = (x + y - z)/2

Khi đó:
A[i] = input[i - 1] - A[0] (với mọi i từ 1 đến n-1).

---

## Test case

### 1. Test Case 1:
* **Input 1:** `{ 3, 4, 5, 5, 6, 7 }` (Độ dài m = 6)
* **Output 1:** `{ 1, 2, 3, 4 }`

### 2. Test Case 2: 
* **Input 2:** `{ 3, 4, 5, 6, 5, 6, 7, 7, 8, 9 }` (Độ dài m = 10)
* **Output 2:** `{ 1, 2, 3, 4, 5 }`

### 3. Test Case 3: 
* **Input 3:** `{ 3 }` (Độ dài m = 1)
* **Output 3:** `{ 1, 2 }`
