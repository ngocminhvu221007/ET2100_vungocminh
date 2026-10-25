# Nhóm các phần tử dựa trên lần xuất hiện đầu tiên

- Sắp xếp lại một mảng số nguyên lộn xộn sao cho các con số giống nhau được đứng cạnh nhau (gom nhóm), đồng thời phải giữ nguyên thứ tự xuất hiện lần đầu tiên y như mảng gốc.

---

## 🧠 Mô tả giải thuật
## Khai báo
1. `value`: Dùng để ghi lại các con số mới (mỗi số chỉ ghi 1 lần theo đúng thứ tự gặp).
2. `frequency`: Dùng để đếm số lần xuất hiện (tần suất) của con số tương ứng.
3. Biến `count`: Đếm xem đã ghi nhận được bao nhiêu con số khác nhau.

---

## Thuật toán

### Giai đoạn 1: 
Vòng lặp đầu tiên duyệt qua mảng gốc `arr` từ trái sang phải. Gặp mỗi con số (`current`) tìm kiếm:
- **Trường hợp 1 (Chưa lưu - `found_index == -1`):** Đây là lần đầu tiên xuất hiện, lưu lại, ghi nhận số lượng của nó là 1, rồi tăng biến đếm.
- **Trường hợp 2 (Đã xuất hiện):** Ta tìm thấy nó đang nằm ở dòng `found_index`, tăng tần suất lên 1.

### Giai đoạn 2:
Sau khi duyệt hết mảng, vòng lặp thứ hai đọc từ trên xuống dưới (từ `i = 0` đến `count - 1`):
- Lấy con số `value[i]` ra.
- Dùng một vòng lặp nhỏ để in (hoặc ghi đè) nó liên tiếp đúng bằng số lượng `frequency[i]` lần vào lại mảng gốc `arr`.
---

## 🔍 Test Case

**Input:** `arr[] = { 5, 4, 5, 5, 3, 1, 2, 2, 4 }`
**Output:**
`{ 5, 5, 5, 4, 4, 3, 1, 2, 2 }`

---
