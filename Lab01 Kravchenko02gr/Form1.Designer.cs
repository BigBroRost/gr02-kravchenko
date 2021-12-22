namespace Lab01_Kravchenko02gr
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.typesfigure = new System.Windows.Forms.ComboBox();
            this.figure = new System.Windows.Forms.Label();
            this.Add = new System.Windows.Forms.Button();
            this.Delete = new System.Windows.Forms.Button();
            this.Pictures = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.Pictures)).BeginInit();
            this.SuspendLayout();
            // 
            // typesfigure
            // 
            this.typesfigure.FormattingEnabled = true;
            this.typesfigure.Items.AddRange(new object[] {
            "circle",
            "square"});
            this.typesfigure.Location = new System.Drawing.Point(75, 12);
            this.typesfigure.Name = "typesfigure";
            this.typesfigure.Size = new System.Drawing.Size(121, 21);
            this.typesfigure.TabIndex = 0;
            // 
            // figure
            // 
            this.figure.AutoSize = true;
            this.figure.Location = new System.Drawing.Point(30, 13);
            this.figure.Name = "figure";
            this.figure.Size = new System.Drawing.Size(39, 26);
            this.figure.TabIndex = 1;
            this.figure.Text = "Figure:\r\n\r\n";
            // 
            // Add
            // 
            this.Add.Location = new System.Drawing.Point(261, 12);
            this.Add.Name = "Add";
            this.Add.Size = new System.Drawing.Size(106, 27);
            this.Add.TabIndex = 2;
            this.Add.Text = "Add";
            this.Add.UseVisualStyleBackColor = true;
            this.Add.Click += new System.EventHandler(this.Add_Click);
            // 
            // Delete
            // 
            this.Delete.Location = new System.Drawing.Point(387, 12);
            this.Delete.Name = "Delete";
            this.Delete.Size = new System.Drawing.Size(106, 27);
            this.Delete.TabIndex = 3;
            this.Delete.Text = "Delete";
            this.Delete.UseVisualStyleBackColor = true;
            this.Delete.Click += new System.EventHandler(this.Delete_Click);
            // 
            // Pictures
            // 
            this.Pictures.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.Pictures.Location = new System.Drawing.Point(7, 45);
            this.Pictures.Name = "Pictures";
            this.Pictures.Size = new System.Drawing.Size(617, 467);
            this.Pictures.TabIndex = 4;
            this.Pictures.TabStop = false;
            this.Pictures.Paint += new System.Windows.Forms.PaintEventHandler(this.Pictures_Paint);
            this.Pictures.MouseDown += new System.Windows.Forms.MouseEventHandler(this.Pictures_MouseDown);
            this.Pictures.MouseMove += new System.Windows.Forms.MouseEventHandler(this.Pictures_MouseMove);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(636, 516);
            this.Controls.Add(this.Pictures);
            this.Controls.Add(this.Delete);
            this.Controls.Add(this.Add);
            this.Controls.Add(this.figure);
            this.Controls.Add(this.typesfigure);
            this.Name = "Form1";
            this.Text = "Lab01 Kravchenko02";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.Pictures)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox typesfigure;
        private System.Windows.Forms.Label figure;
        private System.Windows.Forms.Button Add;
        private System.Windows.Forms.Button Delete;
        private System.Windows.Forms.PictureBox Pictures;
    }
}

