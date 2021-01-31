using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai30
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnCapNhat_Click(object sender, EventArgs e)
        {
            int x = int.Parse(txtSo.Text);
            lstSo.Items.Add(x);
        }

        private void btnXoaPhanTuDauVaCuoi_Click(object sender, EventArgs e)
        {
            lstSo.Items.RemoveAt(0);
            lstSo.Items.RemoveAt(lstSo.Items.Count - 1);
        }

        private void btnTongCuaDanhSach_Click(object sender, EventArgs e)
        {
            int sum = 0;
            for(int i=0;i<lstSo.Items.Count;i++)
            {
                int x = (int)lstSo.Items[i];
                sum += x;
            }
            MessageBox.Show("Tổng các phần tử =" + sum);
        }

        private void btnXoaPhanTuDangChon_Click(object sender, EventArgs e)
        {
            //ta phải luôn luôn kiểm tra NSD có đang chọn dòng nào hay không:
            /*if(lstSo.SelectedIndex!=-1)
            {
                lstSo.Items.RemoveAt(lstSo.SelectedIndex);
            }*/
           while(lstSo.SelectedIndices.Count>0)
            {
                lstSo.Items.RemoveAt(lstSo.SelectedIndices[0]);
            }
        }

        private void btnTangMoiPhanTuLen2_Click(object sender, EventArgs e)
        {
            for(int i=0;i<lstSo.Items.Count;i++)
            {
                int x =(int) lstSo.Items[i];
                lstSo.Items[i] = x + 2;
            }
        }

        private void btnThayBangBinhPhuong_Click(object sender, EventArgs e)
        {
            for(int i=0;i<lstSo.Items.Count;i++)
            {
                int x = (int)lstSo.Items[i];
                //int x2 = (int)Math.Pow(x, 2);
                x = x * x;
                lstSo.Items[i] = x;
            }
        }

        private void btnChonSoChan_Click(object sender, EventArgs e)
        {
            //trước khi chọn số chẵn thì ta phải bỏ chọn toàn bộ các số cũ
            //ta dùng lệnh:
            lstSo.SelectedIndex =- 1;//tự bỏ chọn toàn bộ các dòng trên listbox
            for(int i=0;i<lstSo.Items.Count;i++)
            {
                int x = (int)lstSo.Items[i];
                if (x % 2 == 0)
                    lstSo.SelectedIndex = i;
            }
        }

        private void btnChonSoLe_Click(object sender, EventArgs e)
        {
            lstSo.SelectedIndex = -1;//tự bỏ chọn toàn bộ các dòng trên listbox
            for (int i = 0; i < lstSo.Items.Count; i++)
            {
                int x = (int)lstSo.Items[i];
                if (x % 2 != 0)
                    lstSo.SelectedIndex = i;
            }
        }

        private void btnKetThuc_Click(object sender, EventArgs e)
        {
            Close
                ();
        }
    }
}
