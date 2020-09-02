// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UECS::World>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::UECS::World>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{Name::constructor, WrapConstructor<Ubpa::UECS::World()>()},
		Field{"GetSystemMngr",
			static_cast<Ubpa::UECS::SystemMngr*(*)(Ubpa::UECS::World&)>([](Ubpa::UECS::World& w) {
				return &w.systemMngr;
			})
		},
		Field{"GetSystemMngr",
			static_cast<const Ubpa::UECS::SystemMngr*(*)(const Ubpa::UECS::World&)>([](const Ubpa::UECS::World& w) {
				return &w.systemMngr;
			})
		},
		Field{Name::constructor, WrapConstructor<Ubpa::UECS::World()>()},
		Field{"GetEntityMngr",
			static_cast<Ubpa::UECS::EntityMngr * (*)(Ubpa::UECS::World&)>([](Ubpa::UECS::World& w) {
				return &w.entityMngr;
			})
		},
		Field{"GetEntityMngr",
			static_cast<const Ubpa::UECS::EntityMngr * (*)(const Ubpa::UECS::World&)>([](const Ubpa::UECS::World& w) {
				return &w.entityMngr;
			})
		},
		Field{"cmptTraits", &Ubpa::UECS::World::cmptTraits},
		Field{"Update", &Ubpa::UECS::World::Update},
		Field{"DumpUpdateJobGraph", &Ubpa::UECS::World::DumpUpdateJobGraph},
		Field{"GenUpdateFrameGraph", &Ubpa::UECS::World::GenUpdateFrameGraph},
		Field{"AddCommand", &Ubpa::UECS::World::AddCommand},
		//Field{"Accept", &Ubpa::UECS::World::Accept},
		Field{"RunEntityJob",
			static_cast<
				void(*)(
					Ubpa::UECS::World*,
					std::function<void(
						Ubpa::UECS::World*,
						Ubpa::UECS::SingletonsView,
						Ubpa::UECS::Entity,
						size_t,
						Ubpa::UECS::CmptsView
					)>,
					Ubpa::UECS::ArchetypeFilter,
					Ubpa::UECS::CmptLocator,
					Ubpa::UECS::SingletonLocator,
					bool
				)
			> (
				[](
					Ubpa::UECS::World* world,
					std::function<void(
						Ubpa::UECS::World*,
						Ubpa::UECS::SingletonsView,
						Ubpa::UECS::Entity,
						size_t,
						Ubpa::UECS::CmptsView
					)> func,
					Ubpa::UECS::ArchetypeFilter archetypeFilter,
					Ubpa::UECS::CmptLocator cmptLocator,
					Ubpa::UECS::SingletonLocator singletonLocator,
					bool isParallel
				) {
					world->RunEntityJob(
						std::move(func),
						isParallel,
						std::move(archetypeFilter),
						std::move(cmptLocator),
						std::move(singletonLocator)
					);
				}
			)
		},
		Field{"RunChunkJob",
			static_cast<
				void(*)(
					Ubpa::UECS::World*,
					std::function<void(
						Ubpa::UECS::World*,
						Ubpa::UECS::ChunkView,
						Ubpa::UECS::SingletonsView
					)>,
					Ubpa::UECS::ArchetypeFilter,
					Ubpa::UECS::SingletonLocator,
					bool
				)
			> (
				[](
					Ubpa::UECS::World* world,
					std::function<void(
						Ubpa::UECS::World*,
						Ubpa::UECS::ChunkView,
						Ubpa::UECS::SingletonsView
					)> func,
					Ubpa::UECS::ArchetypeFilter archetypeFilter,
					Ubpa::UECS::SingletonLocator singletonLocator,
					bool isParallel
				) {
					world->RunChunkJob(
						std::move(func),
						std::move(archetypeFilter),
						isParallel,
						std::move(singletonLocator)
					);
				}
			)
		},
		Field{"RunJob",
			static_cast<
				void(*)(
					Ubpa::UECS::World*,
					std::function<void(
						Ubpa::UECS::World*,
						Ubpa::UECS::SingletonsView
					)>,
					Ubpa::UECS::SingletonLocator
				)
			> (
				[](
					Ubpa::UECS::World* world,
					std::function<void(
						Ubpa::UECS::World*,
						Ubpa::UECS::SingletonsView
					)> func,
					Ubpa::UECS::SingletonLocator singletonLocator
				) {
					world->RunJob(
						std::move(func),
						std::move(singletonLocator)
					);
				}
			)
		}
	};
};

