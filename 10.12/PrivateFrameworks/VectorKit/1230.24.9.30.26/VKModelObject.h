//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, VKSharedResources, VKWorld;
@protocol MDRenderTarget, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VKModelObject : NSObject
{
    VKWorld *_world;
    VKModelObject *_supermodel;
    NSMutableArray *_submodels;
    BOOL _active;
    unsigned int _needsLayout;
    unsigned int _needsDisplay;
    NSObject<OS_dispatch_semaphore> *_drawReady;
    struct map<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer>>, std::__1::less<md::CommandBufferId>, std::__1::allocator<std::__1::pair<const md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer>>>>> _commandBuffers;
    struct CommandBufferIdSet _supportedPassIds;
    VKSharedResources *_sharedResources;
    id <MDRenderTarget> _renderTarget;
}

@property(readonly, nonatomic) id <MDRenderTarget> renderTarget; // @synthesize renderTarget=_renderTarget;
@property(readonly, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(readonly, nonatomic) VKModelObject *supermodel; // @synthesize supermodel=_supermodel;
@property(readonly, nonatomic) NSArray *submodels; // @synthesize submodels=_submodels;
@property(nonatomic) VKWorld *world; // @synthesize world=_world;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutSceneWithoutStyleManager:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)unLockCommandBuffers:(struct RenderQueue *)arg1;
- (void)lockCommandBuffers:(struct RenderQueue *)arg1;
- (void)setSupportedPasses:(const struct CommandBufferIdSet *)arg1;
- (void)gglLayoutSceneIfNeeded:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3 dispatchQueue:(id)arg4;
- (void)layoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2;
- (void)runAnimation:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)didMoveToSupermodel;
- (void)willMoveToSupermodel:(id)arg1;
- (void)clearLockedCommandBuffers;
- (void)clearCommandBuffers;
- (const struct CommandBufferIdSet *)supportedRenderPasses;
- (void)didRemoveFromSuperModel;
- (void)removeFromSupermodel;
- (void)removeSubmodel:(id)arg1;
- (void)addSubmodel:(id)arg1;
- (_Bool)hasSubmodel:(id)arg1;
- (void)_removeSubmodel:(id)arg1;
- (void)reset;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (BOOL)shouldLayoutWithoutStyleManager;
@property(readonly, nonatomic) shared_ptr_a3c46825 styleManager;
- (void)setSupermodel:(id)arg1;

@end

