//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TPropertyImageViewController.h"

@interface TPropertyIconController : TPropertyImageViewController
{
    struct TFENodeVector _nodes;
    _Bool _nodesHaveSameIcon;
    _Bool _nodesHaveCustomIcon;
    _Bool _nodesCanChangeIcon;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (_Bool)progressState:(unsigned int *)arg1 amount:(unsigned int *)arg2 cancellable:(_Bool *)arg3;
- (void)concludeDragOperation:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)validatePaste:(id)arg1;
- (void)delete:(id)arg1;
- (_Bool)validateDelete:(id)arg1;
- (void)cut:(id)arg1;
- (_Bool)validateCut:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)validateCopy:(id)arg1;
- (_Bool)canModifyNodes:(const struct TFENodeVector *)arg1;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
- (void)initCommon;

@end

