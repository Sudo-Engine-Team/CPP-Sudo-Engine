#pragma once

namespace Sudo{
	class Screen{
	public:
		virtual void init() = 0;
		virtual void update(float delta) = 0;
		virtual void render() = 0;
		virtual void dispose() = 0;

		~Screen(){};
	};
};
