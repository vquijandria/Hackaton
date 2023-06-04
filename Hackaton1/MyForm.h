#pragma once
#include "Caritas.h"

namespace Hackaton1 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Caritas* caritas;
	private: System::Windows::Forms::Timer^ timer1;
		   Graphics^ g;
	public:
		MyForm(void)
		{
			InitializeComponent();
			caritas = new Caritas();
			g = this->CreateGraphics();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1487, 681);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		caritas->mostrar(g);
	}
	};
}
