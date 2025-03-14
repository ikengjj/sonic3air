/*
*	Part of the Oxygen Engine / Sonic 3 A.I.R. software distribution.
*	Copyright (C) 2017-2025 by Eukaryot
*
*	Published under the GNU GPLv3 open source software license, see license.txt
*	or https://www.gnu.org/licenses/gpl-3.0.en.html
*/

#pragma once

#ifdef RMX_WITH_OPENGL_SUPPORT

#include "oxygen/rendering/opengl/shaders/OpenGLShader.h"
#include "oxygen/rendering/parts/RenderItem.h"

class OpenGLDrawer;
class OpenGLRenderResources;


class RenderComponentSpriteShader : public OpenGLShader
{
public:
	void initialize(bool alphaTest);
	void draw(const renderitems::ComponentSpriteInfo& spriteInfo, const Vec2i& gameResolution, OpenGLRenderResources& resources);

private:
	Vec2i mLastGameResolution;

	GLuint mLocGameResolution = 0;
	GLuint mLocPosition = 0;
	GLuint mLocPivotOffset = 0;
	GLuint mLocSize = 0;
	GLuint mLocTransformation = 0;
	GLuint mLocTintColor = 0;
	GLuint mLocAddedColor = 0;
};

#endif
