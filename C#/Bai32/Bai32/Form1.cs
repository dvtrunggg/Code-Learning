using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai32
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            chklstLeft.Items.Add("Hà Nội");
            chklstLeft.Items.Add("Nghệ An");
            chklstLeft.Items.Add("Lâm Đồng");
            chklstLeft.Items.Add("Sài Gòn");
            chklstLeft.Items.Add("Cà Mau");
            chklstLeft.Items.Add("Côn Đảo");

            chklstLeft.Items.AddRange(new string[] {"Đà Nẵng","Cần Thơ","Tây Ninh" });
        }

        private void btnMoveOneFromLeftToRight_Click(object sender, EventArgs e)
        {
            for(int i=0;i<chklstLeft.Items.Count;i++)
            {
                if(chklstLeft.GetItemChecked(i))
                {
                    chklstRight.Items.Add(chklstLeft.Items[i]);
                    chklstLeft.Items.RemoveAt(i);
                }
            }
        }

        private void btnMoveAllFromLeftToRight_Click(object sender, EventArgs e)
        {
            chklstRight.Items.AddRange(chklstLeft.Items);
            chklstLeft.Items.Clear();
        }

        private void btnMoveOneFromRightToLeft_Click(object sender, EventArgs e)
        {
            CheckedListBox.CheckedItemCollection dsChecked = chklstRight.CheckedItems;
            foreach (var x in dsChecked)
                chklstLeft.Items.Add(x);
            while (dsChecked.Count > 0)
                chklstRight.Items.Remove(dsChecked[0]);
        }

        private void btnMoveAllFromRightToLeft_Click(object sender, EventArgs e)
        {
            chklstLeft.Items.AddRange(chklstRight.Items);
            chklstRight.Items.Clear();
        }
    }
}
