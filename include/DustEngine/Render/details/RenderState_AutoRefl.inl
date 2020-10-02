// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::DustEngine::CullMode>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::DustEngine::CullMode>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"NONE", Ubpa::DustEngine::CullMode::NONE},
		Field{"FRONT", Ubpa::DustEngine::CullMode::FRONT},
		Field{"BACK", Ubpa::DustEngine::CullMode::BACK},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::DustEngine::CompareFunc>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::DustEngine::CompareFunc>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"NEVER", Ubpa::DustEngine::CompareFunc::NEVER},
		Field{"LESS", Ubpa::DustEngine::CompareFunc::LESS},
		Field{"EQUAL", Ubpa::DustEngine::CompareFunc::EQUAL},
		Field{"LESS_EQUAL", Ubpa::DustEngine::CompareFunc::LESS_EQUAL},
		Field{"GREATER", Ubpa::DustEngine::CompareFunc::GREATER},
		Field{"NOT_EQUAL", Ubpa::DustEngine::CompareFunc::NOT_EQUAL},
		Field{"GREATER_EQUAL", Ubpa::DustEngine::CompareFunc::GREATER_EQUAL},
		Field{"ALWAYS", Ubpa::DustEngine::CompareFunc::ALWAYS},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::DustEngine::Blend>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::DustEngine::Blend>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"ZERO", Ubpa::DustEngine::Blend::ZERO},
		Field{"ONE", Ubpa::DustEngine::Blend::ONE},
		Field{"SRC_COLOR", Ubpa::DustEngine::Blend::SRC_COLOR},
		Field{"INV_SRC_COLOR", Ubpa::DustEngine::Blend::INV_SRC_COLOR},
		Field{"SRC_ALPHA", Ubpa::DustEngine::Blend::SRC_ALPHA},
		Field{"INV_SRC_ALPHA", Ubpa::DustEngine::Blend::INV_SRC_ALPHA},
		Field{"DEST_ALPHA", Ubpa::DustEngine::Blend::DEST_ALPHA},
		Field{"INV_DEST_ALPHA", Ubpa::DustEngine::Blend::INV_DEST_ALPHA},
		Field{"DEST_COLOR", Ubpa::DustEngine::Blend::DEST_COLOR},
		Field{"INV_DEST_COLOR", Ubpa::DustEngine::Blend::INV_DEST_COLOR},
		Field{"SRC_ALPHA_SAT", Ubpa::DustEngine::Blend::SRC_ALPHA_SAT},
		Field{"BLEND_FACTOR", Ubpa::DustEngine::Blend::BLEND_FACTOR},
		Field{"INV_BLEND_FACTOR", Ubpa::DustEngine::Blend::INV_BLEND_FACTOR},
		Field{"SRC1_COLOR", Ubpa::DustEngine::Blend::SRC1_COLOR},
		Field{"INV_SRC1_COLOR", Ubpa::DustEngine::Blend::INV_SRC1_COLOR},
		Field{"SRC1_ALPHA", Ubpa::DustEngine::Blend::SRC1_ALPHA},
		Field{"INV_SRC1_ALPHA", Ubpa::DustEngine::Blend::INV_SRC1_ALPHA},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::DustEngine::BlendOp>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::DustEngine::BlendOp>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"ADD", Ubpa::DustEngine::BlendOp::ADD},
		Field{"SUBTRACT", Ubpa::DustEngine::BlendOp::SUBTRACT},
		Field{"REV_SUBTRACT", Ubpa::DustEngine::BlendOp::REV_SUBTRACT},
		Field{"MIN", Ubpa::DustEngine::BlendOp::MIN},
		Field{"MAX", Ubpa::DustEngine::BlendOp::MAX},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::DustEngine::BlendState>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::DustEngine::BlendState>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"enable", &Ubpa::DustEngine::BlendState::enable},
		Field{"src", &Ubpa::DustEngine::BlendState::src},
		Field{"dest", &Ubpa::DustEngine::BlendState::dest},
		Field{"op", &Ubpa::DustEngine::BlendState::op},
		Field{"srcAlpha", &Ubpa::DustEngine::BlendState::srcAlpha},
		Field{"destAlpha", &Ubpa::DustEngine::BlendState::destAlpha},
		Field{"opAlpha", &Ubpa::DustEngine::BlendState::opAlpha},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::DustEngine::StencilOp>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::DustEngine::StencilOp>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"KEEP", Ubpa::DustEngine::StencilOp::KEEP},
		Field{"ZERO", Ubpa::DustEngine::StencilOp::ZERO},
		Field{"REPLACE", Ubpa::DustEngine::StencilOp::REPLACE},
		Field{"INCR_SAT", Ubpa::DustEngine::StencilOp::INCR_SAT},
		Field{"DECR_SAT", Ubpa::DustEngine::StencilOp::DECR_SAT},
		Field{"INVERT", Ubpa::DustEngine::StencilOp::INVERT},
		Field{"INCR", Ubpa::DustEngine::StencilOp::INCR},
		Field{"DECR", Ubpa::DustEngine::StencilOp::DECR},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::DustEngine::StencilState>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::DustEngine::StencilState>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"enable", &Ubpa::DustEngine::StencilState::enable},
		Field{"ref", &Ubpa::DustEngine::StencilState::ref},
		Field{"readMask", &Ubpa::DustEngine::StencilState::readMask},
		Field{"writeMask", &Ubpa::DustEngine::StencilState::writeMask},
		Field{"failOp", &Ubpa::DustEngine::StencilState::failOp},
		Field{"depthFailOp", &Ubpa::DustEngine::StencilState::depthFailOp},
		Field{"passOp", &Ubpa::DustEngine::StencilState::passOp},
		Field{"func", &Ubpa::DustEngine::StencilState::func},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::DustEngine::RenderState>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::DustEngine::RenderState>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"cullMode", &Ubpa::DustEngine::RenderState::cullMode},
		Field{"zTest", &Ubpa::DustEngine::RenderState::zTest},
		Field{"zWrite", &Ubpa::DustEngine::RenderState::zWrite},
		Field{"stencilState", &Ubpa::DustEngine::RenderState::stencilState},
		Field{"blendState", &Ubpa::DustEngine::RenderState::blendState},
		Field{"colorMask", &Ubpa::DustEngine::RenderState::colorMask},
	};
};
