#pragma once

#include "Bengine/Layer.h"

#include "Bengine/Events/ApplicationEvent.h"
#include "Bengine/Events/MouseEvent.h"
#include "Bengine/Events/KeyEvent.h"

namespace Bengine
{

	class BENGINE_API ImGuiLayer : public Layer
	{

	public:
		ImGuiLayer();
		~ImGuiLayer();

		void OnAttach();
		void OnDetach();
		void OnUpdate();
		void OnEvent(Event& event);
	private:
		bool OnMouseButtonPressedEvent(MouseButtonPressedEvent& event);
		bool OnMouseButtonReleasedEvent(MouseButtonReleasedEvent& event);
		bool OnMouseMovedEvent(MouseMovedEvent& event);
		bool OnMouseScrolledEvent(MouseScrolledEvent& event);
		bool OnKeyPressedEvent(KeyPressedEvent& event);
		bool OnKeyReleasedEvent(KeyReleasedEvent& event);
		bool OnKeyTypedEvent(KeyTypedEvent& event);
		bool OnWindowRezisedEvent(WindowResizeEvent& event);
	private:
		float m_Time = 0;
	};
}

