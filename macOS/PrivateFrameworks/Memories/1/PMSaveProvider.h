//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VEKProduction;

@interface PMSaveProvider : NSObject
{
    VEKProduction *_production;
}

@property(retain, nonatomic) VEKProduction *production; // @synthesize production=_production;
- (void).cxx_destruct;
- (void)save:(BOOL)arg1;
- (id)initWithProduction:(id)arg1;

@end

