create database if not exists world_db;

use world_db;

create table world (
    name varchar(50),
    continent varchar(50),
    area int,
    population int,
    gdp bigint
);

insert into world (name, continent, area, population, gdp) values
('Vietnam', 'Asia', 331212, 98100000, 409000000000),
('United Kingdom', 'Europe', 243610, 67000000, 3130000000000),
('Ghana', 'Africa', 238533, 32000000, 77000000000),
('Romania', 'Europe', 238391, 19000000, 285000000000),
('Laos', 'Asia', 236800, 7500000, 15000000000),
('Belarus', 'Europe', 207600, 9400000, 68000000000),
('Italy', 'Europe', 301340, 59000000, 2100000000000),
('Philippines', 'Asia', 300000, 114000000, 440000000000),
('Ecuador', 'South America', 276841, 18000000, 115000000000),
('New Zealand', 'Oceania', 268021, 5100000, 250000000000),
('Gabon', 'Africa', 267668, 2300000, 20000000000),
('Burkina Faso', 'Africa', 274200, 22000000, 19000000000),
('Japan', 'Asia', 377975, 125000000, 4200000000000);