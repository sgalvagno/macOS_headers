//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSFont;

__attribute__((visibility("hidden")))
@interface FI_TListBaseCellView : NSTableCellView
{
    _Bool _isEmphasized;
    _Bool _isDisabled;
    _Bool _isResizing;
    struct TNSRef<FI_TListTextField *, void> _titleTextField;
}

@property(nonatomic, getter=isResizing) _Bool resizing; // @synthesize resizing=_isResizing;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_isDisabled;
@property(nonatomic, getter=isEmphasized) _Bool emphasized; // @synthesize emphasized=_isEmphasized;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)idealSize;
- (_Bool)isLTRLocalization;
@property(readonly, nonatomic) _Bool isSelected; // @dynamic isSelected;
@property(copy, nonatomic) NSFont *titleFont;

@end

