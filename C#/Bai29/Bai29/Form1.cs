using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai29
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnDangKy_Click(object sender, EventArgs e)
        {
            errorProvider1.SetError(txtTen, "");
            errorProvider1.SetError(txtTuoi, "");
            errorProvider1.SetError(dtpNgayDangKy, "");
            if (txtTen.Text == "")
            {
                errorProvider1.SetError(txtTen, "Nhà ngươi chưa nhập tên mà lị");
                return;
            }
            int tuoi = 0;
            if(int.TryParse(txtTuoi.Text,out tuoi)==false)
            {
                errorProvider1.SetError(txtTuoi, "Tuổi nhập lụi rồi");
                return;
            }
            else
            {
                if (tuoi < 18)
                {
                    errorProvider1.SetError(txtTuoi, "Tuổi phải lớn hơn 17 mà thím");
                    return;
                }
            }
            if(dtpNgayDangKy.Value.DayOfWeek==DayOfWeek.Sunday)
            {
                errorProvider1.SetError(dtpNgayDangKy, "Chủ nhật đi nhậu không có thi");
                return;
            }
            MessageBox.Show("Bạn đã nhập thông tin hợp lệ và đăng ký thành công\nChúc may mắn lần sau");
        }
    }
}
