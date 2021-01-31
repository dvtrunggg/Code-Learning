namespace Bai38
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
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.txtMangGoc = new System.Windows.Forms.TextBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.txtKetQua = new System.Windows.Forms.TextBox();
            this.btnXuatMangNgauNhien = new System.Windows.Forms.Button();
            this.btnTimPhanTuNhoNhat = new System.Windows.Forms.Button();
            this.btnTinhTongGiaTriMang = new System.Windows.Forms.Button();
            this.btnTangMoiPhanTuLen2 = new System.Windows.Forms.Button();
            this.btnDemSoPhanTuLe = new System.Windows.Forms.Button();
            this.btnSapXepTang = new System.Windows.Forms.Button();
            this.btnTongSoPhanTuLe = new System.Windows.Forms.Button();
            this.btnSapXepGiam = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.txtMangGoc);
            this.groupBox1.Location = new System.Drawing.Point(13, 13);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(455, 46);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Mảng gốc:";
            // 
            // txtMangGoc
            // 
            this.txtMangGoc.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txtMangGoc.Location = new System.Drawing.Point(3, 16);
            this.txtMangGoc.Name = "txtMangGoc";
            this.txtMangGoc.Size = new System.Drawing.Size(449, 20);
            this.txtMangGoc.TabIndex = 0;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.txtKetQua);
            this.groupBox2.Location = new System.Drawing.Point(13, 65);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(455, 52);
            this.groupBox2.TabIndex = 1;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Kết quả:";
            // 
            // txtKetQua
            // 
            this.txtKetQua.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txtKetQua.Location = new System.Drawing.Point(3, 16);
            this.txtKetQua.Name = "txtKetQua";
            this.txtKetQua.Size = new System.Drawing.Size(449, 20);
            this.txtKetQua.TabIndex = 0;
            // 
            // btnXuatMangNgauNhien
            // 
            this.btnXuatMangNgauNhien.Location = new System.Drawing.Point(12, 124);
            this.btnXuatMangNgauNhien.Name = "btnXuatMangNgauNhien";
            this.btnXuatMangNgauNhien.Size = new System.Drawing.Size(218, 24);
            this.btnXuatMangNgauNhien.TabIndex = 2;
            this.btnXuatMangNgauNhien.Text = "Xuất mảng ngẫu nhiên";
            this.btnXuatMangNgauNhien.UseVisualStyleBackColor = true;
            this.btnXuatMangNgauNhien.Click += new System.EventHandler(this.btnXuatMangNgauNhien_Click);
            // 
            // btnTimPhanTuNhoNhat
            // 
            this.btnTimPhanTuNhoNhat.Location = new System.Drawing.Point(250, 124);
            this.btnTimPhanTuNhoNhat.Name = "btnTimPhanTuNhoNhat";
            this.btnTimPhanTuNhoNhat.Size = new System.Drawing.Size(218, 24);
            this.btnTimPhanTuNhoNhat.TabIndex = 2;
            this.btnTimPhanTuNhoNhat.Text = "Tìm phần tử nhỏ nhất";
            this.btnTimPhanTuNhoNhat.UseVisualStyleBackColor = true;
            this.btnTimPhanTuNhoNhat.Click += new System.EventHandler(this.btnTimPhanTuNhoNhat_Click);
            // 
            // btnTinhTongGiaTriMang
            // 
            this.btnTinhTongGiaTriMang.Location = new System.Drawing.Point(12, 164);
            this.btnTinhTongGiaTriMang.Name = "btnTinhTongGiaTriMang";
            this.btnTinhTongGiaTriMang.Size = new System.Drawing.Size(218, 24);
            this.btnTinhTongGiaTriMang.TabIndex = 2;
            this.btnTinhTongGiaTriMang.Text = "Tính tổng giá trị mảng";
            this.btnTinhTongGiaTriMang.UseVisualStyleBackColor = true;
            this.btnTinhTongGiaTriMang.Click += new System.EventHandler(this.btnTinhTongGiaTriMang_Click);
            // 
            // btnTangMoiPhanTuLen2
            // 
            this.btnTangMoiPhanTuLen2.Location = new System.Drawing.Point(250, 164);
            this.btnTangMoiPhanTuLen2.Name = "btnTangMoiPhanTuLen2";
            this.btnTangMoiPhanTuLen2.Size = new System.Drawing.Size(218, 24);
            this.btnTangMoiPhanTuLen2.TabIndex = 2;
            this.btnTangMoiPhanTuLen2.Text = "Tăng mỗi phần tử lên 2";
            this.btnTangMoiPhanTuLen2.UseVisualStyleBackColor = true;
            this.btnTangMoiPhanTuLen2.Click += new System.EventHandler(this.btnTangMoiPhanTuLen2_Click);
            // 
            // btnDemSoPhanTuLe
            // 
            this.btnDemSoPhanTuLe.Location = new System.Drawing.Point(12, 205);
            this.btnDemSoPhanTuLe.Name = "btnDemSoPhanTuLe";
            this.btnDemSoPhanTuLe.Size = new System.Drawing.Size(218, 24);
            this.btnDemSoPhanTuLe.TabIndex = 2;
            this.btnDemSoPhanTuLe.Text = "Đếm số phần tử lẻ";
            this.btnDemSoPhanTuLe.UseVisualStyleBackColor = true;
            this.btnDemSoPhanTuLe.Click += new System.EventHandler(this.btnDemSoPhanTuLe_Click);
            // 
            // btnSapXepTang
            // 
            this.btnSapXepTang.Location = new System.Drawing.Point(250, 205);
            this.btnSapXepTang.Name = "btnSapXepTang";
            this.btnSapXepTang.Size = new System.Drawing.Size(218, 24);
            this.btnSapXepTang.TabIndex = 2;
            this.btnSapXepTang.Text = "Sắp xếp tăng";
            this.btnSapXepTang.UseVisualStyleBackColor = true;
            this.btnSapXepTang.Click += new System.EventHandler(this.btnSapXepTang_Click);
            // 
            // btnTongSoPhanTuLe
            // 
            this.btnTongSoPhanTuLe.Location = new System.Drawing.Point(12, 243);
            this.btnTongSoPhanTuLe.Name = "btnTongSoPhanTuLe";
            this.btnTongSoPhanTuLe.Size = new System.Drawing.Size(218, 24);
            this.btnTongSoPhanTuLe.TabIndex = 2;
            this.btnTongSoPhanTuLe.Text = "Tổng số phần tử lẻ";
            this.btnTongSoPhanTuLe.UseVisualStyleBackColor = true;
            this.btnTongSoPhanTuLe.Click += new System.EventHandler(this.btnTongSoPhanTuLe_Click);
            // 
            // btnSapXepGiam
            // 
            this.btnSapXepGiam.Location = new System.Drawing.Point(250, 243);
            this.btnSapXepGiam.Name = "btnSapXepGiam";
            this.btnSapXepGiam.Size = new System.Drawing.Size(218, 24);
            this.btnSapXepGiam.TabIndex = 2;
            this.btnSapXepGiam.Text = "Sắp xếp giảm";
            this.btnSapXepGiam.UseVisualStyleBackColor = true;
            this.btnSapXepGiam.Click += new System.EventHandler(this.btnSapXepGiam_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(479, 290);
            this.Controls.Add(this.btnSapXepGiam);
            this.Controls.Add(this.btnSapXepTang);
            this.Controls.Add(this.btnTangMoiPhanTuLen2);
            this.Controls.Add(this.btnTimPhanTuNhoNhat);
            this.Controls.Add(this.btnTongSoPhanTuLe);
            this.Controls.Add(this.btnDemSoPhanTuLe);
            this.Controls.Add(this.btnTinhTongGiaTriMang);
            this.Controls.Add(this.btnXuatMangNgauNhien);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Name = "Form1";
            this.Text = "Làm việc với mảng";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.TextBox txtMangGoc;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.TextBox txtKetQua;
        private System.Windows.Forms.Button btnXuatMangNgauNhien;
        private System.Windows.Forms.Button btnTimPhanTuNhoNhat;
        private System.Windows.Forms.Button btnTinhTongGiaTriMang;
        private System.Windows.Forms.Button btnTangMoiPhanTuLen2;
        private System.Windows.Forms.Button btnDemSoPhanTuLe;
        private System.Windows.Forms.Button btnSapXepTang;
        private System.Windows.Forms.Button btnTongSoPhanTuLe;
        private System.Windows.Forms.Button btnSapXepGiam;
    }
}

