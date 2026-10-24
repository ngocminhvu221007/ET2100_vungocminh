# Tìm tổng lớn nhất của dãy con không liền kề

- Tìm dãy con có tổng lớn nhất từ một mảng số nguyên cho trước, với điều kiện Không được chọn 2 phần tử đứng cạnh nhau
---

## Mô tả giải thuật

- Thử nghiệm mọi con đường có thể đi qua mảng.

### 1. Hàm đệ quy 
- Hàm `path` nhận vào trạng thái hiện tại: vị trí đang xét (`index`), tổng đang có (`current_sum`), danh sách các số (`current_seq`) và số lượng đã nhặt (`current_len`).
- Tại mỗi số, thực hiện 2 lệnh gọi đệ quy:
*   Nhánh 1
    *   Lưu `arr[index]` vào mảng tạm `current_seq`.
    *   Cộng giá trị `arr[index]` vào `current_sum`.
    *   Gọi đệ quy tiếp theo bắt đầu từ `index + 2`.
*   Nhánh 2
    *   Không thay đổi `current_sum` hay mảng tạm.
    *   Gọi đệ quy kiểm tra ngay phần tử sát vách là `index + 1`.

### 2. Điều kiện dừng
Dừng khi `index >= n` (hết mảng). Lúc này, nhánh hiện tại kết thúc và tiến hành đối chiếu kết quả:
*   Nếu tổng của nhánh vừa đi (`current_sum`) > `max_sum`
    1. Ghi đè lên `max_sum`.
    2. Ghi nhận số lượng phần tử vào biến `len`.
    3. Sao chép toàn bộ danh sách các phần tử từ mảng tạm `current_seq` sang mảng lưu trữ chính thức `seq`.
---
## Test case
*   **Input:** `{ 1, 2, 9, 4, 5, 0, 4, 11, 6 }`
*   **Output:**
    ```text
    Input:  { 1, 2, 9, 4, 5, 0, 4, 11, 6 }
    Output: max sum 26
    1, 9, 5, 11 
    ```
