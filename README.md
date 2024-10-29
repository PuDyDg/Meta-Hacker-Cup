PROBLEM A
Ta nhận thấy chỉ cần một dùng người di chuyển nhanh nhất để đưa những người khác sang bên kia nên kết quả sẽ là

	min_time * (MAX(0, n-2) * 2 + 1)

trong đó min_time là thời gian thấp nhất để đi qua cầu

PROBLEM B

Với một vài phép biến đổi công thức ta có thể tìm được lượng cần tăng lên

Gọi lượng cần tăng lên là x ta có:

	p^(n-1) = (p+x)^n
	
	p^(n-1/n) = p+x
	
	x = p^(n-1/n) - p

Và với hàm pow trong c++ chúng ta có thể dễ dàng tìm được kết quả của bài toán

PROBLEM D1

Ta có thể thấy viên đá thứ 1 sẽ là viên đá ở xa nhất rồi lần lượt tới viên đá thứ 2, viên đá thứ 3... viên đá thứ n.

Và việc các viên đá va chạm với nhau cũng tương tự với việc các viên đá đi xuyên qua nhau nên:

Vị trí của viên đá số 1 sẽ là E lớn nhất rồi lần lượt tới viên đá thứ 2, viên đá thứ 3... viên đá thứ n.

