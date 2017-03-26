//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TinyCDB;

@interface PCTDFA : NSObject
{
    TinyCDB *_edgeTable;
    TinyCDB *_dataTable;
    TinyCDB *_finalTable;
    NSString *_startState;
    NSString *_path;
}

@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *startState; // @synthesize startState=_startState;
- (void).cxx_destruct;
- (void)setDataFor:(id)arg1 to:(id)arg2;
- (id)dataFor:(id)arg1;
- (id)edgesFromState:(id)arg1;
- (BOOL)isFinalState:(id)arg1;
- (void)addFinalState:(id)arg1;
- (id)followingStateFrom:(id)arg1 withSymbol:(id)arg2;
- (void)addEdge:(id)arg1 fromState:(id)arg2 toState:(id)arg3;
- (int)getMode;
- (void)setMode:(int)arg1;
- (id)initAtPath:(id)arg1;
- (id)init;

@end

