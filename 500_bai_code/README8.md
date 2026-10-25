# Tìm phần tử xuất hiện số lần lẻ (Find the odd occurring element)

- Cho một mảng số nguyên, trong đó tất cả các số đều xuất hiện một số lần chẵn (2, 4, 6... lần), ngoại trừ duy nhất một số xuất hiện một số lần lẻ. Hãy tìm số đó với yêu cầu chỉ duyệt mảng 1 lần và không dùng thêm bộ nhớ.

---

## Mô tả giải thuật
Phép XOR:
1. `x ^ x = 0` (Hai số giống nhau sẽ tự triệt tiêu).
2. `x ^ 0 = x` (Số nào XOR với 0 cũng giữ nguyên).
3. Giao hoán (`a ^ b ^ a = a ^ a ^ b = 0 ^ b = b`).

Khi khởi tạo một biến `result = 0` và XOR nó lần lượt với tất cả các phần tử trong mảng:
- Các số xuất hiện chẵn lần sẽ bắt cặp với nhau và triệt tiêu sạch sẽ thành `0`.
- Số xuất hiện lẻ sẽ bị dư ra 1 phần tử không thể triệt tiêu.
- Cuối cùng `result` sẽ bằng đúng phần tử dư ra đó!
---

## Test Case

**Input:** `arr[] = { 4, 3, 6, 2, 6, 4, 2, 3, 4, 3, 3 }`

**Output:**
```text
Output: 4
