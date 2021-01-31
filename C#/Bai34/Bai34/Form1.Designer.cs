namespace Bai34
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
            this.pnButton = new System.Windows.Forms.FlowLayoutPanel();
            this.btnTHem = new System.Windows.Forms.Button();
            this.btnXoa = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(28, 9);
            this.label1.Margin = new System.Windows.Forms.Padding(6, 0, 6, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(338, 25);
            this.label1.TabIndex = 0;
            this.label1.Text = "Thêm Control và gán sự kiện Runtime";
            // 
            // pnButton
            // 
            this.pnButton.AutoScroll = true;
            this.pnButton.FlowDirection = System.Windows.Forms.FlowDirection.TopDown;
            this.pnButton.Location = new System.Drawing.Point(33, 56);
            this.pnButton.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.pnButton.Name = "pnButton";
            this.pnButton.Size = new System.Drawing.Size(334, 319);
            this.pnButton.TabIndex = 1;
            this.pnButton.WrapContents = false;
            // 
            // btnTHem
            // 
            this.btnTHem.Location = new System.Drawing.Point(15, 387);
            this.btnTHem.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.btnTHem.Name = "btnTHem";
            this.btnTHem.Size = new System.Drawing.Size(150, 44);
            this.btnTHem.TabIndex = 2;
            this.btnTHem.Text = "Thêm";
            this.btnTHem.UseVisualStyleBackColor = true;
            this.btnTHem.Click += new System.EventHandler(this.btnTHem_Click);
            // 
            // btnXoa
            // 
            this.btnXoa.Location = new System.Drawing.Point(278, 390);
            this.btnXoa.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.btnXoa.Name = "btnXoa";
            this.btnXoa.Size = new System.Drawing.Size(150, 44);
            this.btnXoa.TabIndex = 3;
            this.btnXoa.Text = "Xóa";
            this.btnXoa.UseVisualStyleBackColor = true;
            this.btnXoa.Click += new System.EventHandler(this.btnXoa_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(457, 457);
            this.Controls.Add(this.btnXoa);
            this.Controls.Add(this.btnTHem);
            this.Controls.Add(this.pnButton);
            this.Controls.Add(this.label1);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.FlowLayoutPanel pnButton;
        private System.Windows.Forms.Button btnTHem;
        private System.Windows.Forms.Button btnXoa;
    }
}

