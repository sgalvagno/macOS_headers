//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FI_TPopoverSubviewData : NSObject
{
    struct TNSRef<FI_TView *, void> _subview;
    struct TNSRef<FI_TLayoutBinder *, void> _layoutBinder;
    struct TNSRef<FI_TGradientSeparator *, void> _separator;
    struct TNSRef<FI_TLayoutBinder *, void> _separatorLayoutBinder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeSeparator;
- (void)addSeparator;
- (id)layoutBinder;
- (id)subview;
- (void)dealloc;
- (id)initWithSubview:(id)arg1;

@end

