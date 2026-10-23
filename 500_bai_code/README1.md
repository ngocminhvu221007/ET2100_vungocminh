# Tìm cặp có tổng cho trước

## Đề bài
- Cho một mảng gồm n phần tử, tổng của 2 số hạng cho trước, hãy tìm các cặp số trong mảng có tổng bằng với tổng cho trước
## Thuật toán
- Sử dụng phương pháp vét cạn với độ phức tạp O(n^2)
- Bước 1: Tạo một vòng lặp chạy từ phần tử đầu tiên đến phần tử thứ n-1, tạo một vòng lặp khác lồng vào vòng lặp đầu chạy từ phần tử thứ j= i+1 đến phần tử thứ n
- Bước 2: Thiết lập điều kiện, nếu phần tử thứ j cộng phần tử thứ i thì in kết quả đã tìm thấy cặp
- Bước 3: Nếu tìm thấy cặp thì thoát vòng lặp còn không thì in "Pair not found"

## Test cases
Input:
```
6
8 7 2 5 3 1
10
```
Output:
```
Pair found (8, 2)
```

Input:
```
6
5 2 6 8 1 9
12
```
Output:
```
Pair not found
```
