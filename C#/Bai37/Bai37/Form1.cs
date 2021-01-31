using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai37
{
    public partial class Form1 : Form
    {
        List<Customer> dsKhachHang = new List<Customer>();
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            xuLyVe100GheLenGiaoDien();
        }

        private void xuLyVe100GheLenGiaoDien()
        {
            pnGhe.Controls.Clear();
            int ghe = 1;
            for(int i=0;i<pnGhe.RowCount;i++)
            {
                for(int j=0;j<pnGhe.ColumnCount;j++)
                {
                    Label lblGhe = new Label();
                    lblGhe.Text = ghe + "";
                    lblGhe.AutoSize = false;
                    lblGhe.Dock = DockStyle.Fill;
                    lblGhe.TextAlign = ContentAlignment.MiddleCenter;
                    lblGhe.Width = lblGhe.Height = 50;
                    lblGhe.BackColor = Color.White;
                    pnGhe.Controls.Add(lblGhe, j, i);
                    ghe++;
                    lblGhe.Click += LblGhe_Click;
                }
            }
        }

        private void LblGhe_Click(object sender, EventArgs e)
        {
            Label lblGhe = sender as Label;
            if (lblGhe.BackColor == Color.White)
                lblGhe.BackColor = Color.Green;
            else if (lblGhe.BackColor == Color.Green)
                lblGhe.BackColor = Color.White;
            else if(lblGhe.BackColor==Color.Yellow)
            {
                MessageBox.Show("Ghế số ["+lblGhe.Text+"] đã có người đặt rồi");
            }
        }

        private void btnchon_Click(object sender, EventArgs e)
        {
            frmThongTinNguoiDatVe frm = new frmThongTinNguoiDatVe();
            if(frm.ShowDialog()==DialogResult.OK)
            {
                //làm sao lấy được các ghế màu xanh
                Customer cus = new Customer();
                cus.Name = frm.txtTen.Text;
                cus.Phone = frm.txtPhone.Text;
                cus.GioDatGhe = DateTime.Now;
               for(int i=0;i<pnGhe.Controls.Count;i++)
                {
                    Label lblGhe = pnGhe.Controls[i] as Label;
                    if(lblGhe.BackColor==Color.Green)
                    {
                        lblGhe.BackColor = Color.Yellow;
                        int ghe = int.Parse(lblGhe.Text);
                        cus.Ghes.Add(ghe);
                    }
                }
                lblThanhTien.Text = cus.TinhTien + " VNĐ";
                dsKhachHang.Add(cus);
                HienThiTongTien();
                HienThiKhachHangLenListbox();
            }
        }

        private void HienThiKhachHangLenListbox()
        {
            lstKhachHang.Items.Clear();
            foreach (Customer cus in dsKhachHang)
                lstKhachHang.Items.Add(cus);
        }

        private void HienThiTongTien()
        {
            int sum = 0;
            foreach (Customer cus in dsKhachHang)
                sum += cus.TinhTien;
            lblTongThanhTien.Text = sum + " VNĐ";
        }

        private void lstKhachHang_SelectedIndexChanged(object sender, EventArgs e)
        {
            if(lstKhachHang.SelectedIndex!=-1)
            {
                Customer cus = lstKhachHang.SelectedItem as Customer;
                lblThanhTien.Text = cus.TinhTien + " VNĐ";
            }
        }

        private void btnHuy_Click(object sender, EventArgs e)
        {
            if(lstKhachHang.SelectedIndex!=-1)
            {
                Customer cus = lstKhachHang.SelectedItem as Customer;
                //kiểm tra DateTime.now với cus.GioDatGhe
                //==>quá 30 phút ko cho hủy
                //==>tự xử nha các thím
                for(int i=0;i<pnGhe.Controls.Count;i++)
                {
                    Label lblGhe = pnGhe.Controls[i] as Label;
                    int maGhe = int.Parse(lblGhe.Text);
                    int co = 0;
                    while(cus.Ghes.Count>0 &&co<cus.Ghes.Count)
                    {
                        int gheDat = cus.Ghes[0];
                        if(maGhe==gheDat){
                            lblGhe.BackColor = Color.White;
                            cus.Ghes.Remove(gheDat);
                        }
                        co++;
                    }
                }
                dsKhachHang.Remove(cus);
                HienThiKhachHangLenListbox();
                HienThiTongTien();
            }
            else
            {
                MessageBox.Show("Bạn phải chọn khách hàng trước mới hủy được");
            }
        }
    }
}
