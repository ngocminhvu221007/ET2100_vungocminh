# Sắp xếp mảng nhị phân (Binary Array Sorting)

- Nhập một mảng gồm các số nguyên (trong đó các phần tử chỉ bao gồm các giá trị `0` và `1`) và sắp xếp mảng theo thứ tự tăng dần (các số `0` đứng trước, các số `1` đứng sau) sử dụng thuật toán sắp xếp cơ bản.

---

## Mô tả giải thuật 
- Thuật toán duyệt qua từng phần tử của mảng, so sánh phần tử ở vị trí hiện tại với tất cả các phần tử đứng phía sau nó. Nếu phát hiện phần tử phía sau nhỏ hơn, tiến hành đổi chỗ trực tiếp hai phần tử đó để đưa phần tử nhỏ hơn về đúng vị trí.
- Vòng lặp ngoài: Cố định vị trí cần tìm giá trị nhỏ hơn để điền vào (chạy từ phần tử đầu tiên đến phần tử thứ n-1).
- Vòng lặp trong: Duyệt qua tất cả các phần tử đứng phía sau vị trí i.
- So sánh và đổi chỗ (nếu a[i] > a[j]): hoán đổi vị trí của 2 phần tử.
- Độ phức tạp O(n^2).

---

## Test Cases
 **Input:**
```text
8
1 0 1 0 1 0 0 1
-----
 **Output:**
```text
0 0 0 0 1 1 1 1
