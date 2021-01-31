using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai31
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnDatHang_Click(object sender, EventArgs e)
        {
            string detail = "";
            detail = "Thông tin khách hàng:\n";
            detail +="Họ và khách hàng:\n\t"+ txtTen.Text;
            detail += "phone khách hàng:\n\t" + txtPhone.Text;
            detail += "Sản phẩm khách hàng đặt:\n\t" + lstSanPham.SelectedItem;
            detail += "Hình thức thanh toán:\n\t" + cboThanhToan.SelectedItem;
            txtChiTiet.Text = detail;
        }

        private void cboThanhToan_SelectedIndexChanged(object sender, EventArgs e)
        {
            if(cboThanhToan.SelectedIndex!=-1)
            {
                MessageBox.Show("Bạn chọn thanh toán: " + cboThanhToan.SelectedItem);
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            HinhThucThanhToan atm = new HinhThucThanhToan();
            atm.Ma = 1;
            atm.HinhThuc = "Chuyển khoản ATM";
            atm.PhiThanhToan = 0;
            comboBox1.Items.Add(atm);

            HinhThucThanhToan tructiep = new HinhThucThanhToan();
            tructiep.Ma = 2;
            tructiep.HinhThuc = "Thanh toán tại cửa hàng";
            tructiep.PhiThanhToan = 0;
            comboBox1.Items.Add(tructiep);

            HinhThucThanhToan trasau = new HinhThucThanhToan();
            trasau.Ma = 3;
            trasau.HinhThuc = "Nhận hàng xong mới trả tiền";
            trasau.PhiThanhToan = 10;
            comboBox1.Items.Add(trasau); 
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if(comboBox1.SelectedIndex!=-1)
            {
                HinhThucThanhToan ht = comboBox1.SelectedItem as HinhThucThanhToan;
                MessageBox.Show(ht.Ma+"-"+ht.HinhThuc+"=>"+ht.PhiThanhToan);
            }
        }
    }
}
