create database if not exists csdl;

use csdl;

create table if not exists students (
    id int primary key,
    first_name varchar(50),
    last_name varchar(50),
    gpa double,
    date_of_birth date,
    gender tinyint
);

create table if not exists subjects (
    id int primary key,
    name varchar(255),
    credit tinyint
);

alter table subjects drop column name;
alter table subjects add column course_name text;

create table if not exists registrations (
    student_id int,
    subject_id int,
    term char(5),
    access_time datetime,
    primary key (student_id, subject_id, term),
    foreign key (student_id) references students (id),
    foreign key (subject_id) references subjects (id)
);