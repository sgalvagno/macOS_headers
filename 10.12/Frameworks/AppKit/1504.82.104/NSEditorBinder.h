//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSBinder.h>

@interface NSEditorBinder : NSBinder
{
    struct __editorBinderFlags {
        unsigned int _conditionallySetsEditable:1;
        unsigned int _objectSupportsEditable:1;
        unsigned int _explicitlyRequestEditable:1;
        unsigned int _explicitEditableState:1;
        unsigned int _conditionallySetsEnabled:1;
        unsigned int _objectSupportsEnabled:1;
        unsigned int _explicitlyRequestEnabled:1;
        unsigned int _explicitEnabledState:1;
        unsigned int _conditionallySetsHidden:1;
        unsigned int _objectSupportsHidden:1;
        unsigned int _explicitlyRequestHidden:1;
        unsigned int _explicitHiddenState:1;
        unsigned int _reservedEditorBinder:20;
    } _editorBinderFlags;
    id _editableBinder;
}

+ (id)_pluginProtocol;
- (void)_adjustStatesOfObject:(id)arg1 mode:(struct __NSKeyValueCodingControllerModeType)arg2 state:(BOOL)arg3 triggerRedisplay:(BOOL)arg4;
- (BOOL)_isExplicitlyNonEditable;
- (BOOL)_conditionallySetsStates;
- (BOOL)conditionallySetsHidden;
- (BOOL)selectionSupportsEnabledState;
- (void)setConditionallySetsHidden:(BOOL)arg1;
- (BOOL)conditionallySetsEnabled;
- (void)setConditionallySetsEnabled:(BOOL)arg1;
- (BOOL)conditionallySetsEditable;
- (void)setConditionallySetsEditable:(BOOL)arg1;
- (id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(BOOL)arg2;
- (BOOL)_isReferenceBinding:(id)arg1;
- (void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3;
- (BOOL)shouldProcessObservations;
- (void)_noticeEditablePeerBinder:(id)arg1;
- (void)_clearDependenciesWithAllPeerBinders;
- (void)_setObject:(id)arg1;
- (void)_copyDetailsFromBinder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_init;

@end

