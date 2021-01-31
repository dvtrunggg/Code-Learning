namespace Bai30
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.txtSo = new System.Windows.Forms.TextBox();
            this.btnCapNhat = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.lstSo = new System.Windows.Forms.ListBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.btnTongCuaDanhSach = new System.Windows.Forms.Button();
            this.btnXoaPhanTuDauVaCuoi = new System.Windows.Forms.Button();
            this.btnXoaPhanTuDangChon = new System.Windows.Forms.Button();
            this.btnTangMoiPhanTuLen2 = new System.Windows.Forms.Button();
            this.btnThayBangBinhPhuong = new System.Windows.Forms.Button();
            this.btnChonSoChan = new System.Windows.Forms.Button();
            this.btnChonSoLe = new System.Windows.Forms.Button();
            this.btnKetThuc = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 13);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(50, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Nhập số:";
            // 
            // txtSo
            // 
            this.txtSo.Location = new System.Drawing.Point(66, 10);
            this.txtSo.Name = "txtSo";
            this.txtSo.Size = new System.Drawing.Size(264, 20);
            this.txtSo.TabIndex = 1;
            // 
            // btnCapNhat
            // 
            this.btnCapNhat.Location = new System.Drawing.Point(336, 8);
            this.btnCapNhat.Name = "btnCapNhat";
            this.btnCapNhat.Size = new System.Drawing.Size(75, 23);
            this.btnCapNhat.TabIndex = 2;
            this.btnCapNhat.Text = "Cập nhật";
            this.btnCapNhat.UseVisualStyleBackColor = true;
            this.btnCapNhat.Click += new System.EventHandler(this.btnCapNhat_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.lstSo);
            this.groupBox1.Location = new System.Drawing.Point(16, 44);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(167, 227);
            this.groupBox1.TabIndex = 3;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Danh sách số:";
            // 
            // lstSo
            // 
            this.lstSo.Dock = System.Windows.Forms.DockStyle.Fill;
            this.lstSo.FormattingEnabled = true;
            this.lstSo.Location = new System.Drawing.Point(3, 16);
            this.lstSo.Name = "lstSo";
            this.lstSo.SelectionMode = System.Windows.Forms.SelectionMode.MultiSimple;
            this.lstSo.Size = new System.Drawing.Size(161, 208);
            this.lstSo.TabIndex = 0;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.btnChonSoLe);
            this.groupBox2.Controls.Add(this.btnChonSoChan);
            this.groupBox2.Controls.Add(this.btnThayBangBinhPhuong);
            this.groupBox2.Controls.Add(this.btnTangMoiPhanTuLen2);
            this.groupBox2.Controls.Add(this.btnXoaPhanTuDangChon);
            this.groupBox2.Controls.Add(this.btnXoaPhanTuDauVaCuoi);
            this.groupBox2.Controls.Add(this.btnTongCuaDanhSach);
            this.groupBox2.Location = new System.Drawing.Point(213, 44);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(205, 227);
            this.groupBox2.TabIndex = 4;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Chọn chức năng:";
            // 
            // btnTongCuaDanhSach
            // 
            this.btnTongCuaDanhSach.Location = new System.Drawing.Point(7, 20);
            this.btnTongCuaDanhSach.Name = "btnTongCuaDanhSach";
            this.btnTongCuaDanhSach.Size = new System.Drawing.Size(192, 23);
            this.btnTongCuaDanhSach.TabIndex = 0;
            this.btnTongCuaDanhSach.Text = "Tổng của danh sách";
            this.btnTongCuaDanhSach.UseVisualStyleBackColor = true;
            this.btnTongCuaDanhSach.Click += new System.EventHandler(this.btnTongCuaDanhSach_Click);
            // 
            // btnXoaPhanTuDauVaCuoi
            // 
            this.btnXoaPhanTuDauVaCuoi.Location = new System.Drawing.Point(7, 49);
            this.btnXoaPhanTuDauVaCuoi.Name = "btnXoaPhanTuDauVaCuoi";
            this.btnXoaPhanTuDauVaCuoi.Size = new System.Drawing.Size(192, 23);
            this.btnXoaPhanTuDauVaCuoi.TabIndex = 0;
            this.btnXoaPhanTuDauVaCuoi.Text = "Xóa phần tử đầu và cuối";
            this.btnXoaPhanTuDauVaCuoi.UseVisualStyleBackColor = true;
            this.btnXoaPhanTuDauVaCuoi.Click += new System.EventHandler(this.btnXoaPhanTuDauVaCuoi_Click);
            // 
            // btnXoaPhanTuDangChon
            // 
            this.btnXoaPhanTuDangChon.Location = new System.Drawing.Point(7, 78);
            this.btnXoaPhanTuDangChon.Name = "btnXoaPhanTuDangChon";
            this.btnXoaPhanTuDangChon.Size = new System.Drawing.Size(192, 23);
            this.btnXoaPhanTuDangChon.TabIndex = 0;
            this.btnXoaPhanTuDangChon.Text = "Xóa phần tử đang chọn";
            this.btnXoaPhanTuDangChon.UseVisualStyleBackColor = true;
            this.btnXoaPhanTuDangChon.Click += new System.EventHandler(this.btnXoaPhanTuDangChon_Click);
            // 
            // btnTangMoiPhanTuLen2
            // 
            this.btnTangMoiPhanTuLen2.Location = new System.Drawing.Point(7, 107);
            this.btnTangMoiPhanTuLen2.Name = "btnTangMoiPhanTuLen2";
            this.btnTangMoiPhanTuLen2.Size = new System.Drawing.Size(192, 23);
            this.btnTangMoiPhanTuLen2.TabIndex = 0;
            this.btnTangMoiPhanTuLen2.Text = "Tăng mỗi phần tử lên 2";
            this.btnTangMoiPhanTuLen2.UseVisualStyleBackColor = true;
            this.btnTangMoiPhanTuLen2.Click += new System.EventHandler(this.btnTangMoiPhanTuLen2_Click);
            // 
            // btnThayBangBinhPhuong
            // 
            this.btnThayBangBinhPhuong.Location = new System.Drawing.Point(6, 136);
            this.btnThayBangBinhPhuong.Name = "btnThayBangBinhPhuong";
            this.btnThayBangBinhPhuong.Size = new System.Drawing.Size(192, 23);
            this.btnThayBangBinhPhuong.TabIndex = 0;
            this.btnThayBangBinhPhuong.Text = "Thay bằng bình phương";
            this.btnThayBangBinhPhuong.UseVisualStyleBackColor = true;
            this.btnThayBangBinhPhuong.Click += new System.EventHandler(this.btnThayBangBinhPhuong_Click);
            // 
            // btnChonSoChan
            // 
            this.btnChonSoChan.Location = new System.Drawing.Point(6, 165);
            this.btnChonSoChan.Name = "btnChonSoChan";
            this.btnChonSoChan.Size = new System.Drawing.Size(192, 23);
            this.btnChonSoChan.TabIndex = 0;
            this.btnChonSoChan.Text = "Chọn số chẵn";
            this.btnChonSoChan.UseVisualStyleBackColor = true;
            this.btnChonSoChan.Click += new System.EventHandler(this.btnChonSoChan_Click);
            // 
            // btnChonSoLe
            // 
            this.btnChonSoLe.Location = new System.Drawing.Point(6, 194);
            this.btnChonSoLe.Name = "btnChonSoLe";
            this.btnChonSoLe.Size = new System.Drawing.Size(192, 23);
            this.btnChonSoLe.TabIndex = 0;
            this.btnChonSoLe.Text = "Chọn số lẻ";
            this.btnChonSoLe.UseVisualStyleBackColor = true;
            this.btnChonSoLe.Click += new System.EventHandler(this.btnChonSoLe_Click);
            // 
            // btnKetThuc
            // 
            this.btnKetThuc.Location = new System.Drawing.Point(16, 279);
            this.btnKetThuc.Name = "btnKetThuc";
            this.btnKetThuc.Size = new System.Drawing.Size(402, 23);
            this.btnKetThuc.TabIndex = 5;
            this.btnKetThuc.Text = "Kết thúc chương trình";
            this.btnKetThuc.UseVisualStyleBackColor = true;
            this.btnKetThuc.Click += new System.EventHandler(this.btnKetThuc_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(423, 311);
            this.Controls.Add(this.btnKetThuc);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.btnCapNhat);
            this.Controls.Add(this.txtSo);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Bài tập rèn luyện Listbox";
            this.groupBox1.ResumeLayout(false);
            this.groupBox2.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtSo;
        private System.Windows.Forms.Button btnCapNhat;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.ListBox lstSo;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button btnChonSoLe;
        private System.Windows.Forms.Button btnChonSoChan;
        private System.Windows.Forms.Button btnThayBangBinhPhuong;
        private System.Windows.Forms.Button btnTangMoiPhanTuLen2;
        private System.Windows.Forms.Button btnXoaPhanTuDangChon;
        private System.Windows.Forms.Button btnXoaPhanTuDauVaCuoi;
        private System.Windows.Forms.Button btnTongCuaDanhSach;
        private System.Windows.Forms.Button btnKetThuc;
    }
}

