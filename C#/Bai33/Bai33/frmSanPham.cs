using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai33
{
    public partial class frmSanPham : Form
    {
        public static List<DanhMuc> danhSachDM = new List<DanhMuc>();
        List<SanPham> danhSachSP = new List<SanPham>();
        public frmSanPham()
        {
            InitializeComponent();
        }

        private void btnQuanLyDM_Click(object sender, EventArgs e)
        {
            frmDanhMuc frmDM = new frmDanhMuc();
            frmDanhMuc.CoThayDoi = false;
            if(frmDM.ShowDialog()==DialogResult.OK)
            {
                HienThiDanhMucLenCombobox();
            }
        }

        private void HienThiDanhMucLenCombobox()
        {
            cboDanhMuc.Items.Clear();
            foreach (DanhMuc dm in danhSachDM)
                cboDanhMuc.Items.Add(dm);
        }

        private void frmSanPham_Load(object sender, EventArgs e)
        {

        }

        private void btnLuu_Click(object sender, EventArgs e)
        {
           if(cboDanhMuc.SelectedIndex==-1)
            {
                MessageBox.Show("Thím ơi chưa có chọn danh mục");
                return;
            }
            DanhMuc dm = cboDanhMuc.SelectedItem as DanhMuc;
            SanPham sp = new SanPham();
            sp.MaSP = txtMaSp.Text;
            sp.TenSP = txtTenSp.Text;
            sp.DonGia = double.Parse(txtDonGia.Text);
            sp.XuatXu = txtXuatXu.Text;
            sp.HanDung = dtpHanDung.Value;
            dm.ThemSanPham(sp);
            danhSachSP.Add(sp);

            HienThiSanPhamLenListbox();

            XoaTrangChiTietSanPham();
        }
        void XoaTrangChiTietSanPham()
        {
            txtMaSp.Text = "";
            txtTenSp.Text = "";
            txtDonGia.Text = "";
            txtXuatXu.Text = "";
            txtMaSp.Focus();       
        }
        void HienThiSanPhamLenListbox()
        {
            lstSanPham.Items.Clear();
            foreach (SanPham sp in danhSachSP)
                lstSanPham.Items.Add(sp);
        }

        private void lstSanPham_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (lstSanPham.SelectedIndex == -1)
                return;
            SanPham sp = lstSanPham.SelectedItem as SanPham;
            //cboDanhMuc.SelectedItem = sp;
            cboDanhMuc.Text = sp.Nhom.TenDM;
            txtMaSp.Text = sp.MaSP;
            txtTenSp.Text = sp.TenSP;
            txtDonGia.Text = sp.DonGia + "";
            txtXuatXu.Text = sp.XuatXu;
            dtpHanDung.Value = sp.HanDung;
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            if(lstSanPham.SelectedIndex==-1)
            {
                MessageBox.Show("Thím chưa chọn sản phẩm làm sao tui xóa");
                return;
            }
            SanPham sp = lstSanPham.SelectedItem as SanPham;
            DialogResult ret = MessageBox.Show(
                "Muốn xóa ["+sp.TenSP+"] hả thím?",
                "Hỏi xóa",
                MessageBoxButtons.YesNo,
                MessageBoxIcon.Question);
            if(ret==DialogResult.Yes)
            {
                danhSachSP.Remove(sp);
                HienThiSanPhamLenListbox();
                XoaTrangChiTietSanPham();
            }
        }
    }
}
