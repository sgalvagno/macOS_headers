//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NCCardViewController.h"

@class NSButton, NSImageView, NSLayoutConstraint, NSTextField, NSView, _TtC21NotificationCenterApp28NotificationsTableController;

@interface NotificationCenterApp.NotificationsTableNotificationRow : NCCardViewController
{
    // Error parsing type: , name: header
    // Error parsing type: , name: appImageView
    // Error parsing type: , name: appNameLabel
    // Error parsing type: , name: dateLabel
    // Error parsing type: , name: deleteButton
    // Error parsing type: , name: body
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: titleLabelImageView
    // Error parsing type: , name: titleLabelImageWidthConstraint
    // Error parsing type: , name: titleLabelImageLeftConstraint
    // Error parsing type: , name: titleLabelHeightConstraint
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: subtitleEmptyConstraint
    // Error parsing type: , name: bodyLabel
    // Error parsing type: , name: contentImageView
    // Error parsing type: , name: contentImageTrailingConstraint
    // Error parsing type: , name: contentImageHeightConstraint
    // Error parsing type: , name: owner
    // Error parsing type: , name: selected
    // Error parsing type: , name: model
    // Error parsing type: , name: _dateTransformer
    // Error parsing type: , name: _titleImageWidthOriginal
    // Error parsing type: , name: _titleImageLeftOriginal
    // Error parsing type: , name: _selectionLayer
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)deleteClicked:(id)arg1;
- (void)viewDidLayout;
- (void)loadView;
- (void)update:(id)arg1 app:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotification:(id)arg1 app:(id)arg2;
@property(nonatomic) BOOL selected; // @synthesize selected;
@property(nonatomic) __weak _TtC21NotificationCenterApp28NotificationsTableController *owner; // @synthesize owner;
@property(nonatomic, retain) NSLayoutConstraint *contentImageHeightConstraint; // @synthesize contentImageHeightConstraint;
@property(nonatomic, retain) NSLayoutConstraint *contentImageTrailingConstraint; // @synthesize contentImageTrailingConstraint;
@property(nonatomic, retain) NSImageView *contentImageView; // @synthesize contentImageView;
@property(nonatomic, retain) NSTextField *bodyLabel; // @synthesize bodyLabel;
@property(nonatomic, retain) NSLayoutConstraint *subtitleEmptyConstraint; // @synthesize subtitleEmptyConstraint;
@property(nonatomic, retain) NSTextField *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, retain) NSLayoutConstraint *titleLabelHeightConstraint; // @synthesize titleLabelHeightConstraint;
@property(nonatomic, retain) NSLayoutConstraint *titleLabelImageLeftConstraint; // @synthesize titleLabelImageLeftConstraint;
@property(nonatomic, retain) NSLayoutConstraint *titleLabelImageWidthConstraint; // @synthesize titleLabelImageWidthConstraint;
@property(nonatomic, retain) NSImageView *titleLabelImageView; // @synthesize titleLabelImageView;
@property(nonatomic, retain) NSTextField *titleLabel; // @synthesize titleLabel;
@property(nonatomic, retain) NSView *body; // @synthesize body;
@property(nonatomic, retain) NSButton *deleteButton; // @synthesize deleteButton;
@property(nonatomic, retain) NSTextField *dateLabel; // @synthesize dateLabel;
@property(nonatomic, retain) NSTextField *appNameLabel; // @synthesize appNameLabel;
@property(nonatomic, retain) NSImageView *appImageView; // @synthesize appImageView;
@property(nonatomic, retain) NSView *header; // @synthesize header;

@end

