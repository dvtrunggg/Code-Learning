using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Bai28
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void txtName_TextChanged(object sender, EventArgs e)
        {
            if (picOn.Visible == false)
            {
                btnTurnOnOrOff.Text = txtName.Text + ". Turn on the light, please!";
            }
            else
            {
                btnTurnOnOrOff.Text = txtName.Text + ". Turn Off the light, please!";
            }
            
        }

        private void btnTurnOnOrOff_Click(object sender, EventArgs e)
        {
            if(picOn.Visible==false)
            {
                picOn.Visible = true;
                picOff.Visible = false;
                btnTurnOnOrOff.Text = btnTurnOnOrOff.Text.Replace("on", "off");
            }
            else
            {
                picOn.Visible = false;
                picOff.Visible = true;
                btnTurnOnOrOff.Text = btnTurnOnOrOff.Text.Replace("off", "on");
            }
        }

        private void btnThoat_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
