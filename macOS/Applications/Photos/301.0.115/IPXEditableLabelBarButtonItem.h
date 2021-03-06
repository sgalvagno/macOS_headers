//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXBarButtonItem.h>

#import "IPXEditableTextFieldContainerDelegate-Protocol.h"

@class IPXEditableTextFieldContainer, NSDictionary, NSString;
@protocol IPXEditableLabelBarButtonItemDelegate;

__attribute__((visibility("hidden")))
@interface IPXEditableLabelBarButtonItem : UXBarButtonItem <IPXEditableTextFieldContainerDelegate>
{
    struct {
        char didEndEditingWithText;
    } _delegateRespondsTo;
    BOOL _shouldBeginEditing;
    id <IPXEditableLabelBarButtonItemDelegate> _delegate;
    NSDictionary *_attributes;
    IPXEditableTextFieldContainer *_textFieldContainer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IPXEditableTextFieldContainer *textFieldContainer; // @synthesize textFieldContainer=_textFieldContainer;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) __weak id <IPXEditableLabelBarButtonItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editableTextFieldContainer:(id)arg1 editingEndedWithString:(id)arg2;
- (void)beginEditingWhenPossible;
@property(readonly, nonatomic, getter=isEditing) BOOL editing;
@property(copy, nonatomic) NSString *text;
- (BOOL)_beginEditingIfPossible;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

