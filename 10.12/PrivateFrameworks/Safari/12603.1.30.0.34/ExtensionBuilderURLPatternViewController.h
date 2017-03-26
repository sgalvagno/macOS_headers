//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/ExtensionBuilderIndexedItemViewController.h>

@class NSButton, NSLayoutConstraint, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface ExtensionBuilderURLPatternViewController : ExtensionBuilderIndexedItemViewController
{
    NSButton *_deleteButton;
    NSView *_urlPatternErrorContainerView;
    NSTextField *_urlPatternTextField;
    NSLayoutConstraint *_urlPatternErrorContainerViewToBottomBorderVerticalConstraint;
}

+ (id)keyPathsForValuesAffectingUrlPatternErrorText;
@property(retain, nonatomic) NSLayoutConstraint *urlPatternErrorContainerViewToBottomBorderVerticalConstraint; // @synthesize urlPatternErrorContainerViewToBottomBorderVerticalConstraint=_urlPatternErrorContainerViewToBottomBorderVerticalConstraint;
@property(nonatomic) __weak NSTextField *urlPatternTextField; // @synthesize urlPatternTextField=_urlPatternTextField;
@property(nonatomic) __weak NSView *urlPatternErrorContainerView; // @synthesize urlPatternErrorContainerView=_urlPatternErrorContainerView;
@property(nonatomic) __weak NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void).cxx_destruct;
- (void)_representedObjectDidChange;
- (id)initialFirstResponder;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)nibName;
@property(readonly, nonatomic) NSString *urlPatternErrorText;
@property(retain) NSString *representedObject; // @dynamic representedObject;
- (void)_updateURLPatternError;
- (BOOL)_representedObjectIsValidURLPattern;

@end

