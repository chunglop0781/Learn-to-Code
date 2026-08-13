-- =========================================================
-- TẠO DATABASE
-- =========================================================

CREATE DATABASE IF NOT EXISTS sieu_thi;
USE sieu_thi;


-- =========================================================
-- XÓA BẢNG CŨ NẾU ĐÃ TỒN TẠI
-- =========================================================

DROP TABLE IF EXISTS CHI_TIET_DON_HANG;
DROP TABLE IF EXISTS DON_DAT_HANG;
DROP TABLE IF EXISTS MAT_HANG;
DROP TABLE IF EXISTS NGUOI_CUNG_CAP;
DROP TABLE IF EXISTS BO_PHAN;
DROP TABLE IF EXISTS KHACH_HANG;


-- =========================================================
-- 1. BẢNG BỘ PHẬN
-- =========================================================

CREATE TABLE BO_PHAN (
    MA_BP VARCHAR(10) PRIMARY KEY,
    TEN_BP VARCHAR(100)
);


-- =========================================================
-- 2. BẢNG NGƯỜI CUNG CẤP
-- =========================================================

CREATE TABLE NGUOI_CUNG_CAP (
    MA_NGUOI_CUNG_CAP VARCHAR(10) PRIMARY KEY,
    TEN_NGUOI_CUNG_CAP VARCHAR(100)
);


-- =========================================================
-- 3. BẢNG MẶT HÀNG
-- =========================================================

CREATE TABLE MAT_HANG (
    MA_MH VARCHAR(10) PRIMARY KEY,
    TEN_MH VARCHAR(100),
    MA_BP VARCHAR(10),
    MA_NGUOI_CUNG_CAP VARCHAR(10),

    FOREIGN KEY (MA_BP)
        REFERENCES BO_PHAN(MA_BP),

    FOREIGN KEY (MA_NGUOI_CUNG_CAP)
        REFERENCES NGUOI_CUNG_CAP(MA_NGUOI_CUNG_CAP)
);


-- =========================================================
-- 4. BẢNG KHÁCH HÀNG
-- =========================================================

CREATE TABLE KHACH_HANG (
    MA_KHACH_HANG VARCHAR(10) PRIMARY KEY,
    TEN_KHACH_HANG VARCHAR(100)
);


-- =========================================================
-- 5. BẢNG ĐƠN ĐẶT HÀNG
-- =========================================================

CREATE TABLE DON_DAT_HANG (
    SO_HIEU_DON_HANG VARCHAR(10) PRIMARY KEY,
    MA_KHACH_HANG VARCHAR(10),

    FOREIGN KEY (MA_KHACH_HANG)
        REFERENCES KHACH_HANG(MA_KHACH_HANG)
);


-- =========================================================
-- 6. BẢNG CHI TIẾT ĐƠN HÀNG
-- =========================================================

CREATE TABLE CHI_TIET_DON_HANG (
    SO_HIEU_DON_HANG VARCHAR(10),
    MA_MH VARCHAR(10),
    SO_LUONG INT,

    PRIMARY KEY (SO_HIEU_DON_HANG, MA_MH),

    FOREIGN KEY (SO_HIEU_DON_HANG)
        REFERENCES DON_DAT_HANG(SO_HIEU_DON_HANG),

    FOREIGN KEY (MA_MH)
        REFERENCES MAT_HANG(MA_MH)
);


-- =========================================================
-- INSERT BỘ PHẬN
-- =========================================================

INSERT INTO BO_PHAN (MA_BP, TEN_BP) VALUES
('BP001', 'Bộ phận Rau củ quả'),
('BP002', 'Bộ phận Thực phẩm'),
('BP003', 'Bộ phận Đồ uống'),
('BP004', 'Bộ phận Gia dụng'),
('BP005', 'Bộ phận Bánh kẹo');


-- =========================================================
-- INSERT NGƯỜI CUNG CẤP
-- =========================================================

INSERT INTO NGUOI_CUNG_CAP
(MA_NGUOI_CUNG_CAP, TEN_NGUOI_CUNG_CAP)
VALUES
('NCC001', 'Công ty Nông sản Việt'),
('NCC002', 'Công ty Thực phẩm ABC'),
('NCC003', 'Công ty TNHH Minh Phát'),
('NCC004', 'Công ty Đồ uống Việt Nam'),
('NCC005', 'Công ty Gia dụng Hà Nội');


-- =========================================================
-- INSERT MẶT HÀNG
-- =========================================================

INSERT INTO MAT_HANG
(MA_MH, TEN_MH, MA_BP, MA_NGUOI_CUNG_CAP)
VALUES
('MH01', 'Thanh Long',       'BP001', 'NCC001'),
('MH02', 'Dưa Hấu',          'BP001', 'NCC001'),
('MH03', 'Xoài',             'BP001', 'NCC001'),
('MH04', 'Cam',              'BP001', 'NCC002'),

('MH05', 'Thịt bò',          'BP002', 'NCC002'),
('MH06', 'Thịt gà',          'BP002', 'NCC002'),
('MH07', 'Cá hồi',           'BP002', 'NCC003'),

('MH08', 'Nước suối',        'BP003', 'NCC004'),
('MH09', 'Nước ngọt',        'BP003', 'NCC004'),

('MH10', 'Nồi cơm điện',     'BP004', 'NCC005'),
('MH11', 'Chảo chống dính',  'BP004', 'NCC005'),

('MH12', 'Bánh Oreo',        'BP005', 'NCC003'),
('MH13', 'Kẹo dẻo',          'BP005', 'NCC003');


-- =========================================================
-- INSERT KHÁCH HÀNG
-- =========================================================

INSERT INTO KHACH_HANG
(MA_KHACH_HANG, TEN_KHACH_HANG)
VALUES
('KH01', 'Nguyễn Văn An'),
('KH02', 'Trần Thị Bình'),
('KH03', 'Lê Văn Cường'),
('KH04', 'Phạm Thị Dung'),
('KH05', 'Hoàng Văn Em');


-- =========================================================
-- INSERT ĐƠN ĐẶT HÀNG
-- =========================================================

INSERT INTO DON_DAT_HANG
(SO_HIEU_DON_HANG, MA_KHACH_HANG)
VALUES
('DDH01', 'KH01'),
('DDH02', 'KH02'),
('DDH03', 'KH02'),
('DDH04', 'KH03'),
('DDH05', 'KH04');


-- =========================================================
-- INSERT CHI TIẾT ĐƠN HÀNG
-- =========================================================

INSERT INTO CHI_TIET_DON_HANG
(SO_HIEU_DON_HANG, MA_MH, SO_LUONG)
VALUES

-- DDH01
('DDH01', 'MH01', 10),
('DDH01', 'MH05', 5),
('DDH01', 'MH08', 20),
('DDH01', 'MH12', 8),

-- DDH02 - KH02
('DDH02', 'MH01', 3),
('DDH02', 'MH03', 5),
('DDH02', 'MH08', 10),

-- DDH03 - KH02
('DDH03', 'MH06', 4),
('DDH03', 'MH09', 6),
('DDH03', 'MH13', 2),

-- DDH04
('DDH04', 'MH02', 7),
('DDH04', 'MH07', 3),

-- DDH05
('DDH05', 'MH10', 1),
('DDH05', 'MH11', 2);


-- =========================================================
-- KIỂM TRA DỮ LIỆU
-- =========================================================

SELECT * FROM BO_PHAN;

SELECT * FROM NGUOI_CUNG_CAP;

SELECT * FROM MAT_HANG;

SELECT * FROM KHACH_HANG;

SELECT * FROM DON_DAT_HANG;

SELECT * FROM CHI_TIET_DON_HANG;