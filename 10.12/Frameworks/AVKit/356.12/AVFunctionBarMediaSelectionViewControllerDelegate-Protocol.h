//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVFunctionBarMediaSelectionOption, AVFunctionBarMediaSelectionViewController;

@protocol AVFunctionBarMediaSelectionViewControllerDelegate <NSObject>

@optional
- (void)functionBarMediaSelectionViewController:(AVFunctionBarMediaSelectionViewController *)arg1 didSelectLegibleFunctionBarMediaSelectionOption:(AVFunctionBarMediaSelectionOption *)arg2;
- (void)functionBarMediaSelectionViewController:(AVFunctionBarMediaSelectionViewController *)arg1 didSelectAudioFunctionBarMediaSelectionOption:(AVFunctionBarMediaSelectionOption *)arg2;
@end

