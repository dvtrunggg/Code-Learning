using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai36
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnSoKyTuTrongChuoi_Click(object sender, EventArgs e)
        {
            txtKetQua.Text = txtDuLieuGoc.Text.Length+"";
        }

        private void btnInChuHoa_Click(object sender, EventArgs e)
        {
            txtKetQua.Text = txtDuLieuGoc.Text.ToUpper();
        }

        private void btnInChuThuong_Click(object sender, EventArgs e)
        {
            txtKetQua.Text = txtDuLieuGoc.Text.ToLower();
        }

        private void btnDemSoKyTuInHoa_Click(object sender, EventArgs e)
        {
            string s = txtDuLieuGoc.Text;
            int dem = 0;
            foreach(char c in s)
            {
                if (char.IsUpper(c))
                    dem++;
            }
            txtKetQua.Text = "Có " + dem + " ký tự là In Hoa";
        }

        private void btnDemSoKyTuInThuong_Click(object sender, EventArgs e)
        {
            string s = txtDuLieuGoc.Text;
            int dem = 0;
            foreach (char c in s)
            {
                if (char.IsLower(c))
                    dem++;
            }
            txtKetQua.Text = "Có " + dem + " ký tự là In Thường";
        }

        private void btnDemKyTuLaSo_Click(object sender, EventArgs e)
        {
            string s = txtDuLieuGoc.Text;
            int dem = 0;
            foreach (char c in s)
            {
                if (char.IsDigit(c))
                    dem++;
            }
            txtKetQua.Text = "Có " + dem + " ký tự là Số";
        }

        private void btnDaoChuoi_Click(object sender, EventArgs e)
        {
            string s = txtDuLieuGoc.Text;

            List<char> s2 = s.Reverse().ToList();
            txtKetQua.Text = "";
            foreach (char c in s2)
                txtKetQua.Text += c;
        }

        private void btnToiUuChuoi_Click(object sender, EventArgs e)
        {
            string s = txtDuLieuGoc.Text.Trim();
            string[] arr = s.Split(new char[] { ' ' }, 
                StringSplitOptions.RemoveEmptyEntries);
            txtKetQua.Text = "";
            foreach (string word in arr)
                txtKetQua.Text += word + " ";
            txtKetQua.Text = txtKetQua.Text.Trim();
        }

        private void btnTimViTriXuatHienDauTien_Click(object sender, EventArgs e)
        {
            int vt = txtDuLieuGoc.Text.IndexOf(txtChuoiTimViTriXuatHienDauTien.Text);
            if (vt != -1)
                txtKetQua.Text = "Tìm thấy [" +
                    txtChuoiTimViTriXuatHienDauTien.Text + "] tại vị trí đầu tiên là " + vt;
            else
                txtKetQua.Text = "Không tìm thấy [" + txtChuoiTimViTriXuatHienDauTien.Text + "]";
        }

        private void btnTimViTriXuatHienCuoiCung_Click(object sender, EventArgs e)
        {
            int vt = txtDuLieuGoc.Text.LastIndexOf(txtTimViTriXuatHienCuoiCung.Text);
            if (vt != -1)
                txtKetQua.Text = "Tìm thấy [" +
                    txtTimViTriXuatHienCuoiCung.Text + "] tại vị trí cuối cùng là " + vt;
            else
                txtKetQua.Text = "Không tìm thấy [" + txtTimViTriXuatHienCuoiCung.Text + "]";
        }

        private void btnDemSoLanXuatHien_Click(object sender, EventArgs e)
        {
            int dem = 0;
            string s = txtDuLieuGoc.Text;
            int vt = s.IndexOf(txtDemSoLanXuatHien.Text);
            if(vt==-1)
            {
                txtKetQua.Text = "Không có [" + txtDemSoLanXuatHien.Text + "] trong chuỗi";
            }
            else
            {
                while(vt!=-1)
                {
                    dem++;
                    s = s.Substring(vt + txtDemSoLanXuatHien.Text.Length);
                    vt = s.IndexOf(txtDemSoLanXuatHien.Text);
                }
                txtKetQua.Text = "Tìm thấy " + dem + " lần xuất hiện [" + txtDemSoLanXuatHien.Text + "]";
            }
        }

        private void btnTachTu_Click(object sender, EventArgs e)
        {
            char[] arrKT = txtTachTu.Text.ToCharArray();
            string[] arrWord = txtDuLieuGoc.Text.Split(arrKT);
            txtKetQua.Text = "";
            foreach (string s in arrWord)
              txtKetQua.Text += s + "\r\n";
            
        }

        private void btnThayDoiChuoiCon_Click(object sender, EventArgs e)
        {
            txtKetQua.Text = txtDuLieuGoc.Text.
                Replace(txtThayDoiChuoiConCu.Text, txtThayDoiChuoiConMoi.Text);
        }

        private void btnXoaChuoiCon_Click(object sender, EventArgs e)
        {
            int vt = txtDuLieuGoc.Text.IndexOf(txtXoaChuoiCon.Text);
            if(vt!=-1)
            {
                string s = txtDuLieuGoc.Text;
                s = s.Remove(vt, txtXoaChuoiCon.Text.Length);
                txtKetQua.Text = s;
            }
        }

        private void btnChenChuoi_Click(object sender, EventArgs e)
        {
            string s = txtDuLieuGoc.Text;
            string s2 = s.Insert(int.Parse(txtViTriChen.Text), txtChenChuoi.Text);
            txtKetQua.Text = s2;
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult ret = MessageBox.Show(
                "Thím muốn thoát hả?",
                "Hỏi thoát",
                MessageBoxButtons.YesNo,
                MessageBoxIcon.Question);
            e.Cancel = (ret == DialogResult.No);
        }
    }
}
