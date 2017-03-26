//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSVSystemDialogOptions, NSArray, NSMutableArray;

@interface MSVSystemDialog : NSObject
{
    NSMutableArray *_textFields;
    struct __CFUserNotification *_presentedUserNotification;
    struct __CFRunLoopSource *_activeRunLoopSource;
    CDUnknownBlockType _pendingCompletion;
    MSVSystemDialogOptions *_options;
}

+ (id)passwordAlertWithOptions:(id)arg1;
+ (id)systemDialogWithOptions:(id)arg1;
@property(readonly, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(readonly, nonatomic) MSVSystemDialogOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearTextFields;
- (void)addTextFieldWithTitle:(id)arg1 secure:(BOOL)arg2;
- (void)addTextField:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType pendingCompletion;
@property(nonatomic) struct __CFRunLoopSource *activeRunLoopSource;
@property(nonatomic) struct __CFUserNotification *presentedUserNotification;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end

