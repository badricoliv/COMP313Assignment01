#include "PacmanGame.h"
#include "FirstPersonCharacter__pf205484891.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "DmgTypeBP_Environmental__pf1001828891.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "FirstPerson_AnimBP__pf2002337985.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "PauseMenu__pf2132744816.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/HeadMountedDisplay/Public/XRGestureConfig.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AFirstPersonCharacter_C__pf205484891::AFirstPersonCharacter_C__pf205484891(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		auto& __Local__3 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleHalfHeight() )));
		__Local__3 = 96.000000f;
		auto& __Local__4 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleRadius() )));
		__Local__4 = 55.000000f;
		__Local__0->AreaClass = UNavArea_Obstacle::StaticClass();
		auto& __Local__5 = (*(AccessPrivateProperty<float >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
		__Local__5 = 238.150284f;
		static TWeakFieldPtr<FProperty> __Local__7{};
		const FProperty* __Local__6 = __Local__7.Get();
		if (nullptr == __Local__6)
		{
			__Local__6 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__6);
			__Local__7 = __Local__6;
		}
		(((FBoolProperty*)__Local__6)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		__Local__1->NavAgentProps.AgentRadius = 48.000000f;
		__Local__1->NavAgentProps.AgentHeight = 192.000000f;
		static TWeakFieldPtr<FProperty> __Local__9{};
		const FProperty* __Local__8 = __Local__9.Get();
		if (nullptr == __Local__8)
		{
			__Local__8 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__8);
			__Local__9 = __Local__8;
		}
		(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__11{};
		const FProperty* __Local__10 = __Local__11.Get();
		if (nullptr == __Local__10)
		{
			__Local__10 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__10);
			__Local__11 = __Local__10;
		}
		(((FBoolProperty*)__Local__10)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		auto& __Local__12 = (*(AccessPrivateProperty<float >(&(__Local__2->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
		__Local__12 = 0.000000f;
		auto& __Local__13 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__13 = __Local__0;
		auto& __Local__14 = (*(AccessPrivateProperty<FVector >((__Local__2), USceneComponent::__PPO__RelativeLocation() )));
		__Local__14 = FVector(0.000000, -1.412910, -40.578861);
		auto& __Local__15 = (*(AccessPrivateProperty<FRotator >((__Local__2), USceneComponent::__PPO__RelativeRotation() )));
		__Local__15 = FRotator(0.000000, 359.999146, -0.000000);
		static TWeakFieldPtr<FProperty> __Local__17{};
		const FProperty* __Local__16 = __Local__17.Get();
		if (nullptr == __Local__16)
		{
			__Local__16 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__16);
			__Local__17 = __Local__16;
		}
		(((FBoolProperty*)__Local__16)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__FirstPersonCamera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	bpv__Mesh2P__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh2P"));
	bpv__FP_Gun__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	bpv__Sphere__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	bpv__L_MotionController__pf = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	bpv__R_MotionController__pf = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	bpv__VR_Gun__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	bpv__VR_Marker__pf = CreateDefaultSubobject<USphereComponent>(TEXT("VR_Marker"));
	bpv__FirstPersonCamera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FirstPersonCamera__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FirstPersonCamera__pf->bUsePawnControlRotation = true;
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__FirstPersonCamera__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__18 = FVector(-39.484440, 1.752765, 64.248421);
	static TWeakFieldPtr<FProperty> __Local__20{};
	const FProperty* __Local__19 = __Local__20.Get();
	if (nullptr == __Local__19)
	{
		__Local__19 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__19);
		__Local__20 = __Local__19;
	}
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__FirstPersonCamera__pf), false, 0));
	bpv__Mesh2P__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Mesh2P__pf->AttachToComponent(bpv__FirstPersonCamera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Mesh2P__pf->AnimClass = UFirstPerson_AnimBP_C__pf2002337985::StaticClass();
	bpv__Mesh2P__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Mesh2P__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Mesh2P__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__Mesh2P__pf->bOnlyOwnerSee = true;
	bpv__Mesh2P__pf->CastShadow = false;
	bpv__Mesh2P__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_Yes;
	auto& __Local__21 = (*(AccessPrivateProperty<float >(&(bpv__Mesh2P__pf->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	__Local__21 = 35.816422f;
	bpv__Mesh2P__pf->SetCollisionProfileName(FName(TEXT("CharacterMesh")));
	auto& __Local__22 = (*(AccessPrivateProperty<FVector >((bpv__Mesh2P__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__22 = FVector(3.293318, -4.998758, -161.327179);
	auto& __Local__23 = (*(AccessPrivateProperty<FRotator >((bpv__Mesh2P__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__23 = FRotator(1.921141, -19.911285, 5.287787);
	bpv__Mesh2P__pf->bEditableWhenInherited = false;
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__Mesh2P__pf), false, 0));
	bpv__FP_Gun__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FP_Gun__pf->AttachToComponent(bpv__Mesh2P__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FP_Gun__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__FP_Gun__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__FP_Gun__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__FP_Gun__pf->CastShadow = false;
	auto& __Local__24 = (*(AccessPrivateProperty<float >(&(bpv__FP_Gun__pf->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	__Local__24 = 0.000000f;
	auto& __Local__25 = (*(AccessPrivateProperty<FVector >((bpv__FP_Gun__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__25 = FVector(4.764772, 3.480677, 84.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<FRotator >((bpv__FP_Gun__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__26 = FRotator(0.000000, 10.000000, -0.000000);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__FP_Gun__pf), false, 0));
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->AttachToComponent(bpv__FP_Gun__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sphere__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__27 = (*(AccessPrivateProperty<float >(&(bpv__Sphere__pf->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	__Local__27 = 0.307177f;
	auto& __Local__28 = (*(AccessPrivateProperty<FVector >((bpv__Sphere__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__28 = FVector(-0.122750, 53.496822, 10.776361);
	auto& __Local__29 = (*(AccessPrivateProperty<FRotator >((bpv__Sphere__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__29 = FRotator(2.661656, 83.960274, 7.573271);
	auto& __Local__30 = (*(AccessPrivateProperty<FVector >((bpv__Sphere__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__30 = FVector(0.117650, 0.117650, 0.114726);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__Sphere__pf), true, 0));
	bpv__L_MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__L_MotionController__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__L_MotionController__pf), false, 0));
	bpv__R_MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__R_MotionController__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__R_MotionController__pf->MotionSource = FName(TEXT("Right"));
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__R_MotionController__pf), false, 0));
	bpv__VR_Gun__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VR_Gun__pf->AttachToComponent(bpv__R_MotionController__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__VR_Gun__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__VR_Gun__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AFirstPersonCharacter_C__pf205484891::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__VR_Gun__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	bpv__VR_Gun__pf->CastShadow = false;
	auto& __Local__31 = (*(AccessPrivateProperty<float >(&(bpv__VR_Gun__pf->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	__Local__31 = 0.000000f;
	auto& __Local__32 = (*(AccessPrivateProperty<FRotator >((bpv__VR_Gun__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__32 = FRotator(0.000000, -90.000000, 0.000000);
	bpv__VR_Gun__pf->bHiddenInGame = true;
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__VR_Gun__pf), false, 0));
	bpv__VR_Marker__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VR_Marker__pf->AttachToComponent(bpv__VR_Gun__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__VR_Marker__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__33 = (*(AccessPrivateProperty<float >(&(bpv__VR_Marker__pf->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	__Local__33 = 0.307177f;
	auto& __Local__34 = (*(AccessPrivateProperty<FVector >((bpv__VR_Marker__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__34 = FVector(0.000004, 53.999992, 10.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<FRotator >((bpv__VR_Marker__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__35 = FRotator(0.000000, 89.999992, 0.000000);
	auto& __Local__36 = (*(AccessPrivateProperty<FVector >((bpv__VR_Marker__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__36 = FVector(0.117650, 0.117650, 0.114726);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__VR_Marker__pf), true, 0));
	bpv__GunOffset__pf = FVector(100.000000, 0.000000, -10.000000);
	bpv__BaseTurnRate__pf = 45.000000f;
	bpv__BaseLookUpRate__pf = 45.000000f;
	bpv__UsingMotionControllersx__pfzy = false;
	bpv__FingerIndex__pf = ETouchIndex::Type::Touch1;
	bpv__PausexMenuxReference__pfTT = nullptr;
	auto& __Local__37 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__37 = __Local__2;
	auto& __Local__38 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__38 = __Local__1;
	auto& __Local__39 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__39 = __Local__0;
	auto& __Local__40 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__40 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AFirstPersonCharacter_C__pf205484891::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__FirstPersonCamera__pf)
	{
		bpv__FirstPersonCamera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Mesh2P__pf)
	{
		bpv__Mesh2P__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FP_Gun__pf)
	{
		bpv__FP_Gun__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__L_MotionController__pf)
	{
		bpv__L_MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__R_MotionController__pf)
	{
		bpv__R_MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__VR_Gun__pf)
	{
		bpv__VR_Gun__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__VR_Marker__pf)
	{
		bpv__VR_Marker__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AFirstPersonCharacter_C__pf205484891::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UFirstPerson_AnimBP_C__pf2002337985::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPauseMenu_C__pf2132744816::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__41 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__41);
	auto __Local__42 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__42);
	auto __Local__43 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__43);
	auto __Local__44 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__44);
	static TWeakFieldPtr<FProperty> __Local__46{};
	const FProperty* __Local__45 = __Local__46.Get();
	if (nullptr == __Local__45)
	{
		__Local__45 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__45);
		__Local__46 = __Local__45;
	}
	(((FBoolProperty*)__Local__45)->SetPropertyValue_InContainer((__Local__41), false, 0));
	__Local__42->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__42->InputAxisDelegateBindings.AddUninitialized(6);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__42->InputAxisDelegateBindings.GetData(), 6);
	auto& __Local__47 = __Local__42->InputAxisDelegateBindings[0];
	__Local__47.InputAxisName = FName(TEXT("LookUpRate"));
	__Local__47.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62"));
	auto& __Local__48 = __Local__42->InputAxisDelegateBindings[1];
	__Local__48.InputAxisName = FName(TEXT("TurnRate"));
	__Local__48.FunctionNameToBind = FName(TEXT("InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34"));
	auto& __Local__49 = __Local__42->InputAxisDelegateBindings[2];
	__Local__49.InputAxisName = FName(TEXT("MoveRight"));
	__Local__49.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192"));
	__Local__49.bConsumeInput = false;
	__Local__49.bOverrideParentBinding = false;
	auto& __Local__50 = __Local__42->InputAxisDelegateBindings[3];
	__Local__50.InputAxisName = FName(TEXT("MoveForward"));
	__Local__50.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181"));
	__Local__50.bConsumeInput = false;
	__Local__50.bOverrideParentBinding = false;
	auto& __Local__51 = __Local__42->InputAxisDelegateBindings[4];
	__Local__51.InputAxisName = FName(TEXT("LookUp"));
	__Local__51.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_172"));
	__Local__51.bOverrideParentBinding = false;
	auto& __Local__52 = __Local__42->InputAxisDelegateBindings[5];
	__Local__52.InputAxisName = FName(TEXT("Turn"));
	__Local__52.FunctionNameToBind = FName(TEXT("InpAxisEvt_Turn_K2Node_InputAxisEvent_157"));
	__Local__52.bOverrideParentBinding = false;
	__Local__43->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__43->InputKeyDelegateBindings.AddUninitialized(1);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__43->InputKeyDelegateBindings.GetData(), 1);
	auto& __Local__53 = __Local__43->InputKeyDelegateBindings[0];
	__Local__53.InputChord.Key = FKey(TEXT("P"));
	__Local__53.FunctionNameToBind = FName(TEXT("InpActEvt_P_K2Node_InputKeyEvent_0"));
	__Local__44->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__44->InputActionDelegateBindings.AddUninitialized(1);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__44->InputActionDelegateBindings.GetData(), 1);
	auto& __Local__54 = __Local__44->InputActionDelegateBindings[0];
	__Local__54.InputActionName = FName(TEXT("ResetVR"));
	__Local__54.FunctionNameToBind = FName(TEXT("InpActEvt_ResetVR_K2Node_InputActionEvent_0"));
}
PRAGMA_ENABLE_OPTIMIZATION
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_0(int32 bpp__EntryPoint__pf)
{
	UPauseMenu_C__pf2132744816* bpfv__CallFunc_Create_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bool bpfv__CallFunc_SetGamePaused_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
			}
		case 2:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UPauseMenu_C__pf2132744816>(UWidgetBlueprintLibrary::Create(this, UPauseMenu_C__pf2132744816::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				bpv__PausexMenuxReference__pfTT = bpfv__CallFunc_Create_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = true;
				}
			}
		case 5:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(bpfv__CallFunc_GetPlayerController_ReturnValue__pf, bpv__PausexMenuxReference__pfTT, EMouseLockMode::DoNotLock);
			}
		case 6:
			{
				if(::IsValid(bpv__PausexMenuxReference__pfTT))
				{
					bpv__PausexMenuxReference__pfTT->UUserWidget::AddToViewport(0);
				}
			}
		case 7:
			{
				bpfv__CallFunc_SetGamePaused_ReturnValue__pf = UGameplayStatics::SetGamePaused(this, true);
				__CurrentState = -1;
				break;
			}
		case 10:
			{
			}
		case 11:
			{
			}
		case 12:
			{
			}
		case 13:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__PausexMenuxReference__pfTT);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 1;
					break;
				}
			}
		case 14:
			{
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 32);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue__pf = UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled();
	if (!bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bUseControllerRotationYaw = false;
	if (!bpv__UsingMotionControllersx__pfzy)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(bpv__Mesh2P__pf))
	{
		bpv__Mesh2P__pf->USceneComponent::SetHiddenInGame(true, true);
	}
	if(::IsValid(bpv__VR_Gun__pf))
	{
		bpv__VR_Gun__pf->USceneComponent::SetHiddenInGame(false, false);
	}
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(0.000000, EOrientPositionSelector::OrientationAndPosition);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_3(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetActorRightVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 21);
	bpfv__CallFunc_GetActorRightVector_ReturnValue__pf = AActor::GetActorRightVector();
	if(::IsValid(bpv__FirstPersonCamera__pf))
	{
		bpfv__CallFunc_GetRightVector_ReturnValue__pf = bpv__FirstPersonCamera__pf->USceneComponent::GetRightVector();
	}
	bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2__pf = UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled();
	b0l__Temp_bool_Variable__pf = bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2__pf;
	AddMovementInput(TSwitchValue<bool , FVector >(b0l__Temp_bool_Variable__pf, b0l__K2Node_Select_Default_1__pf, 2, TSwitchPair<bool , FVector >(false, bpfv__CallFunc_GetActorRightVector_ReturnValue__pf), TSwitchPair<bool , FVector >(true, bpfv__CallFunc_GetRightVector_ReturnValue__pf)), b0l__K2Node_InputAxisEvent_AxisValue_2__pf, false);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_4(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 19);
	bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
	if(::IsValid(bpv__FirstPersonCamera__pf))
	{
		bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__FirstPersonCamera__pf->USceneComponent::GetForwardVector();
	}
	bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1__pf = UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled();
	b0l__Temp_bool_Variable_1__pf = bpfv__CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1__pf;
	AddMovementInput(TSwitchValue<bool , FVector >(b0l__Temp_bool_Variable_1__pf, b0l__K2Node_Select_Default__pf, 2, TSwitchPair<bool , FVector >(false, bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf), TSwitchPair<bool , FVector >(true, bpfv__CallFunc_GetForwardVector_ReturnValue__pf)), b0l__K2Node_InputAxisEvent_AxisValue_3__pf, false);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_5(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 25);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue__pf, bpv__BaseLookUpRate__pf);
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_1__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue_1__pf);
	AddControllerPitchInput(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_3__pf);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_6(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 23);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue_1__pf, bpv__BaseTurnRate__pf);
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf);
	AddControllerYawInput(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_2__pf);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 17);
	AddControllerPitchInput(b0l__K2Node_InputAxisEvent_AxisValue_4__pf);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	AddControllerYawInput(b0l__K2Node_InputAxisEvent_AxisValue_5__pf);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_1(32);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_5(25);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_6(23);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_3(21);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_4(19);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_4__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_7(17);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_5__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_8(15);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpActEvt_P_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_0(10);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_2(8);
}
void AFirstPersonCharacter_C__pf205484891::bpf__UserConstructionScript__pf()
{
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	if(::IsValid(bpv__FP_Gun__pf))
	{
		bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpv__FP_Gun__pf->USceneComponent::K2_AttachToComponent(bpv__Mesh2P__pf, FName(TEXT("GripPoint")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AFirstPersonCharacter_C__pf205484891::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/FirstPerson/Character/Mesh/SK_Mannequin_Arms.SK_Mannequin_Arms 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/FirstPerson/FPWeapon/Mesh/SK_FPGun.SK_FPGun 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AFirstPersonCharacter_C__pf205484891::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{19, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{20, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{21, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/FirstPerson/Animations/FirstPerson_JumpStart.FirstPerson_JumpStart 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/FirstPerson/Animations/FirstPerson_Idle.FirstPerson_Idle 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/FirstPerson/Character/Mesh/SK_Mannequin_Arms_Skeleton.SK_Mannequin_Arms_Skeleton 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/FirstPerson/Animations/FirstPerson_Run.FirstPerson_Run 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/FirstPerson/Animations/FirstPerson_JumpEnd.FirstPerson_JumpEnd 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/FirstPerson/Animations/FirstPerson_JumpLoop.FirstPerson_JumpLoop 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/FirstPerson/Animations/FirstPerson_AnimBP.FirstPerson_AnimBP_C 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprints/PauseMenu.PauseMenu_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AFirstPersonCharacter_C__pf205484891
{
	FRegisterHelper__AFirstPersonCharacter_C__pf205484891()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonCharacter"), &AFirstPersonCharacter_C__pf205484891::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AFirstPersonCharacter_C__pf205484891 Instance;
};
FRegisterHelper__AFirstPersonCharacter_C__pf205484891 FRegisterHelper__AFirstPersonCharacter_C__pf205484891::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
