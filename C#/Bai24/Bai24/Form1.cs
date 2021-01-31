using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai24
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult ret = MessageBox.Show(
                "Bạn có chắc chắn muốn thoát không?",
                "Hỏi thoát",
                MessageBoxButtons.YesNo,
                MessageBoxIcon.Question);
            if (ret == DialogResult.Yes)
            {
                e.Cancel = false;
            }
            else
                e.Cancel = true;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Xin chào!","Tiêu đề");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Đây là nội dung","Đây là tiêu",MessageBoxButtons.YesNo);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Đây là nội dung","Đây là tiêu đề",
                MessageBoxButtons.OK,MessageBoxIcon.Exclamation);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            DialogResult ret = MessageBox.Show(
                "Bạn có chắc chắn muốn xóa hay không?",
                "Xác nhận xóa",MessageBoxButtons.YesNoCancel,
                MessageBoxIcon.Question);
            if(ret==DialogResult.Yes)
            {
                this.Text = "Bạn chọn Yes";
            }
            else if(ret==DialogResult.No)
            {
                this.Text = "Bạn chọn Nâu";
            }
            else if(ret==DialogResult.Cancel)
            {
                this.Text = "Bạn chọn ken sồ";
            }
        }
    }
}
