//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSArrayController, NSSegmentedControl, NSString;

@interface KNMacEffectSegmentedControlController : NSObject
{
    NSString *_attributeKeyPath;
    NSArrayController *_selectedModelObjectsController;
    NSArray *_staticItems;
    BOOL _enabled;
    NSSegmentedControl *_segmentedControl;
    NSArray *_animationProxies;
}

@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSArray *animationProxies; // @synthesize animationProxies=_animationProxies;
@property(retain, nonatomic) NSSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_updateEnabledState;
- (void)p_segmentedControlHit:(id)arg1;
- (id)p_selectedItems;
- (void)p_updateSelection;
- (void)p_updateSegmentItems;
- (id)p_listItems;
- (id)initWithAttributeKeyPath:(id)arg1 staticItems:(id)arg2 selectedModelObjectsController:(id)arg3;
- (void)p_commonInitWithAttributeKeyPath:(id)arg1 selectedModelObjectsController:(id)arg2;
- (void)dealloc;

@end

