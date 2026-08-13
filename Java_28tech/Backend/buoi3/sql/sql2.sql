-- =========================================================
-- 1. Liệt kê tên, mã bộ phận có mặt hàng "Thanh Long"
-- =========================================================

SELECT DISTINCT
    BP.TEN_BP,
    BP.MA_BP
FROM BO_PHAN BP
JOIN MAT_HANG MH
    ON BP.MA_BP = MH.MA_BP
WHERE MH.TEN_MH = 'Thanh Long';


-- =========================================================
-- 2. Liệt kê tên, mã mặt hàng do bộ phận BP001 quản lý
-- =========================================================

SELECT
    TEN_MH,
    MA_MH
FROM MAT_HANG
WHERE MA_BP = 'BP001';


-- =========================================================
-- 3. In TEN_MH, MA_BP, MA_NGUOI_CUNG_CAP,
--    TEN_NGUOI_CUNG_CAP của MH01
-- =========================================================

SELECT
    MH.TEN_MH,
    MH.MA_BP,
    MH.MA_NGUOI_CUNG_CAP,
    NCC.TEN_NGUOI_CUNG_CAP
FROM MAT_HANG MH
JOIN NGUOI_CUNG_CAP NCC
    ON MH.MA_NGUOI_CUNG_CAP = NCC.MA_NGUOI_CUNG_CAP
WHERE MH.MA_MH = 'MH01';


-- =========================================================
-- 4. Sắp xếp người cung cấp theo:
--    - Giảm dần số mặt hàng cung cấp
--    - Nếu bằng nhau thì mã NCC lớn hơn xếp trước
-- =========================================================

SELECT
    NCC.MA_NGUOI_CUNG_CAP,
    NCC.TEN_NGUOI_CUNG_CAP,
    COUNT(MH.MA_MH) AS SO_MAT_HANG
FROM NGUOI_CUNG_CAP NCC
LEFT JOIN MAT_HANG MH
    ON NCC.MA_NGUOI_CUNG_CAP = MH.MA_NGUOI_CUNG_CAP
GROUP BY
    NCC.MA_NGUOI_CUNG_CAP,
    NCC.TEN_NGUOI_CUNG_CAP
ORDER BY
    SO_MAT_HANG DESC,
    NCC.MA_NGUOI_CUNG_CAP DESC;


-- =========================================================
-- 5. Đếm đơn hàng DDH01:
--    - Có tổng bao nhiêu mặt hàng
--    - Tổng số lượng của tất cả mặt hàng
-- =========================================================

SELECT
    COUNT(MA_MH) AS TONG_SO_MAT_HANG,
    SUM(SO_LUONG) AS TONG_SO_LUONG
FROM CHI_TIET_DON_HANG
WHERE SO_HIEU_DON_HANG = 'DDH01';


-- =========================================================
-- 6. In TEN_KHACH_HANG, SO_HIEU_DON_HANG, MA_MH,
--    TEN_MH, SO_LUONG của khách hàng KH02 đã mua
-- =========================================================

SELECT
    KH.TEN_KHACH_HANG,
    DDH.SO_HIEU_DON_HANG,
    MH.MA_MH,
    MH.TEN_MH,
    CT.SO_LUONG
FROM KHACH_HANG KH
JOIN DON_DAT_HANG DDH
    ON KH.MA_KHACH_HANG = DDH.MA_KHACH_HANG
JOIN CHI_TIET_DON_HANG CT
    ON DDH.SO_HIEU_DON_HANG = CT.SO_HIEU_DON_HANG
JOIN MAT_HANG MH
    ON CT.MA_MH = MH.MA_MH
WHERE KH.MA_KHACH_HANG = 'KH02';