//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, NSSet, NSString, STTextTangierInteractiveCanvasController;

@protocol STTextTangierInteractiveCanvasControllerDataSource <NSObject>
- (NSSet *)topLevelLayersForInteractiveCanvasController:(STTextTangierInteractiveCanvasController *)arg1;
- (NSArray *)topLevelRepsForInteractiveCanvasController:(STTextTangierInteractiveCanvasController *)arg1;

@optional
- (NSString *)stringForLookupItemForInteractiveCanvasController:(STTextTangierInteractiveCanvasController *)arg1;
@end

