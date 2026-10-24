# Tìm số lớn nhất có thể tạo ra từ một mảng (Largest Number)

Ghép các số nguyên từ một mảng cho trước để tạo ra số lớn nhất

## Mô tả giải thuật
- Bước 1: Dùng mảng ký tự (char[]). Hàm String dùng vòng lặp chia 10 để lấy từng chữ số của số nguyên, sau đó lưu ngược vào mảng ký tự. Hàm compare duyệt hai chuỗi.
- Bước 2: Hàm concat nhận hai số num1 và num2, gọi hàm String để đổi hai số này thành chuỗi s1 và s2, dùng hai vòng lặp for nối tiếp nhau để chép lần lượt s1 rồi đến s2 vào mảng đích str_out.
- Bước 3: Duyệt 2 vòng lặp lồng nhau i và j, gọi concat để tạo ra chuỗi ab (arr[i] đứng trước) và ba (arr[j] đứng trước).
- Bước 4: Gọi compare(ba, ab). Nếu ba lớn hơn ab, ngay lập tức tráo đổi arr[i] và arr[j].
---

## Test case
Input
```
5
3 30 34 5 9
```
Output
```
9534330
```
