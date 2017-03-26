//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RWIProtocolDOMDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;
}

- (void)pseudoElementRemovedWithParentId:(int)arg1 pseudoElementId:(int)arg2;
- (void)pseudoElementAddedWithParentId:(int)arg1 pseudoElement:(id)arg2;
- (void)customElementStateChangedWithNodeId:(int)arg1 customElementState:(long long)arg2;
- (void)shadowRootPoppedWithHostId:(int)arg1 rootId:(int)arg2;
- (void)shadowRootPushedWithHostId:(int)arg1 root:(id)arg2;
- (void)childNodeRemovedWithParentNodeId:(int)arg1 nodeId:(int)arg2;
- (void)childNodeInsertedWithParentNodeId:(int)arg1 previousNodeId:(int)arg2 node:(id)arg3;
- (void)childNodeCountUpdatedWithNodeId:(int)arg1 childNodeCount:(int)arg2;
- (void)characterDataModifiedWithNodeId:(int)arg1 characterData:(id)arg2;
- (void)inlineStyleInvalidatedWithNodeIds:(id)arg1;
- (void)attributeRemovedWithNodeId:(int)arg1 name:(id)arg2;
- (void)attributeModifiedWithNodeId:(int)arg1 name:(id)arg2 value:(id)arg3;
- (void)setChildNodesWithParentId:(int)arg1 nodes:(id)arg2;
- (void)documentUpdated;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end

