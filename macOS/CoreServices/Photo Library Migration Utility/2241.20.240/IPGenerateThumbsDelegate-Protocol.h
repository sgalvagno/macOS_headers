//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPGenerateThumbsOperation;

@protocol IPGenerateThumbsDelegate <NSObject>

@optional
- (void)didGenerateThumbsForOperation:(IPGenerateThumbsOperation *)arg1 finished:(BOOL)arg2;
- (void)photo:(struct IPPhotoInfo *)arg1 processedState:(int)arg2 byOperation:(IPGenerateThumbsOperation *)arg3;
- (void)willGenerateThumbsForOperation:(IPGenerateThumbsOperation *)arg1;
@end

