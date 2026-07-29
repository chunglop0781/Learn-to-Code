/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package dao;

import static dao.UserDAO.openConnection;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import model.Product;
import model.User;

/**
 *
 * @author User
 */
public class ProductDAO {

    public static Connection openConnection() {
        Connection conn = null;
        try {
            Class.forName(DBConfig.driver);
            conn = DriverManager.getConnection(DBConfig.url, DBConfig.user, DBConfig.password);
        } catch (Exception ex) {
            ex.printStackTrace();
        }
        return conn;
    }

    public static ArrayList<Product> getProductList(String sortBy, String order, String filter) {
        try ( Connection c = openConnection()) {
            if (sortBy == null) {
                sortBy = "id";
            }
            if (order == null) {
                order = "asc";
            }
            if (filter == null) {
                filter = "";
            }
            String select = String.format(""
                    + "select *, (compare_at_price - price) / compare_at_price as sale_rate "
                    + "from products "
                    + filter + " "
                    + "order by %s %s", sortBy, order);
            PreparedStatement ps = c.prepareStatement(select);
            ResultSet rs = ps.executeQuery();
            ArrayList<Product> arr = new ArrayList<>();
            while (rs.next()) {
                arr.add(new Product(rs.getInt("id"), rs.getString("title"), rs.getString("description"),
                        rs.getInt("price"), rs.getInt("compare_at_price"), rs.getInt("quantity")));
            }
            return arr;
        } catch (Exception ex) {
            ex.printStackTrace();
        }
        return null;
    }

    public static Product getProductById(int id) {
        try ( Connection c = openConnection()) {
            String select = String.format("select * from products where id = %d", id);
            PreparedStatement ps = c.prepareStatement(select);
            ResultSet rs = ps.executeQuery();
            if (rs.next()) {
                return new Product(rs.getInt("id"), rs.getString("title"), rs.getString("description"),
                        rs.getInt("price"), rs.getInt("compare_at_price"), rs.getInt("quantity"));
            }
            return null;
        } catch (Exception ex) {
            ex.printStackTrace();
        }
        return null;
    }
}
