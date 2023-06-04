#pragma once

namespace Hackaton {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//this->DoubleBuffered = true;
			//this->SetStyle(ControlStyles::AllPaintingInWmPaint | ControlStyles::UserPaint | ControlStyles::Opaque, true);

			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	
		virtual void OnPaint(PaintEventArgs^ e) override
		{
			__super::OnPaint(e);

			Graphics^ g = e->Graphics;
			Pen^ pen = gcnew Pen(Color::Black);

			int centerX = this->ClientSize.Width / 2;  // Coordenada X del centro del círculo
			int centerY = this->ClientSize.Height / 2; // Coordenada Y del centro del círculo
			int radius = 100;                          // Radio del círculo

			int x = centerX - radius; // Coordenada X del punto inicial del círculo
			int y = centerY - radius; // Coordenada Y del punto inicial del círculo

			// Dibujar el círculo
			g->DrawEllipse(pen, x, y, radius * 2, radius * 2);

			// Dibujar los triángulos
			Point triangle1_p1(centerX - 40, centerY - radius + 60);
			Point triangle1_p2(centerX - 40, centerY - radius + 100);
			Point triangle1_p3(centerX - 10, centerY - radius + 80);
			array<Point>^ triangle1_points = { triangle1_p1, triangle1_p2, triangle1_p3 };
			g->DrawPolygon(pen, triangle1_points);

			Point triangle2_p1(centerX + 10, centerY - radius + 80);
			Point triangle2_p2(centerX + 40, centerY - radius + 100);
			Point triangle2_p3(centerX + 40, centerY - radius + 60);
			array<Point>^ triangle2_points = { triangle2_p1, triangle2_p2, triangle2_p3 };
			g->DrawPolygon(pen, triangle2_points);

			// Dibujar la raya
			g->DrawLine(pen, centerX - 40, centerY + 20, centerX + 40, centerY + 20);
		}




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 400);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
