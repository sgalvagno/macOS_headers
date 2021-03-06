//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNObservable, CNUILikenessRenderingScope, NSArray;

@interface CNUIRenderedLikenessCacheEntry : NSObject
{
    id <CNCancelable> _token;
    CNObservable *_imageObservable;
    NSArray *_contacts;
    CNUILikenessRenderingScope *_scope;
}

+ (id)entryWithObservable:(id)arg1 token:(id)arg2 contacts:(id)arg3 scope:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNUILikenessRenderingScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(readonly, nonatomic) CNObservable *imageObservable; // @synthesize imageObservable=_imageObservable;
@property(readonly, nonatomic) id <CNCancelable> token; // @synthesize token=_token;
- (id)description;
- (id)initWithObservable:(id)arg1 token:(id)arg2 contacts:(id)arg3 scope:(id)arg4;

@end

