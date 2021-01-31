using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai26
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnHoLot_Click(object sender, EventArgs e)
        {
            lblHoTen.Text = txtHo.Text;
        }

        private void btnTen_Click(object sender, EventArgs e)
        {
            lblHoTen.Text = txtTen.Text;
        }

        private void btnHoVaTen_Click(object sender, EventArgs e)
        {
            lblHoTen.Text = txtHo.Text + " " + txtTen.Text;
        }

        private void btnThoatChuongTrinh_Click(object sender, EventArgs e)
        {
            DialogResult ret = MessageBox.Show(
                "Muốn thoát phần mềm hả Thím?",
                "Hỏi thoát",
                MessageBoxButtons.YesNo,
                MessageBoxIcon.Error);
            if (ret == DialogResult.Yes)
                Close();
        }
    }
}
