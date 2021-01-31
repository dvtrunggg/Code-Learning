namespace Bai32
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
            this.chklstLeft = new System.Windows.Forms.CheckedListBox();
            this.btnMoveOneFromLeftToRight = new System.Windows.Forms.Button();
            this.btnMoveAllFromLeftToRight = new System.Windows.Forms.Button();
            this.btnMoveOneFromRightToLeft = new System.Windows.Forms.Button();
            this.btnMoveAllFromRightToLeft = new System.Windows.Forms.Button();
            this.chklstRight = new System.Windows.Forms.CheckedListBox();
            this.SuspendLayout();
            // 
            // chklstLeft
            // 
            this.chklstLeft.FormattingEnabled = true;
            this.chklstLeft.Location = new System.Drawing.Point(24, 23);
            this.chklstLeft.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.chklstLeft.Name = "chklstLeft";
            this.chklstLeft.Size = new System.Drawing.Size(278, 379);
            this.chklstLeft.TabIndex = 0;
            // 
            // btnMoveOneFromLeftToRight
            // 
            this.btnMoveOneFromLeftToRight.Location = new System.Drawing.Point(336, 62);
            this.btnMoveOneFromLeftToRight.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.btnMoveOneFromLeftToRight.Name = "btnMoveOneFromLeftToRight";
            this.btnMoveOneFromLeftToRight.Size = new System.Drawing.Size(150, 44);
            this.btnMoveOneFromLeftToRight.TabIndex = 1;
            this.btnMoveOneFromLeftToRight.Text = ">";
            this.btnMoveOneFromLeftToRight.UseVisualStyleBackColor = true;
            this.btnMoveOneFromLeftToRight.Click += new System.EventHandler(this.btnMoveOneFromLeftToRight_Click);
            // 
            // btnMoveAllFromLeftToRight
            // 
            this.btnMoveAllFromLeftToRight.Location = new System.Drawing.Point(336, 140);
            this.btnMoveAllFromLeftToRight.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.btnMoveAllFromLeftToRight.Name = "btnMoveAllFromLeftToRight";
            this.btnMoveAllFromLeftToRight.Size = new System.Drawing.Size(150, 44);
            this.btnMoveAllFromLeftToRight.TabIndex = 2;
            this.btnMoveAllFromLeftToRight.Text = ">>";
            this.btnMoveAllFromLeftToRight.UseVisualStyleBackColor = true;
            this.btnMoveAllFromLeftToRight.Click += new System.EventHandler(this.btnMoveAllFromLeftToRight_Click);
            // 
            // btnMoveOneFromRightToLeft
            // 
            this.btnMoveOneFromRightToLeft.Location = new System.Drawing.Point(336, 227);
            this.btnMoveOneFromRightToLeft.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.btnMoveOneFromRightToLeft.Name = "btnMoveOneFromRightToLeft";
            this.btnMoveOneFromRightToLeft.Size = new System.Drawing.Size(150, 44);
            this.btnMoveOneFromRightToLeft.TabIndex = 3;
            this.btnMoveOneFromRightToLeft.Text = "<";
            this.btnMoveOneFromRightToLeft.UseVisualStyleBackColor = true;
            this.btnMoveOneFromRightToLeft.Click += new System.EventHandler(this.btnMoveOneFromRightToLeft_Click);
            // 
            // btnMoveAllFromRightToLeft
            // 
            this.btnMoveAllFromRightToLeft.Location = new System.Drawing.Point(336, 306);
            this.btnMoveAllFromRightToLeft.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.btnMoveAllFromRightToLeft.Name = "btnMoveAllFromRightToLeft";
            this.btnMoveAllFromRightToLeft.Size = new System.Drawing.Size(150, 44);
            this.btnMoveAllFromRightToLeft.TabIndex = 4;
            this.btnMoveAllFromRightToLeft.Text = "<<";
            this.btnMoveAllFromRightToLeft.UseVisualStyleBackColor = true;
            this.btnMoveAllFromRightToLeft.Click += new System.EventHandler(this.btnMoveAllFromRightToLeft_Click);
            // 
            // chklstRight
            // 
            this.chklstRight.FormattingEnabled = true;
            this.chklstRight.Location = new System.Drawing.Point(538, 23);
            this.chklstRight.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.chklstRight.Name = "chklstRight";
            this.chklstRight.Size = new System.Drawing.Size(284, 394);
            this.chklstRight.TabIndex = 5;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(846, 434);
            this.Controls.Add(this.chklstRight);
            this.Controls.Add(this.btnMoveAllFromRightToLeft);
            this.Controls.Add(this.btnMoveOneFromRightToLeft);
            this.Controls.Add(this.btnMoveAllFromLeftToRight);
            this.Controls.Add(this.btnMoveOneFromLeftToRight);
            this.Controls.Add(this.chklstLeft);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Margin = new System.Windows.Forms.Padding(6, 6, 6, 6);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.CheckedListBox chklstLeft;
        private System.Windows.Forms.Button btnMoveOneFromLeftToRight;
        private System.Windows.Forms.Button btnMoveAllFromLeftToRight;
        private System.Windows.Forms.Button btnMoveOneFromRightToLeft;
        private System.Windows.Forms.Button btnMoveAllFromRightToLeft;
        private System.Windows.Forms.CheckedListBox chklstRight;
    }
}

