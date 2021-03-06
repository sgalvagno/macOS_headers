//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHFrame, KHPhotoBinViewController, KHProject, NSArray, NSString;

@protocol KHPhotoBinViewControllerDelegate <NSObject>
- (BOOL)photoBinViewControllerShouldPerformBatchUpdates:(KHPhotoBinViewController *)arg1;
- (void)removePhotosFromPhotoBinController:(NSArray *)arg1;
- (KHProject *)projectForPhotoBinController:(KHPhotoBinViewController *)arg1;

@optional
- (void)photoDraggedFromPhotoBinController:(KHPhotoBinViewController *)arg1;
- (void)photoBinDidEndScrolling;
- (void)photoPasted:(NSString *)arg1 toPhotoBinController:(KHPhotoBinViewController *)arg2;
- (KHFrame *)photoBinNeedsSelectedPhotoFrame:(KHPhotoBinViewController *)arg1;
- (void)selectionChanged;
@end

