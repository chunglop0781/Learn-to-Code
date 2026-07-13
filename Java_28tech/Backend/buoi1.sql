USE javat4;

CREATE TABLE tac_gia (
    id int auto_increment not null,
    ten nvarchar(250) not null,
    but_danh varchar(150),
    primary key (id)
);

INSERT INTO tac_gia (ten, but_danh)
VALUES (null, 'Nguyen Nhat Anh', 'NNA'),
(null, 'Nguyen Ngoc Tu', 'NNT'),
(null, 'Nguyen Huy Thiep', 'NHT');

CREATE TABLE tac_pham (
    ma_tac_pham varchar(50) not null,
    ten_tac_pham nvarchar(250) not null,
    ngay_xuat_ban date not null,
    id_tac_gia int not null,
    primary key (ma_tac_pham),
    foreign key (id_tac_gia) references tac_gia(id)
);
