using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai35
{
    public partial class Form1 : Form
    {
        DanhSachKhachHang database = new DanhSachKhachHang();
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnTinhTien_Click(object sender, EventArgs e)
        {
            KhachHang kh = new KhachHang();
            kh.Ten = txtTen.Text;
            kh.SoLuongMua = int.Parse(txtSoluong.Text);
            kh.LaSinhVien = chkLaSV.Checked;
            database.Mua(kh);
            lblThanhTien.Text = kh.TinhTien + "";
        }

        private void btnTiep_Click(object sender, EventArgs e)
        {
            txtTen.Text = "";
            txtSoluong.Text = "";
            chkLaSV.Checked = false;
            lblThanhTien.Text = "";
            txtTen.Focus();
        }

        private void btnThongKe_Click(object sender, EventArgs e)
        {
            txtTongSoKH.Text = database.TongSoKhachHang + "";
            txtTongSoKHSV.Text = database.TongSoKhachHangLaSinhVien + "";
            txtTongDoanhThu.Text = database.TongDoanhThu + "";
        }

        private void txtTongSoKH_MouseDoubleClick(object sender, MouseEventArgs e)
        {
            Form frmKH = new Form();
            frmKH.Width = frmKH.Height = 300;
            ListBox lstKH = new ListBox();
            frmKH.Controls.Add(lstKH);
            lstKH.Dock = DockStyle.Fill;
            foreach(KhachHang kh in database.Khachs)
            {
                lstKH.Items.Add(kh.Ten);
            }
            frmKH.StartPosition = FormStartPosition.CenterParent;
            frmKH.Show();
        }

        private void txtTongSoKHSV_MouseDoubleClick(object sender, MouseEventArgs e)
        {
            Form frmKH = new Form();
            frmKH.Width = frmKH.Height = 300;
            ListBox lstKH = new ListBox();
            frmKH.Controls.Add(lstKH);
            lstKH.Dock = DockStyle.Fill;
            foreach (KhachHang kh in database.Khachs)
            {
                if(kh.LaSinhVien)
                    lstKH.Items.Add(kh.Ten);
            }
            frmKH.StartPosition = FormStartPosition.CenterParent;
            frmKH.Show();
        }

        private void btnThoat_Click(object sender, EventArgs e)
        {
            DialogResult ret = MessageBox.Show(
                "Thím muốn trốn hả thím?","HỎi trốn",
                MessageBoxButtons.YesNo,MessageBoxIcon.Error);
            if (ret == DialogResult.Yes)
                Close();
        }
    }
}
