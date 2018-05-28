#pragma once

namespace Sudo{
	class VBO{
	private:
		int id;
	public:
		VBO();

		static void bind(int id);
		static void dispose(int id);
		static int* create();
		void bind();
		void upload(int pos, int size, auto* data);
	};
};
