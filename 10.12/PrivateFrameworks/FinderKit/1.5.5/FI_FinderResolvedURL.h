//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FI_FinderResolvedURL : NSObject
{
    struct TFENode _node;
    struct TNSRef<NSURL *, void> _url;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)url;
- (const struct TFENode *)node;
- (id)initWithURL:(id)arg1 andNode:(const struct TFENode *)arg2;

@end

